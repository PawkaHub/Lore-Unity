﻿using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandShowTextField : SequencerCommand {

		string textField;
		string name;
		string value;

		//Hide Text Input
		
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
			textField = GetParameter (0);
			name = GetParameter (1);
			value = GetParameter (2);
			//Debug.Log ("Set Showing Input to true!");
			DialogueLua.SetVariable ("DisableContinue", true);
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
		}
		
		public void OnDestroy() {
			// Add your finalization code here. This is critical. If the sequence is cancelled and this
			// command is marked as "required", then only Start() and OnDestroy() will be called.
			// If you don't need to do anything at the end, you can delete this method.
			DialogueLua.SetVariable ("DisableContinue", false);
		}

		public void OnShowInput() {
			//Debug.Log ("OnShowInput!");
			//Debug.Log (textField);
			//Debug.Log (name);
			//Debug.Log (value);
			PixelCrushers.DialogueSystem.DialogueManager.PlaySequence("TextInput(" + textField + "," + name + "," + value + ")");
			Stop ();
		}
	}
	
}