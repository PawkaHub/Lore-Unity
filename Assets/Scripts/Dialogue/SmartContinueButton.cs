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
		
		public UnityUITypewriterEffect typewriterEffect;

		public SmartTextField textField;

		public void Awake() {
			if (dialogueUI == null) {
				dialogueUI = Tools.GetComponentAnywhere<UnityUIDialogueUI>(gameObject);
			}
			if (typewriterEffect == null) {
				typewriterEffect = GetComponentInChildren<UnityUITypewriterEffect>();
			}
		}
		
		public void OnFastForward() {
			if ((typewriterEffect != null) && typewriterEffect.IsPlaying) {
				typewriterEffect.Stop ();
			} else {
				//Disable continue whenever a text field is present
				if ((textField != null) && textField.IsVisible == false) {
					Debug.Log ("Go");
					if (dialogueUI != null) dialogueUI.OnContinue ();
				}
			}
		}
		
	}
	
}
#endif