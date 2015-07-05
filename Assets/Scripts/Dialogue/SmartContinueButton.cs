#if !(UNITY_4_3 || UNITY_4_5)
using UnityEngine;
using System.Collections;

namespace PixelCrushers.DialogueSystem {
	
	/// <summary>
	/// This script replaces the normal continue button functionality with
	/// a two-stage process. If the typewriter effect is still playing, it
	/// simply stops the effect. Otherwise it sends OnContinue to the UI.
	/// </summary>
	public class SmartContinueButton : MonoBehaviour {
		
		public UnityUIDialogueUI dialogueUI;
		
		public SmartTypeWriter typewriterEffect;

		public SmartTextField textField;

		public void Awake() {
			if (dialogueUI == null) {
				dialogueUI = Tools.GetComponentAnywhere<UnityUIDialogueUI>(gameObject);
			}
			if (typewriterEffect == null) {
				typewriterEffect = GetComponentInChildren<SmartTypeWriter>();
			}
		}
		
		public void OnFastForward() {
			if ((typewriterEffect != null) && typewriterEffect.IsPlaying) {
				typewriterEffect.Stop ();
			} else {
				//Disable continue whenever a text field is present
				bool showingInput = DialogueLua.GetVariable("ShowingInput").AsBool;

				if ((textField != null) && textField.IsVisible == false) {
					//Debug.Log ("Go");
					//If we're showing an input, fire a message to trigger the showTextField event. Otherwise, continue the dialog.
					if (showingInput == true) {
						//Debug.Log ("Show input from continue!!");
						//DialogueManager.Instance.SendMessage("OnShowInput");
					} else {
						Debug.Log ("Continue as normal!");
						if (dialogueUI != null) dialogueUI.OnContinue ();
					}
				}
			}
		}
		
	}
	
}
#endif