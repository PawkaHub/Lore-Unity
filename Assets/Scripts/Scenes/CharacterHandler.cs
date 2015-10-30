using UnityEngine;
using System.Collections;
using Parse;

public class CharacterHandler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		var player = new Player();
		Debug.Log ("CharacterHandler");
	
		string gamertag = player.gamertag;
		Debug.Log (gamertag);

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
