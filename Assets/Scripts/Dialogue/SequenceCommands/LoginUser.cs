using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;
using Parse;
using System.Threading.Tasks;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandLoginUser : SequencerCommand {
		
		private enum State { Idle, Loading, Success, Error }
		private State state = State.Idle;

		string email;
		string password;
		
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
			
			email = DialogueLua.GetVariable ("Login.Email").AsString;
			password = DialogueLua.GetVariable ("Login.Passcode").AsString;
			
			Debug.Log ("LoginUser");
			Debug.Log (email);
			Debug.Log (password);
			
			if (email == null) return;
			if (password == null) return;

			//Debug: Logout User to test login flow on every login attempt
			//ParseUser.LogOut();
			
			state = State.Loading;

			ParseUser.LogInAsync(email,password).ContinueWith(t => {
				if (t.IsFaulted) {
					Debug.Log ("User Login Error!"); 
					state = State.Error;
				} else {
					Debug.Log ("User Login Succeeded!");
					state = State.Success;
				}
			});
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
			//Debug.Log (queryCompleted);
			switch (state) {
			case State.Idle:
				//Debug.Log("Idle!");
				break;
			case State.Loading:
				//Debug.Log("Loading!");
				break;
			case State.Success:
				Debug.Log("Success!");
				DialogueLua.SetVariable ("Login.Successful",true);
				Stop ();
				break;
			case State.Error:
				Debug.Log("Error");
				DialogueLua.SetVariable ("Login.Successful",false);
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