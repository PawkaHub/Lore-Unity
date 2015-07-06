#if !(UNITY_4_3 || UNITY_4_5)
using UnityEngine;
using UnityEngine.UI;
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
		public InputField textField;

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

		//private TouchScreenKeyboard keyboard;

		//private TouchScreenKeyboard keyboard;

		//private TouchScreenKeyboard keyboard = TouchScreenKeyboard;

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
				TouchScreenKeyboard.hideInput = true;
			}
			this.acceptedText = acceptedText;
			Show();
			isAwaitingInput = true;
			textFieldLabel = labelText;

		}

		public void Update() {
			if (isAwaitingInput) {
				//Debug.Log ("Update");
				//Detect mobile support
				if (Input.GetKeyDown(acceptKey)) {
					AcceptTextInput();
				} /*else if (keyboard != null) {
					Debug.Log ("Mobile Keyboard support!");
					if (keyboard.done) {
						Debug.Log ("Mobile Done Pressed!");
						AcceptTextInput();
					}
				}*/
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
			isAwaitingInput = false;
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
		}

		private void Show() {
			IsVisible = true;
			SetActive(true);
			if (textField != null) {
				textField.ActivateInputField();
				//keyboard = TouchScreenKeyboard;
				TouchScreenKeyboard.hideInput = true;
				//Disable continue button while the text field is active
				if (UnityEngine.EventSystems.EventSystem.current != null) {
					UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(textField.gameObject, null);
				}
			}
		}

		private void Hide() {
			IsVisible = false;
			SetActive(false);
			DialogueLua.SetVariable ("ShowingInput", false);
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