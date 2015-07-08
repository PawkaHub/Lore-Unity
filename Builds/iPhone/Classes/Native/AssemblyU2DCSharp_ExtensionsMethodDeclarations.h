﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Extensions
struct Extensions_t428;
// PhotonView[]
struct PhotonViewU5BU5D_t633;
// UnityEngine.GameObject
struct GameObject_t49;
// PhotonView
struct PhotonView_t353;
// System.Collections.IDictionary
struct IDictionary_t634;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.Int32[]
struct Int32U5BU5D_t119;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
extern "C" PhotonViewU5BU5D_t633* Extensions_GetPhotonViewsInChildren_m1576 (Object_t * __this /* static, unused */, GameObject_t49 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
extern "C" PhotonView_t353 * Extensions_GetPhotonView_m1577 (Object_t * __this /* static, unused */, GameObject_t49 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" bool Extensions_AlmostEquals_m1578 (Object_t * __this /* static, unused */, Vector3_t53  ___target, Vector3_t53  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool Extensions_AlmostEquals_m1579 (Object_t * __this /* static, unused */, Vector2_t97  ___target, Vector2_t97  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" bool Extensions_AlmostEquals_m1580 (Object_t * __this /* static, unused */, Quaternion_t69  ___target, Quaternion_t69  ___second, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
extern "C" bool Extensions_AlmostEquals_m1581 (Object_t * __this /* static, unused */, float ___target, float ___second, float ___floatDiff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C" void Extensions_Merge_m1582 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C" void Extensions_MergeStringKeys_m1583 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C" String_t* Extensions_ToStringFull_m1584 (Object_t * __this /* static, unused */, Object_t * ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C" Hashtable_t464 * Extensions_StripToStringKeys_m1585 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C" void Extensions_StripKeysWithNullValues_m1586 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
extern "C" bool Extensions_Contains_m1587 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___target, int32_t ___nr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
