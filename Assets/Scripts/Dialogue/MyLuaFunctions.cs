using UnityEngine;
using System.Collections;
using PixelCrushers.DialogueSystem;

public class MyLuaFunctions : MonoBehaviour {
	
	void OnEnable() {
		Debug.Log ("Registering Functions");
		Lua.RegisterFunction("GameObjectExists", this, typeof(MyLuaFunctions).GetMethod("GameObjectExists"));
		Lua.RegisterFunction("InputIsValid", this, typeof(MyLuaFunctions).GetMethod("InputIsValid"));
	}
	
	void OnDisable() {
		Lua.UnregisterFunction("GameObjectExists");
		Lua.UnregisterFunction("InputIsValid");
	}
	
	public bool GameObjectExists(string name) {
		return GameObject.Find(name) != null;
	}

	public bool InputIsValid(string variableName) {
		Debug.Log ("Checking Variable Name");
		Debug.Log (variableName);
		string result = DialogueLua.GetVariable (variableName).AsString;
		Debug.Log ("Variable result");
		Debug.Log (result);
		if (result.Length > 0) {
			Debug.Log ("Result is valid!");
			return true;
		} else {
			Debug.Log ("Result is false!");
			return false;
		}
	}
}