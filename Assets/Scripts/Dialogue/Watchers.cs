using UnityEngine;
using PixelCrushers.DialogueSystem;

public class Watchers : MonoBehaviour {
	public string luaExpression = "Variable[\"ForgotEmail\"]";
	public LuaWatchFrequency watchFrequency = LuaWatchFrequency.EveryUpdate;
	void Start() {
		DialogueManager.AddLuaObserver(luaExpression,watchFrequency, OnLuaValueChanged);
	}
	void OnLuaValueChanged(LuaWatchItem luaWatchItem, Lua.Result newValue) {
		Debug.Log(string.Format("<color=magenta>{0} CHANGED TO: {1}</color>", luaExpression, newValue.AsString));
	}
}