using UnityEngine;
using System.Collections;
using Parse;

public class ParseSubclasses : MonoBehaviour {
	void Awake () {
		ParseObject.RegisterSubclass<Player>();		
	}
}
