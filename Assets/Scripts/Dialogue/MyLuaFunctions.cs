using UnityEngine;
using System.Collections;
using System.Text;
using System.Text.RegularExpressions;
using PixelCrushers.DialogueSystem;

public class MyLuaFunctions : MonoBehaviour {

	/// <summary>
	/// Regular expression, which is used to validate an E-Mail address.
	/// </summary>
	public const string MatchEmailPattern = 
		@"^(([\w-]+\.)+[\w-]+|([a-zA-Z]{1}|[\w-]{2,}))@"
			+ @"((([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])\.([0-1]?
				[0-9]{1,2}|25[0-5]|2[0-4][0-9])\."
			+ @"([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])\.([0-1]?
				[0-9]{1,2}|25[0-5]|2[0-4][0-9])){1}|"
			+ @"([a-zA-Z0-9]+[\w-]+\.)+[a-zA-Z]{1}[a-zA-Z0-9-]{1,23})$";
	
	void OnEnable() {
		Debug.Log ("Registering Functions");
		Lua.RegisterFunction("GameObjectExists", this, typeof(MyLuaFunctions).GetMethod("GameObjectExists"));
		Lua.RegisterFunction("InputIsValid", this, typeof(MyLuaFunctions).GetMethod("InputIsValid"));
		Lua.RegisterFunction("InputIsEmail", this, typeof(MyLuaFunctions).GetMethod("InputIsEmail"));
	}
	
	void OnDisable() {
		Lua.UnregisterFunction("GameObjectExists");
		Lua.UnregisterFunction("InputIsValid");
		Lua.UnregisterFunction("InputIsEmail");
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

	public bool InputIsEmail(string variableName) {
		Debug.Log ("Checking Variable Name");
		Debug.Log (variableName);
		string result = DialogueLua.GetVariable (variableName).AsString;
		Debug.Log ("Variable result");
		Debug.Log (result);
		if (result.Length > 0) {
			Debug.Log ("Result is valid!");
			return Regex.IsMatch(result,MatchEmailPattern);
		} else {
			Debug.Log ("Result is false!");
			return false;
		}
	}
	
}