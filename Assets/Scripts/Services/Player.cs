using UnityEngine;
using System.Collections;
using Parse;
	
[ParseClassName("_User")]
public class Player : ParseUser
{       
	//This is a convenient wrapper class for interacting with the currently logged in user, setting fields accordingly, and persisting the changes to Parse.
	private ParseUser currentUser;

	public Player() : base() {
		Debug.Log ("Player Constructor");
		currentUser = ParseUser.CurrentUser;
	}
	
	[ParseFieldName("gamertag")]
	public string gamertag
	{
		get { return currentUser.Get<string>("gamertag"); }
		set { currentUser["gamertag"] = value; }
	}
	
	[ParseFieldName("gender")]
	public string gender
	{
		get { return currentUser.Get<string>("gender"); }
		set { currentUser["gender"] = value; }
	}
	
	public void save() {
		Debug.Log("Save User to Parse");
		currentUser.SaveAsync ();
	}
}