#if !(UNITY_4_3 || UNITY_4_5)
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem {
	
	/// <summary>
	/// Response menu controls for UnityUIDialogueUI.
	/// </summary>
	[System.Serializable]
	public class UnityUIResponseMenuControls : AbstractUIResponseMenuControls {
		
		/// <summary>
		/// The panel containing the response menu controls. A panel is optional, but you may want one
		/// so you can include a background image, panel-wide effects, etc.
		/// </summary>
		public Graphic panel;
		
		/// <summary>
		/// The PC portrait image to show during the response menu.
		/// </summary>
		public UnityEngine.UI.Image pcImage;
		
		/// <summary>
		/// The label that will show the PC name.
		/// </summary>
		public Text pcName;
		
		/// <summary>
		/// The reminder of the last subtitle.
		/// </summary>
		public UnityUISubtitleControls subtitleReminder;
		
		/// <summary>
		/// The (optional) timer.
		/// </summary>
		public Slider timer;

		/// <summary>
		/// The response buttons, if you want to specify buttons at design time.
		/// </summary>
		public UnityUIResponseButton[] buttons;

		public UnityUIResponseButton buttonTemplate;

		public Graphic buttonTemplateHolder;

		public Scrollbar buttonTemplateScrollbar;

		public float buttonTemplateScrollbarResetValue = 1;

		public UnityEvent onContentChanged = new UnityEvent();

		/// <summary>
		/// The instantiated buttons. These are only valid during a specific response menu,
		/// and only if you're using templates. Each showing of the response menu clears 
		/// this list and re-populates it with new buttons.
		/// </summary>
		[HideInInspector]
		public List<GameObject> instantiatedButtons = new List<GameObject>();

		private UnityUITimer unityUITimer = null;
		
		private Texture2D pcPortraitTexture = null;
		private string pcPortraitName = null;

		/// <summary>
		/// Sets the PC portrait name and texture to use in the response menu.
		/// </summary>
		/// <param name="portraitTexture">Portrait texture.</param>
		/// <param name="portraitName">Portrait name.</param>
		public override void SetPCPortrait(Texture2D portraitTexture, string portraitName) {
			pcPortraitTexture = portraitTexture;
			pcPortraitName = portraitName;
		}
		
		/// <summary>
		/// Sets the portrait texture to use in the response menu if the named actor is the player.
		/// This is used to immediately update the GUI control if the SetPortrait() sequencer 
		/// command changes the portrait texture.
		/// </summary>
		/// <param name="actorName">Actor name in database.</param>
		/// <param name="portraitTexture">Portrait texture.</param>
		public override void SetActorPortraitTexture(string actorName, Texture2D portraitTexture) {
			if (string.Equals(actorName, pcPortraitName)) {
				Texture2D actorPortraitTexture = AbstractDialogueUI.GetValidPortraitTexture(actorName, portraitTexture);
				pcPortraitTexture = actorPortraitTexture;
				if ((pcImage != null) && (DialogueManager.MasterDatabase.IsPlayer(actorName))) {
					pcImage.sprite = UITools.CreateSprite(actorPortraitTexture);
				}
			}
		}
		
		public override AbstractUISubtitleControls SubtitleReminder {
			get { return subtitleReminder; }
		}
		
		/// <summary>
		/// Sets the controls active/inactive, except this method never activates the timer. If the
		/// UI's display settings specify a timeout, then the UI will call StartTimer() to manually
		/// activate the timer.
		/// </summary>
		/// <param name='value'>
		/// Value (<c>true</c> for active; otherwise inactive).
		/// </param>
		public override void SetActive(bool value) {
			SubtitleReminder.SetActive(value && SubtitleReminder.HasText);
			Tools.SetGameObjectActive(buttonTemplate, false);
			foreach (var button in buttons) {
				if (button != null) {
					Tools.SetGameObjectActive(button, value && button.visible);
				}
			}
			Tools.SetGameObjectActive(timer, false);
			Tools.SetGameObjectActive(pcName, value);
			Tools.SetGameObjectActive(pcImage, value);
			Tools.SetGameObjectActive(panel, value);
			if (value == true) {
				if ((pcImage != null) && (pcPortraitTexture != null)) pcImage.sprite = UITools.CreateSprite(pcPortraitTexture);
				if ((pcName != null) && (pcPortraitName != null)) pcName.text = pcPortraitName;
			}
		}
		
		/// <summary>
		/// Clears the response buttons.
		/// </summary>
		protected override void ClearResponseButtons() {
			DestroyInstantiatedButtons();
			if (buttons != null) {
				for (int i = 0; i < buttons.Length; i++) {
					buttons[i].Reset();
					buttons[i].visible = showUnusedButtons;
				}
			}
		}

		/// <summary>
		/// Sets the response buttons.
		/// </summary>
		/// <param name='responses'>
		/// Responses.
		/// </param>
		/// <param name='target'>
		/// Target that will receive OnClick events from the buttons.
		/// </param>
		protected override void SetResponseButtons(Response[] responses, Transform target) {
			DestroyInstantiatedButtons();

			if ((buttons != null) && (responses != null)) {
				
				// Add explicitly-positioned buttons:
				for (int i = 0; i < responses.Length; i++) {
					if (responses[i].formattedText.position != FormattedText.NoAssignedPosition) {
						int position = Mathf.Clamp(responses[i].formattedText.position, 0, buttons.Length - 1);
						SetResponseButton(buttons[position], responses[i], target);
					}
				}

				if ((buttonTemplate != null) && (buttonTemplateHolder != null)) {

					// Reset scrollbar to top:
					if (buttonTemplateScrollbar != null) {
						buttonTemplateScrollbar.value = buttonTemplateScrollbarResetValue;
					}

					// Instantiate buttons from template:
					for (int i = 0; i < responses.Length; i++) {
						GameObject buttonGameObject = GameObject.Instantiate(buttonTemplate.gameObject) as GameObject;
						if (buttonGameObject == null) {
							Debug.LogError(string.Format("{0}: Couldn't instantiate response button template", DialogueDebug.Prefix));
						} else {
							instantiatedButtons.Add(buttonGameObject);
							buttonGameObject.transform.SetParent(buttonTemplateHolder.transform, false);
							buttonGameObject.SetActive(true);
							UnityUIResponseButton responseButton = buttonGameObject.GetComponent<UnityUIResponseButton>();
							SetResponseButton(responseButton, responses[i], target);
						}
					}
				} else {

					// Auto-position remaining buttons:
					if (buttonAlignment == ResponseButtonAlignment.ToFirst) {
						
						// Align to first, so add in order to front:
						for (int i = 0; i < Mathf.Min(buttons.Length, responses.Length); i++) {
							if (responses[i].formattedText.position == FormattedText.NoAssignedPosition) {
								int position = Mathf.Clamp(GetNextAvailableResponseButtonPosition(0, 1), 0, buttons.Length - 1);
								SetResponseButton(buttons[position], responses[i], target);
							}
						}
					} else {
						
						// Align to last, so add in reverse order to back:
						for (int i = Mathf.Min(buttons.Length, responses.Length) - 1; i >= 0; i--) {
							if (responses[i].formattedText.position == FormattedText.NoAssignedPosition) {
								int position = Mathf.Clamp(GetNextAvailableResponseButtonPosition(buttons.Length - 1, -1), 0, buttons.Length - 1);
								SetResponseButton(buttons[position], responses[i], target);
							}
						}
					}
				}
			}
			NotifyContentChanged();
		}
		
		private void SetResponseButton(UnityUIResponseButton button, Response response, Transform target) {
			if (button != null) {
				button.visible = true;
				button.clickable = true;
				button.target = target;
				if (response != null) button.SetFormattedText(response.formattedText);
				button.response = response;
			}
		}
		
		private int GetNextAvailableResponseButtonPosition(int start, int direction) {
			if (buttons != null) {
				int position = start;
				while ((0 <= position) && (position < buttons.Length)) {
					if (buttons[position].clickable) {
						position += direction;
					} else {
						return position;
					}
				}
			}
			return 5;
		}

		public void DestroyInstantiatedButtons() {
			foreach (var instantiatedButton in instantiatedButtons) {
				GameObject.Destroy(instantiatedButton);
			}
			instantiatedButtons.Clear();
			NotifyContentChanged();
		}

		public void NotifyContentChanged() {
			onContentChanged.Invoke();
		}

		/// <summary>
		/// Starts the timer.
		/// </summary>
		/// <param name='timeout'>
		/// Timeout duration in seconds.
		/// </param>
		public override void StartTimer(float timeout) {
			if (timer != null) {
				if (unityUITimer == null) {
					Tools.SetGameObjectActive(timer, true);
					unityUITimer = timer.GetComponent<UnityUITimer>();
					if (unityUITimer == null) unityUITimer = timer.gameObject.AddComponent<UnityUITimer>();
					Tools.SetGameObjectActive(timer, false);
				}
				if (unityUITimer != null) {
					Tools.SetGameObjectActive(timer, true);
					unityUITimer.StartCountdown(timeout, OnTimeout);
				} else {
					if (DialogueDebug.LogWarnings) Debug.LogWarning(string.Format("{0}: No UnityUITimer component found on timer", DialogueDebug.Prefix));
				}
			}
		}
		
		/// <summary>
		/// This method is called if the timer runs out. It selects the first response.
		/// </summary>
		public void OnTimeout() {
			DialogueManager.Instance.SendMessage("OnConversationTimeout");
		}
		
		/// <summary>
		/// Auto-focuses the first response. Useful for gamepads.
		/// </summary>
		public void AutoFocus() {
			if (UnityEngine.EventSystems.EventSystem.current == null) return;
			if (instantiatedButtons.Count > 0) {
				UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(instantiatedButtons[0].gameObject, null);
			} else {
				for (int i = 0; i < buttons.Length; i++) {
					if (buttons[i].clickable) {
						UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(buttons[i].gameObject, null);
						return;
					}
				}
			}
		}
		
	}

}
#endif