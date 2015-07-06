using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;
using Parse;
using System.Threading.Tasks;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandFindUser : SequencerCommand {

		string value;
		bool queryCompleted;
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
			value = GetParameter (0);
			string result = DialogueLua.GetVariable (value).AsString;
			if (result == null) return;
			Debug.Log (string.Format("Query For User",result));
			var query = ParseUser.Query.WhereEqualTo ("email", result);
			query.FirstAsync().ContinueWith(t => {
				Debug.Log ("User Query Result!");
				user = t.Result;
				Debug.Log (user);
				queryCompleted = true;
			});
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
			Debug.Log (queryCompleted);
			if (queryCompleted) {
				Debug.Log ("User Query Completed!");
				if (user == null) {
					Debug.Log ("No User found!");
				} else {
					Debug.Log ("User found!");
				}
				Stop ();
			}
		}
		
		public void OnDestroy() {
			// Add your finalization code here. This is critical. If the sequence is cancelled and this
			// command is marked as "required", then only Start() and OnDestroy() will be called.
			// If you don't need to do anything at the end, you can delete this method.
		}
		
	}
	
}