using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;
using Parse;
using System.Threading.Tasks;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandFindUser : SequencerCommand {

		string value;
		private enum State { Idle, Loading, Success, Error }
		private State state = State.Idle;
		ParseObject user;

		public void Start() {
			// Add your initialization code here. You can use the GetParameter***() and GetSubject()
			// functions to get information from the command's parameters. You can also use the
			// Sequencer property to access the SequencerCamera, CameraAngle, Speaker, Listener,
			// and other properties on the sequencer. If IsAudioMuted() is true, the player has
			// muted audio.
			//
			// If your sequencer command only does something immediately and then finishes,
			// you can call Stop() here and remove the Update() method.
			//Disable Continue
			DialogueLua.SetVariable ("DisableContinue", true);
			value = GetParameter (0);
			Debug.Log (value);
			string result = Lua.Run("return Variable[" + value + "]").AsString;
			Debug.Log ("Query For User");
			Debug.Log (result);
			var query = ParseUser.Query.WhereEqualTo ("email", result);
			state = State.Loading;
			query.FirstAsync().ContinueWith(t => {
				if (t.IsFaulted) {
					Debug.Log ("No User Found!"); 
					state = State.Error;
					DialogueLua.SetVariable ("Forgot.Username","");
				} else {
					Debug.Log ("User Found!");
					state = State.Success;
					user = t.Result;
					//Set the Username
					DialogueLua.SetVariable ("Forgot.Username",user["username"]);
				}
			});
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
			//Debug.Log (queryCompleted);
			switch (state) {
			case State.Idle:
				Debug.Log("Idle!");
				break;
			case State.Loading:
				Debug.Log("Loading!");
				break;
			case State.Success:
				Debug.Log("Success!");
				DialogueLua.SetVariable ("Forgot.UserFound",true);
				Stop ();
				break;
			case State.Error:
				Debug.Log("Error");
				DialogueLua.SetVariable ("Forgot.UserFound",false);
				Stop ();
				break;
			}
		}
		
		public void OnDestroy() {
			// Add your finalization code here. This is critical. If the sequence is cancelled and this
			// command is marked as "required", then only Start() and OnDestroy() will be called.
			// If you don't need to do anything at the end, you can delete this method.
			DialogueLua.SetVariable ("DisableContinue", false);
		}
		
	}
	
}