using UnityEngine;
using System.Collections;

public class Warp : MonoBehaviour {

	public float warpDelay = 0;
	public string sceneName;

	void Start() {
		//Debug.Log ("Hello!");
		//Debug.Log (warpDelay);
		//Debug.Log (sceneName);
		if (warpDelay > 0) {
			//If the warpDelay is greater than zero, start a coroutine to wait before fading
			//Debug.Log ("Delay!");
			StartCoroutine(LoadSceneAfterDelay());
		} else {
			//Otherwise, just fade to the level directly
			//Debug.Log ("Instant!");
			Fading.Instance.StartFade (sceneName);
		}
	}

	private IEnumerator LoadSceneAfterDelay() 
	{
		//Debug.Log ("LoadSceneAfterDelay!");
		yield return new WaitForSeconds(warpDelay);
		Fading.Instance.StartFade (sceneName);
	}
}
