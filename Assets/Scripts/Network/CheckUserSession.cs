using UnityEngine;
using System.Collections;
using Parse;

public class CheckUserSession : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (ParseUser.CurrentUser != null)
		{
			// do stuff with the user
			Debug.Log ("User exists! Greet them back and warp them to where they last were");
		}
		else
		{
			// show the signup or login screen
			Debug.Log ("No user yet! Trigger dialogue conversations");
		}
	}
}