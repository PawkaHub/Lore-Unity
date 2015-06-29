using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem {

	public static class UITools {

		public static int GetAnimatorNameHash(AnimatorStateInfo animatorStateInfo) {
			#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6
			return animatorStateInfo.nameHash;
			#else
			return animatorStateInfo.fullPathHash;
			#endif
		}

		public static Sprite CreateSprite(Texture2D texture) {
			return (texture != null) 
				? Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero)
					: null;
		}

		public static string GetUIFormattedText(FormattedText formattedText) {
			if (formattedText == null) {
				return string.Empty;
			} else if (formattedText.italic) {
				return "<i>" + formattedText.text + "</i>";
			} else {
				return formattedText.text;
			}
		}
		
	}

}
