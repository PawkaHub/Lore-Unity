﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PixelCrushers.DialogueSystem;
using Parse;
using System.Threading.Tasks;

namespace PixelCrushers.DialogueSystem.SequencerCommands {
	
	public class SequencerCommandCreateUser : SequencerCommand {

		private enum State { Idle, Loading, Success, Error }
		private State state = State.Idle;

		string username;
		string email;
		string password;
		
		public void Start() {
			// Add your initialization code here. You can use the GetParameter***() and GetSubject()
			// functions to get information from the command's parameters. You can also use the
			// Sequencer property to access the SequencerCamera, CameraAngle, Speaker, Listener,
			// and other properties on the sequencer. If IsAudioMuted() is true, the player has
			// muted audio.
			//
			// If your sequencer command only does something immediately and then finishes,
			// you can call Stop() here and remove the Update() method.
			//Disable Continue

			DialogueLua.SetVariable ("DisableContinue", true);

			//username = Lua.Run("return Variable['Signup.Username']").AsString;
			//email = Lua.Run("return Variable['Signup.Email']").AsString;
			//password = Lua.Run("return Variable['Signup.Passcode']").AsString;

			username = DialogueLua.GetVariable ("Signup.Username").AsString;
			email = DialogueLua.GetVariable ("Signup.Email").AsString;
			password = DialogueLua.GetVariable ("Signup.Passcode").AsString;

			Debug.Log ("CreateUser");
			Debug.Log (username);
			Debug.Log (email);
			Debug.Log (password);

			//Debug: Logout User to test signup flow on every create attempt
			//ParseUser.LogOut();

			state = State.Loading;

			var user = new ParseUser()
			{
				Username = email,
				Password = password,
				Email = email
			};

			user ["gamertag"] = username;

			user.SignUpAsync().ContinueWith(t => {
				if (t.IsFaulted) {
					Debug.Log ("User Signup Error!");
					// Errors from Parse Cloud and network interactions
					using (IEnumerator<System.Exception> enumerator = t.Exception.InnerExceptions.GetEnumerator()) {
						if (enumerator.MoveNext()) {
							ParseException error = (ParseException) enumerator.Current;
							Debug.Log ("Parse Error!");
							Debug.Log (error.Message);
							// error.Message will contain an error message
							// error.Code will return "OtherCause"
						}
					}
					state = State.Error;
				} else {
					Debug.Log ("User Signup Succeeded!");
					state = State.Success;
				}
			});
		}
		
		public void Update() {
			// Add your update code here. When the command is done, call Stop().
			// If you've called stop above in Start(), you can delete this method.
			//Debug.Log (queryCompleted);
			switch (state) {
			case State.Idle:
				//Debug.Log("Idle!");
				break;
			case State.Loading:
				//Debug.Log("Loading!");
				break;
			case State.Success:
				Debug.Log("Success!");
				DialogueLua.SetVariable ("Signup.Successful",true);
				Stop ();
				break;
			case State.Error:
				Debug.Log("Error");
				DialogueLua.SetVariable ("Signup.Successful",false);
				Stop ();
				break;
			}
		}
		
		public void OnDestroy() {
			// Add your finalization code here. This is critical. If the sequence is cancelled and this
			// command is marked as "required", then only Start() and OnDestroy() will be called.
			// If you don't need to do anything at the end, you can delete this method.
			DialogueLua.SetVariable ("DisableContinue", false);
		}
		
	}
	
}