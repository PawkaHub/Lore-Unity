using UnityEngine;
using System.Collections;

public class NetworkManager : MonoBehaviour {

	//The room name for players to connect to
	private const string roomName = "Home";

	//The prefab object
	public GameObject playerPrefab;

	// Fire whenever the user has joined the room
	void OnJoinedRoom () {
		Debug.Log ("Joined room!");
		//Spawn the player into the world
		GameObject player = PhotonNetwork.Instantiate(playerPrefab.name, Vector3.up * 5, Quaternion.identity, 0);
		//Set a camera to follow the player
		GameObject.Find ("PlayerCamera").GetComponent<SmoothFollow> ().target = player.transform;
	}
	
	// Fire whenever a room has been created
	void OnCreatedRoom () {
		Debug.Log ("Created room!");
	}

	void OnJoinedLobby () {
		Debug.Log ("Joined Lobby!");

		if (!PhotonNetwork.connected) {
			Debug.Log ("Not connected to the PhotonNetwork");
		} else if (PhotonNetwork.room == null) {
			Debug.Log ("Connecting to the party room!");
			RoomOptions roomOptions = new RoomOptions() { isVisible = false, maxPlayers = 4 };
			//Eventually, to support a party based system we would just create the room name by combining player names + a GUID
			//System.Guid.NewGuid().ToString("N") so that when we send an invite over Game Center, text messaging, applinks, or
			//ingame, we can just have it so the user automatically connects to the room in that instance, and they are then a
			//part of that friend's party or guild. For now, we just connect to the default Home room for now.
			PhotonNetwork.JoinOrCreateRoom("Home", roomOptions, TypedLobby.Default);
		}
	}

	// Fire whenever the user is unable to join the room
	void OnPhotonJoinRoomFailed () {
		Debug.Log ("Failed to join room!");
	}

	// Use this for initialization
	void Start () {
		//Connect to the Photon Network
		PhotonNetwork.ConnectUsingSettings ("0.1");
	}
	
	// Update is called once per frame
	void Update () {
	}
}