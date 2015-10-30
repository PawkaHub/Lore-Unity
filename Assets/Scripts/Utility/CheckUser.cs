using UnityEngine;
using System.Collections;
using Parse;

public class CheckUser : MonoBehaviour {

	public void Start()
	{
		if (Player.CurrentUser != null)
		{
			//If the currentUser is already logged in, bypass login screen and fade them right to the title screen
			Debug.Log("CurrentUser logged in!");
			Application.LoadLevel("Title");
		}
		else
		{
			// show the signup or login screen
			Debug.Log("Go to signup!");
			Application.LoadLevel("Intro");
		}
	}
}
