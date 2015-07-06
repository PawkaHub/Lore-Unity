using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandSendEmail : SequencerCommand {
		
		string email;

		public void Start() {
			// Add your initialization code here. You can use the GetParameter***() and GetSubject()
			// functions to get information from the command's parameters. You can also use the
			// Sequencer property to access the SequencerCamera, CameraAngle, Speaker, Listener,
			// and other properties on the sequencer. If IsAudioMuted() is true, the player has
			// muted audio.
			//
			// If your sequencer command only does something immediately and then finishes,
			// you can call Stop() here and remove the Update() method.
			//Debug.Log ("Waiting for Sequence to end before showing text field!");
			email = GetParameter (0);
			Debug.Log ("Send Email!");
			SendEmail (email);
			Stop ();
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
		}
		
		public void OnDestroy() {
			// Add your finalization code here. This is critical. If the sequence is cancelled and this
			// command is marked as "required", then only Start() and OnDestroy() will be called.
			// If you don't need to do anything at the end, you can delete this method.
		}

		public void SendEmail(string variableName) {
			Debug.Log ("Send Email");
			if (variableName == null) return;
			string email = variableName;
			string subject = MyEscapeURL("I forgot my email!");
			string body = MyEscapeURL("Tell us as much information about your account as possible and we'll see how we can help you!");
			
			Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
			
		}
		
		public string MyEscapeURL (string url) {
			return WWW.EscapeURL(url).Replace("+","%20");
		}
	}
	
}