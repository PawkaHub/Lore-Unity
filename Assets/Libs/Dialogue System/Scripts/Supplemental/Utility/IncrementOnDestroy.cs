using UnityEngine;
using System.Collections;

namespace PixelCrushers.DialogueSystem {

	/// <summary>
	/// Increments an element of the Lua Variable[] table when the GameObject is destroyed,
	/// and then updates the quest tracker if it's attached to the Dialogue Manager object or
	/// its children. This script is useful for kill quests or gathering quests.
	/// 
	/// </summary>
	[AddComponentMenu("Dialogue System/Actor/Increment On Destroy")]
	public class IncrementOnDestroy : MonoBehaviour {

		/// <summary>
		/// The variable to increment.
		/// </summary>
		public string variable = string.Empty;

		/// <summary>
		/// The increment amount. To decrement, use a negative number.
		/// </summary>
		public int increment = 1;

		/// <summary>
		/// The minimum value.
		/// </summary>
		public int min = 0;

		/// <summary>
		/// The maximum value.
		/// </summary>
		public int max = 100;

		public string alertMessage = string.Empty;

		private bool listenForOnDestroy = true;
		
		/// <summary>
		/// When this object is destroyed, increment the counter and update the quest tracker.
		/// </summary>
		void OnDestroy() {
			if (!listenForOnDestroy || string.IsNullOrEmpty(variable)) return;
			int oldValue = DialogueLua.GetVariable(variable).AsInt;
			int newValue = Mathf.Clamp(oldValue + increment, min, max);
			DialogueLua.SetVariable(variable, newValue);
			if (DialogueManager.Instance != null) DialogueManager.Instance.BroadcastMessage("UpdateTracker", SendMessageOptions.DontRequireReceiver);
			if (!string.IsNullOrEmpty(alertMessage)) DialogueManager.ShowAlert(alertMessage);
		}

		/// <summary>
		/// If the level is being unloaded, this GameObject will be destroyed.
		/// We don't want to count this in the variable, so disable the script.
		/// </summary>
		public void OnLevelWillBeUnloaded() {
			listenForOnDestroy = false;
		}
		
	}

}