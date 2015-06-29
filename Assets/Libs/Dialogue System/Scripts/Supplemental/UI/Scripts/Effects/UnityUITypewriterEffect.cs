#if !(UNITY_4_3 || UNITY_4_5)
using UnityEngine;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem {

	/// <summary>
	/// This is a basic typewriter effect for Unity UI. It handles bold,
	/// italic, and color rich text tags.
	/// </summary>
	[AddComponentMenu("Dialogue System/UI/Unity UI/Effects/Unity UI Typewriter Effet")]
	public class UnityUITypewriterEffect : MonoBehaviour {

		/// <summary>
		/// How fast to "type."
		/// </summary>
		public float charactersPerSecond = 50;
		
		/// <summary>
		/// The audio clip to play with each character.
		/// </summary>
		public AudioClip audioClip = null;
		
		/// <summary>
		/// Indicates whether the effect is playing.
		/// </summary>
		/// <value><c>true</c> if this instance is playing; otherwise, <c>false</c>.</value>
		public bool IsPlaying { get; private set; }

		private UnityEngine.UI.Text control;
		private AudioSource audioSource;
		private string original = string.Empty;
		private List<string> closureTags = new List<string>();

		public void Awake() {
			control = GetComponent<UnityEngine.UI.Text>();
			audioSource = GetComponent<AudioSource>();
		}
		
		public void OnEnable() {
			if (control != null) StartCoroutine(Play());
		}
		
		public void OnDisable() {
			Stop();
		}
		
		/// <summary>
		/// Plays the typewriter effect.
		/// </summary>
		public IEnumerator Play() {
			IsPlaying = true;
			closureTags.Clear();
			original = control.text;
			int originalLength = original.Length;
			int length = 0;
			float delay = 1 / charactersPerSecond;
			while (length < originalLength) {
				if (!DialogueTime.IsPaused) {
					if (audioClip != null && audioSource != null) audioSource.PlayOneShot(audioClip);
					length = AdvanceOneCharacter(length);
					control.text = original.Substring(0, length) + GetRichTextClosures();
				}
				yield return new WaitForSeconds(delay);
			}
			control.text = original;
			IsPlaying = false;
		}

		private const string RichTextBoldOpen = "<b>";
		private const string RichTextBoldClose = "</b>";
		private const string RichTextItalicOpen = "<i>";
		private const string RichTextItalicClose = "</i>";
		private const string RichTextColorOpenPrefix = "<color=";
		private const string RichTextColorClose = "</color>";
		
		/// <summary>
		/// Advances the label one character or rich text code.
		/// </summary>
		/// <param name="control">GUI Label to advance.</param>
		private int AdvanceOneCharacter(int length) {
			if (original[length] == '<') {
				if (string.Compare(original, length, RichTextBoldOpen, 0, RichTextBoldOpen.Length) == 0) {
					closureTags.Insert(0, RichTextBoldClose);
					return length + RichTextBoldOpen.Length;
				} else if (string.Compare(original, length, RichTextBoldClose, 0, RichTextBoldClose.Length) == 0) {
					closureTags.RemoveAt(0);
					return length + RichTextBoldClose.Length;
				} else if (string.Compare(original, length, RichTextItalicOpen, 0, RichTextItalicOpen.Length) == 0) {
					closureTags.Insert(0, RichTextItalicClose);
					return length + RichTextItalicOpen.Length;
				} else if (string.Compare(original, length, RichTextItalicClose, 0, RichTextItalicClose.Length) == 0) {
					closureTags.RemoveAt(0);
					return length + RichTextItalicClose.Length;
				}if (string.Compare(original, length, RichTextColorOpenPrefix, 0, RichTextColorOpenPrefix.Length) == 0) {
					closureTags.Insert(0, RichTextColorClose);
					return length + RichTextColorOpenPrefix.Length + 10; // <color=#rrggbbaa>
				} else if (string.Compare(original, length, RichTextColorClose, 0, RichTextColorClose.Length) == 0) {
					closureTags.RemoveAt(0);
					return length + RichTextColorClose.Length;
				}
			}
			return length + 1;
		}

		private string GetRichTextClosures() {
			if (closureTags.Count == 0) return string.Empty;
			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < closureTags.Count; i++) {
				sb.Append(closureTags[i]);
			}
			return sb.ToString();
		}
		
		/// <summary>
		/// Stops the effect.
		/// </summary>
		public void Stop() {
			StopAllCoroutines();
			IsPlaying = false;
			if (control != null) control.text = original;
			original = string.Empty;
		}
		
	}

}
#endif