using UnityEngine;
using System.Collections;

public class StartGame : MonoBehaviour {

	public void NextLevelButton(string levelName)
	{
		Application.LoadLevel(levelName);
	}
}
