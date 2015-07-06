using UnityParseHelpers;
using Parse;
//using ParseUnitySampleCommon;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts.Services
{
	public class UserService : MonoBehaviour
	{
		void Awake()
		{
			//if (Loom.Instance == null) Loom.Init();
			//ParseObject.RegisterSubclass<GameUser>();
		}
		
		public Task<ParseUser> Login(string email, string password)
		{
			Debug.Log("Logging in..");
			
			return ParseUser.LogInAsync(email, password)
				.OnMainThread()
					.Then(t => Task.FromResult((ParseUser)t.Result));
		}
		
		public Task Signup(string email, string password, string playerName)
		{
			Debug.Log("Signing up..");
			
			var user = new ParseUser
			{
				Email = email,
				Username = email,
				Password = password
			};
			
			return user.SignUpAsync()
				.OnMainThread();
		}

		public Task Find (string email) {
			Debug.Log ("Finding User");
			var query = ParseUser.Query.WhereEqualTo ("email", email);
			return query.FirstAsync().Then(t => {
				Debug.Log ("User Query Result!");
				var user = t.Result;
				Debug.Log (user);
			});
		}

		public void Logout()
		{
			ParseUser.LogOut();
		}
	}
}