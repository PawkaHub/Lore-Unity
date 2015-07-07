using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PixelCrushers.DialogueSystem;
using Parse;
using System.Threading.Tasks;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandLogoutUser : SequencerCommand {
		
		private enum State { Idle, Loading, Success, Error }
		private State state = State.Idle;

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

			
			Debug.Log ("LogoutUser");

			ParseUser.LogOut();
			Stop ();

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
				Stop ();
				break;
			case State.Error:
				Debug.Log("Error");
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