#if !(UNITY_4_3 || UNITY_4_5)
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using System.Collections;

namespace PixelCrushers.DialogueSystem {

	/// <summary>
	/// Unity UI text field UI implementation.
	/// </summary>
	public class SmartTextField : MonoBehaviour, ITextFieldUI {

		/// <summary>
		/// The (optional) panel. If your text field UI contains more than a label and text field, you should
		/// assign the panel, too.
		/// </summary>
		public Graphic panel;

		/// <summary>
		/// The label that will contain any label text prompting the user what to enter.
		/// </summary>
		public Text label;

		/// <summary>
		/// The text field.
		/// </summary>
		public MobileInputField textField;

		/// <summary>
		/// The accept key.
		/// </summary>
		public KeyCode acceptKey = KeyCode.Return;

		/// <summary>
		/// The cancel key.
		/// </summary>
		public KeyCode cancelKey = KeyCode.Escape;

		public UnityEvent onAccept = new UnityEvent();

		public UnityEvent onCancel = new UnityEvent();

		public SmartContinueButton continueButton;

		/// <summary>
		/// This delegate must be called when the player accepts the input in the text field.
		/// </summary>
		private AcceptedTextDelegate acceptedText = null;

		public bool IsVisible { get; private set; }

		private bool isAwaitingInput = false;

		public string textFieldLabel;

		void Start() {
			//Config keyboard
			//Debug.Log ("SmartTextField started!");
			if (DialogueDebug.LogWarnings && (textField == null)) Debug.LogWarning(string.Format("{0}: No InputField is assigned to the text field UI {1}. TextInput() sequencer commands or [var?=] won't work.", new object[] { DialogueDebug.Prefix, name }));
			Hide();
		}

		/// <summary>
		/// Starts the text input field.
		/// </summary>
		/// <param name="labelText">The label text.</param>
		/// <param name="text">The current value to use for the input field.</param>
		/// <param name="maxLength">Max length, or <c>0</c> for unlimited.</param>
		/// <param name="acceptedText">The delegate to call when accepting text.</param>
		public void StartTextInput(string labelText, string text, int maxLength, AcceptedTextDelegate acceptedText) {
			if (label != null) label.text = labelText;
			if (textField != null) {
				textField.text = text;
				textField.characterLimit = maxLength;
				textField.keyboardType = TouchScreenKeyboardType.EmailAddress;
			}
			this.acceptedText = acceptedText;
			Show();
			isAwaitingInput = true;
			textFieldLabel = labelText;

		}

		public void Update() {
			if (isAwaitingInput) {
				//Detect mobile support
				/*if (textField != null) {
					if (!textField.isFocused && IsVisible) {
						Debug.Log ("Re-enable the field!");
						textField.ActivateInputField();
					}
				}*/
				if(textField.isFocused && Input.GetButtonDown("Submit")) {
					Debug.Log ("Return hit!");
				}
				if (Input.GetKeyDown(KeyCode.Return)) {
					Debug.Log ("Return key down~!");
				}
				if (Input.GetKeyDown(acceptKey)) {
					Debug.Log ("Accept hit!");
					AcceptTextInput();
				}
			}
		}

		/// <summary>
		/// Cancels the text input field.
		/// </summary>
		public void CancelTextInput() {
			isAwaitingInput = false;
			Hide();
			onCancel.Invoke();
		}

		/// <summary>
		/// Accepts the text input and calls the accept handler delegate.
		/// </summary>
		public void AcceptTextInput() {
			//Prevent the keyboard from dismissing
			//if(EventSystem.current.alreadySelecting == true) return;
			isAwaitingInput = false;
			Debug.Log ("AcceptTextInput fired!");
			//if(Input.GetButtonDown("Submit")){
				Debug.Log ("Submit fired!");
				if (acceptedText != null) {
					//Debug.Log ("TextField");
					//Debug.Log (textFieldLabel);
					//Debug.Log (textField.text);
					if (textField != null) {
						//Set the lua text field variables
						//Debug.Log ("Set the lua variable!");
						acceptedText(textField.text);
					}
					acceptedText = null;
				}
				Hide();
				onAccept.Invoke();
			//}
		}

		private void Show() {
			IsVisible = true;
			SetActive(true);
			if (textField != null) {
				textField.ActivateInputField();
				//Disable continue button while the text field is active
				if (UnityEngine.EventSystems.EventSystem.current != null) {
					UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(textField.gameObject, null);
				}
			}
		}

		private void Hide() {
			IsVisible = false;
			SetActive(false);
			DialogueLua.SetVariable ("DisableContinue", false);
			continueButton.OnFastForward ();
		}

		private void SetActive(bool value) {
			if (textField != null) textField.enabled = value;
			if (panel != null) {
				Tools.SetGameObjectActive(panel, value);
			} else {
				Tools.SetGameObjectActive(label, value);
				Tools.SetGameObjectActive(textField, value);
			}
		}

	}

}
#endif