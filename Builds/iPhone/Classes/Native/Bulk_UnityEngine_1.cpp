#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern "C" void SerializePrivateVariables__ctor_m16707 (SerializePrivateVariables_t4499 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3325(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern "C" void SerializeField__ctor_m3441 (SerializeField_t734 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3325(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"


// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t594 * Shader_Find_m2530 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef Shader_t594 * (*Shader_Find_m2530_ftn) (String_t*);
	static Shader_Find_m2530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_Find_m2530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m16708 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m16708_ftn) (String_t*);
	static Shader_PropertyToID_m16708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m16708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m2531 (Material_t48 * __this, Shader_t594 * ___shader, const MethodInfo* method)
{
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		Shader_t594 * L_0 = ___shader;
		Material_Internal_CreateWithShader_m16719(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m3169 (Material_t48 * __this, Material_t48 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		Material_t48 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m16720(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" Color_t121  Material_get_color_m3377 (Material_t48 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = Material_GetColor_m16712(__this, (String_t*) &_stringLiteral4140, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m3051 (Material_t48 * __this, Color_t121  ___value, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___value;
		Material_SetColor_m16709(__this, (String_t*) &_stringLiteral4140, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t731 * Material_get_mainTexture_m4990 (Material_t48 * __this, const MethodInfo* method)
{
	{
		Texture_t731 * L_0 = Material_GetTexture_m3436(__this, (String_t*) &_stringLiteral4141, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m2418 (Material_t48 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___value;
		Material_SetTextureOffset_m3437(__this, (String_t*) &_stringLiteral4141, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m16709 (Material_t48 * __this, String_t* ___propertyName, Color_t121  ___color, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m16708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t121  L_2 = ___color;
		Material_SetColor_m16710(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m16710 (Material_t48 * __this, int32_t ___nameID, Color_t121  ___color, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetColor_m16711(NULL /*static, unused*/, __this, L_0, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m16711 (Object_t * __this /* static, unused */, Material_t48 * ___self, int32_t ___nameID, Color_t121 * ___color, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m16711_ftn) (Material_t48 *, int32_t, Color_t121 *);
	static Material_INTERNAL_CALL_SetColor_m16711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m16711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t121  Material_GetColor_m16712 (Material_t48 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m16708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t121  L_2 = Material_GetColor_m16713(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t121  Material_GetColor_m16713 (Material_t48 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Color_t121  (*Material_GetColor_m16713_ftn) (Material_t48 *, int32_t);
	static Material_GetColor_m16713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetColor_m16713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t731 * Material_GetTexture_m3436 (Material_t48 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m16708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t731 * L_2 = Material_GetTexture_m16714(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t731 * Material_GetTexture_m16714 (Material_t48 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t731 * (*Material_GetTexture_m16714_ftn) (Material_t48 *, int32_t);
	static Material_GetTexture_m16714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m16714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m3437 (Material_t48 * __this, String_t* ___propertyName, Vector2_t97  ___offset, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		Material_INTERNAL_CALL_SetTextureOffset_m16715(NULL /*static, unused*/, __this, L_0, (&___offset), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m16715 (Object_t * __this /* static, unused */, Material_t48 * ___self, String_t* ___propertyName, Vector2_t97 * ___offset, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetTextureOffset_m16715_ftn) (Material_t48 *, String_t*, Vector2_t97 *);
	static Material_INTERNAL_CALL_SetTextureOffset_m16715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetTextureOffset_m16715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___propertyName, ___offset);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m16716 (Material_t48 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m16708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m16717(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m16717 (Material_t48 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m16717_ftn) (Material_t48 *, int32_t, float);
	static Material_SetFloat_m16717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m16717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m4987 (Material_t48 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m16716(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m4986 (Material_t48 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m16708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m16718(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m16718 (Material_t48 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m16718_ftn) (Material_t48 *, int32_t);
	static Material_HasProperty_m16718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m16718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m16719 (Object_t * __this /* static, unused */, Material_t48 * ___mono, Shader_t594 * ___shader, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m16719_ftn) (Material_t48 *, Shader_t594 *);
	static Material_Internal_CreateWithShader_m16719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m16719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m16720 (Object_t * __this /* static, unused */, Material_t48 * ___mono, Material_t48 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m16720_ftn) (Material_t48 *, Material_t48 *);
	static Material_Internal_CreateWithMaterial_m16720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m16720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"

// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m16721 (SphericalHarmonicsL2_t4500 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m16722(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m16722 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t4500 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723_ftn) (SphericalHarmonicsL2_t4500 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m16724 (SphericalHarmonicsL2_t4500 * __this, Color_t121  ___color, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m16725(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m16725 (Object_t * __this /* static, unused */, Color_t121  ___color, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t4500 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726 (Object_t * __this /* static, unused */, Color_t121 * ___color, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726_ftn) (Color_t121 *, SphericalHarmonicsL2_t4500 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m16727 (SphericalHarmonicsL2_t4500 * __this, Vector3_t53  ___direction, Color_t121  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t121  V_0 = {0};
	{
		Color_t121  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t121  L_2 = Color_op_Multiply_m4980(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t53  L_3 = ___direction;
		Color_t121  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m16728(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m16728 (Object_t * __this /* static, unused */, Vector3_t53  ___direction, Color_t121  ___color, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t4500 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729 (Object_t * __this /* static, unused */, Vector3_t53 * ___direction, Color_t121 * ___color, SphericalHarmonicsL2_t4500 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729_ftn) (Vector3_t53 *, Color_t121 *, SphericalHarmonicsL2_t4500 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern TypeInfo* IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var;
extern "C" float SphericalHarmonicsL2_get_Item_m16730 (SphericalHarmonicsL2_t4500 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6446);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t3940 * L_31 = (IndexOutOfRangeException_t3940 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m12816(L_31, (String_t*) &_stringLiteral4142, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var;
extern "C" void SphericalHarmonicsL2_set_Item_m16731 (SphericalHarmonicsL2_t4500 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6446);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t3940 * L_31 = (IndexOutOfRangeException_t3940 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t3940_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m12816(L_31, (String_t*) &_stringLiteral4142, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m16732 (SphericalHarmonicsL2_t4500 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m17572(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m17572(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m17572(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m17572(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m17572(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m17572(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m17572(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m17572(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m17572(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m17572(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m17572(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m17572(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m17572(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m17572(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m17572(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m17572(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m17572(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m17572(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m17572(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m17572(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m17572(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m17572(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m17572(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m17572(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m17572(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m17572(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m17572(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern TypeInfo* SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m16733 (SphericalHarmonicsL2_t4500 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8349);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t4500  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t4500 *)((SphericalHarmonicsL2_t4500 *)UnBox (L_1, SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t4500  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m16737(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t4500 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern TypeInfo* SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t4500  SphericalHarmonicsL2_op_Multiply_m16734 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8349);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t4500  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t4500  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t4500  SphericalHarmonicsL2_op_Multiply_m16735 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t4500  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8349);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t4500  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t4500  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t4500  SphericalHarmonicsL2_op_Addition_m16736 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500  ___lhs, SphericalHarmonicsL2_t4500  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8349);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t4500  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t4500_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t4500  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m16737 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500  ___lhs, SphericalHarmonicsL2_t4500  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m16738 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t4500  ___lhs, SphericalHarmonicsL2_t4500  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t4500  L_0 = ___lhs;
		SphericalHarmonicsL2_t4500  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m16737(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.SpriteMeshType
#include "UnityEngine_UnityEngine_SpriteMeshType.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpriteMeshType
#include "UnityEngine_UnityEngine_SpriteMeshTypeMethodDeclarations.h"



// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Sprite_t573 * Sprite_Create_m2938 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201  ___rect, Vector2_t97  ___pivot, const MethodInfo* method)
{
	Vector4_t961  V_0 = {0};
	int32_t V_1 = {0};
	uint32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		Vector4_t961  L_0 = Vector4_get_zero_m4843(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 1;
		V_2 = 0;
		V_3 = (100.0f);
		Texture2D_t90 * L_1 = ___texture;
		float L_2 = V_3;
		uint32_t L_3 = V_2;
		int32_t L_4 = V_1;
		Sprite_t573 * L_5 = Sprite_INTERNAL_CALL_Create_m16739(NULL /*static, unused*/, L_1, (&___rect), (&___pivot), L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t573 * Sprite_INTERNAL_CALL_Create_m16739 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201 * ___rect, Vector2_t97 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t961 * ___border, const MethodInfo* method)
{
	typedef Sprite_t573 * (*Sprite_INTERNAL_CALL_Create_m16739_ftn) (Texture2D_t90 *, Rect_t201 *, Vector2_t97 *, float, uint32_t, int32_t, Vector4_t961 *);
	static Sprite_INTERNAL_CALL_Create_m16739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_CALL_Create_m16739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)");
	return _il2cpp_icall_func(___texture, ___rect, ___pivot, ___pixelsPerUnit, ___extrude, ___meshType, ___border);
}
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t201  Sprite_get_rect_m4845 (Sprite_t573 * __this, const MethodInfo* method)
{
	typedef Rect_t201  (*Sprite_get_rect_m4845_ftn) (Sprite_t573 *);
	static Sprite_get_rect_m4845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m4845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m4841 (Sprite_t573 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m4841_ftn) (Sprite_t573 *);
	static Sprite_get_pixelsPerUnit_m4841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m4841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t90 * Sprite_get_texture_m4838 (Sprite_t573 * __this, const MethodInfo* method)
{
	typedef Texture2D_t90 * (*Sprite_get_texture_m4838_ftn) (Sprite_t573 *);
	static Sprite_get_texture_m4838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m4838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t201  Sprite_get_textureRect_m4859 (Sprite_t573 * __this, const MethodInfo* method)
{
	typedef Rect_t201  (*Sprite_get_textureRect_m4859_ftn) (Sprite_t573 *);
	static Sprite_get_textureRect_m4859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m4859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t961  Sprite_get_border_m4839 (Sprite_t573 * __this, const MethodInfo* method)
{
	typedef Vector4_t961  (*Sprite_get_border_m4839_ftn) (Sprite_t573 *);
	static Sprite_get_border_m4839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m4839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"



// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern "C" Vector4_t961  DataUtility_GetInnerUV_m4850 (Object_t * __this /* static, unused */, Sprite_t573 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t961  (*DataUtility_GetInnerUV_m4850_ftn) (Sprite_t573 *);
	static DataUtility_GetInnerUV_m4850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m4850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t961  DataUtility_GetOuterUV_m4849 (Object_t * __this /* static, unused */, Sprite_t573 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t961  (*DataUtility_GetOuterUV_m4849_ftn) (Sprite_t573 *);
	static DataUtility_GetOuterUV_m4849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m4849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t961  DataUtility_GetPadding_m4844 (Object_t * __this /* static, unused */, Sprite_t573 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t961  (*DataUtility_GetPadding_m4844_ftn) (Sprite_t573 *);
	static DataUtility_GetPadding_m4844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m4844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern "C" Vector2_t97  DataUtility_GetMinSize_m4858 (Object_t * __this /* static, unused */, Sprite_t573 * ___sprite, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	{
		Sprite_t573 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m16740(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m16740 (Object_t * __this /* static, unused */, Sprite_t573 * ___sprite, Vector2_t97 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m16740_ftn) (Sprite_t573 *, Vector2_t97 *);
	static DataUtility_Internal_GetMinSize_m16740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m16740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.AudioType
#include "UnityEngine_UnityEngine_AudioType.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"


// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m7340 (WWW_t1224 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url;
		WWW_InitWWW_m16745(__this, L_0, (ByteU5BU5D_t25*)(ByteU5BU5D_t25*)NULL, (StringU5BU5D_t20*)(StringU5BU5D_t20*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m16741 (WWW_t1224 * __this, String_t* ___url, WWWForm_t4504 * ___form, const MethodInfo* method)
{
	StringU5BU5D_t20* V_0 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		WWWForm_t4504 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t1185 * L_1 = WWWForm_get_headers_m16761(L_0, /*hidden argument*/NULL);
		StringU5BU5D_t20* L_2 = WWW_FlattenedHeadersFrom_m16755(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t4504 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t25* L_5 = WWWForm_get_data_m16762(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t20* L_6 = V_0;
		WWW_InitWWW_m16745(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m8921 (WWW_t1224 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, Dictionary_2_t1185 * ___headers, const MethodInfo* method)
{
	StringU5BU5D_t20* V_0 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Dictionary_2_t1185 * L_0 = ___headers;
		StringU5BU5D_t20* L_1 = WWW_FlattenedHeadersFrom_m16755(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___url;
		ByteU5BU5D_t25* L_3 = ___postData;
		StringU5BU5D_t20* L_4 = V_0;
		WWW_InitWWW_m16745(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m16742 (WWW_t1224 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m16744(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m16743 (WWW_t1224 * __this, const MethodInfo* method)
{
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m16744(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m127(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m16744 (WWW_t1224 * __this, bool ___cancel, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m16744_ftn) (WWW_t1224 *, bool);
	static WWW_DestroyWWW_m16744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m16744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m16745 (WWW_t1224 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, StringU5BU5D_t20* ___iHeaders, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m16745_ftn) (WWW_t1224 *, String_t*, ByteU5BU5D_t25*, StringU5BU5D_t20*);
	static WWW_InitWWW_m16745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m16745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern TypeInfo* UnityException_t983_il2cpp_TypeInfo_var;
extern "C" Dictionary_2_t1185 * WWW_get_responseHeaders_m16746 (WWW_t1224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1743);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = WWW_get_isDone_m7341(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t983 * L_1 = (UnityException_t983 *)il2cpp_codegen_object_new (UnityException_t983_il2cpp_TypeInfo_var);
		UnityException__ctor_m17478(L_1, (String_t*) &_stringLiteral4143, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m16747(__this, /*hidden argument*/NULL);
		Dictionary_2_t1185 * L_3 = WWW_ParseHTTPHeaderString_m16756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m16747 (WWW_t1224 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m16747_ftn) (WWW_t1224 *);
	static WWW_get_responseHeadersString_m16747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m16747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern TypeInfo* UnityException_t983_il2cpp_TypeInfo_var;
extern "C" String_t* WWW_get_text_m8888 (WWW_t1224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1743);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m7341(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t983 * L_1 = (UnityException_t983 *)il2cpp_codegen_object_new (UnityException_t983_il2cpp_TypeInfo_var);
		UnityException__ctor_m17478(L_1, (String_t*) &_stringLiteral4144, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t25* L_2 = WWW_get_bytes_m16750(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Encoding_t623 * L_3 = WWW_GetTextEncoder_m16749(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = V_0;
		ByteU5BU5D_t25* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern TypeInfo* Encoding_t623_il2cpp_TypeInfo_var;
extern "C" Encoding_t623 * WWW_get_DefaultEncoding_m16748 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
		Encoding_t623 * L_0 = Encoding_get_ASCII_m12872(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern TypeInfo* CharU5BU5D_t665_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t623_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Encoding_t623 * WWW_GetTextEncoder_m16749 (WWW_t1224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		Encoding_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t623 * V_5 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t1185 * L_0 = WWW_get_responseHeaders_m16746(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, (String_t*) &_stringLiteral4145, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m15006(L_2, (String_t*) &_stringLiteral4146, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m12809(L_5, ((int32_t)61), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m4916(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m2717(L_11, /*hidden argument*/NULL);
		CharU5BU5D_t665* L_13 = ((CharU5BU5D_t665*)SZArrayNew(CharU5BU5D_t665_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		CharU5BU5D_t665* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m12817(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m2717(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m3324(L_17, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m2872(L_20, 0, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_24 = Encoding_GetEncoding_m12874(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral4147, L_25, (String_t*) &_stringLiteral134, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
		Encoding_t623 * L_27 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t623 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t25* WWW_get_bytes_m16750 (WWW_t1224 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t25* (*WWW_get_bytes_m16750_ftn) (WWW_t1224 *);
	static WWW_get_bytes_m16750_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m16750_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m8887 (WWW_t1224 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m8887_ftn) (WWW_t1224 *);
	static WWW_get_error_m8887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m8887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioClip UnityEngine.WWW::get_audioClip()
extern "C" AudioClip_t261 * WWW_get_audioClip_m7342 (WWW_t1224 * __this, const MethodInfo* method)
{
	{
		AudioClip_t261 * L_0 = WWW_GetAudioClip_m16751(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m16751 (WWW_t1224 * __this, bool ___threeD, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		AudioClip_t261 * L_1 = WWW_GetAudioClip_m16752(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m16752 (WWW_t1224 * __this, bool ___threeD, bool ___stream, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		bool L_1 = ___stream;
		AudioClip_t261 * L_2 = WWW_GetAudioClip_m16753(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m16753 (WWW_t1224 * __this, bool ___threeD, bool ___stream, int32_t ___audioType, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		bool L_1 = ___stream;
		int32_t L_2 = ___audioType;
		AudioClip_t261 * L_3 = WWW_GetAudioClipInternal_m16754(__this, L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClipInternal_m16754 (WWW_t1224 * __this, bool ___threeD, bool ___stream, bool ___compressed, int32_t ___audioType, const MethodInfo* method)
{
	typedef AudioClip_t261 * (*WWW_GetAudioClipInternal_m16754_ftn) (WWW_t1224 *, bool, bool, bool, int32_t);
	static WWW_GetAudioClipInternal_m16754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_GetAudioClipInternal_m16754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)");
	return _il2cpp_icall_func(__this, ___threeD, ___stream, ___compressed, ___audioType);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m7341 (WWW_t1224 * __this, const MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m7341_ftn) (WWW_t1224 *);
	static WWW_get_isDone_m7341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m7341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.WWW::get_progress()
extern "C" float WWW_get_progress_m8891 (WWW_t1224 * __this, const MethodInfo* method)
{
	typedef float (*WWW_get_progress_m8891_ftn) (WWW_t1224 *);
	static WWW_get_progress_m8891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_progress_m8891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_progress()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t1438_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m7262_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m7263_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m7264_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m7265_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m7266_MethodInfo_var;
extern "C" StringU5BU5D_t20* WWW_FlattenedHeadersFrom_m16755 (Object_t * __this /* static, unused */, Dictionary_2_t1185 * ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Enumerator_t1438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2465);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Dictionary_2_GetEnumerator_m7262_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484341);
		Enumerator_get_Current_m7263_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484342);
		KeyValuePair_2_get_Key_m7264_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484343);
		KeyValuePair_2_get_Value_m7265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484344);
		Enumerator_MoveNext_m7266_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484345);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t20* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t1437  V_2 = {0};
	Enumerator_t1438  V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1185 * L_0 = ___headers;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t20*)NULL;
	}

IL_0008:
	{
		Dictionary_2_t1185 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t1185 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t1438  L_4 = Dictionary_2_GetEnumerator_m7262(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m7262_MethodInfo_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			KeyValuePair_2_t1437  L_5 = Enumerator_get_Current_m7263((&V_3), /*hidden argument*/Enumerator_get_Current_m7263_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t20* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m7264((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m7264_MethodInfo_var);
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8)) = (String_t*)L_10;
			StringU5BU5D_t20* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			String_t* L_14 = KeyValuePair_2_get_Value_m7265((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7265_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_14);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13)) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m7266((&V_3), /*hidden argument*/Enumerator_MoveNext_m7266_MethodInfo_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_t1438  L_17 = V_3;
		Enumerator_t1438  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t1438_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_006f:
	{
		StringU5BU5D_t20* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern TypeInfo* ArgumentException_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t1185_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t620_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m7253_MethodInfo_var;
extern "C" Dictionary_2_t1185 * WWW_ParseHTTPHeaderString_m16756 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1790);
		Dictionary_2_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2462);
		StringReader_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		Dictionary_2__ctor_m7253_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484324);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t1185 * V_0 = {0};
	StringReader_t620 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		String_t* L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t1000 * L_1 = (ArgumentException_t1000 *)il2cpp_codegen_object_new (ArgumentException_t1000_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5003(L_1, (String_t*) &_stringLiteral4148, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Dictionary_2_t1185 * L_2 = (Dictionary_2_t1185 *)il2cpp_codegen_object_new (Dictionary_2_t1185_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7253(L_2, /*hidden argument*/Dictionary_2__ctor_m7253_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t620 * L_4 = (StringReader_t620 *)il2cpp_codegen_object_new (StringReader_t620_il2cpp_TypeInfo_var);
		StringReader__ctor_m2757(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t620 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.StringReader::ReadLine() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3226(L_10, (String_t*) &_stringLiteral4149, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t1185 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral4150, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m7293(L_14, (String_t*) &_stringLiteral459, /*hidden argument*/NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2872(L_17, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m10989(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m4916(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_23;
		Dictionary_2_t1185 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t1185 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_99.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_99MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.WWWForm::.ctor()
extern TypeInfo* List_1_t4503_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m17588_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" void WWWForm__ctor_m16757 (WWWForm_t4504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4503_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8350);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		List_1__ctor_m17588_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485324);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		List_1_t4503 * L_0 = (List_1_t4503 *)il2cpp_codegen_object_new (List_1_t4503_il2cpp_TypeInfo_var);
		List_1__ctor_m17588(L_0, /*hidden argument*/List_1__ctor_m17588_MethodInfo_var);
		__this->___formData_0 = L_0;
		List_1_t1 * L_1 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_1, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___fieldNames_1 = L_1;
		List_1_t1 * L_2 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_2, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___fileNames_2 = L_2;
		List_1_t1 * L_3 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_3, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___types_3 = L_3;
		__this->___boundary_4 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = Random_Range_m3085(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		ByteU5BU5D_t25* L_9 = (__this->___boundary_4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern TypeInfo* Encoding_t623_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m16758 (WWWForm_t4504 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	Encoding_t623 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
		Encoding_t623 * L_0 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t623 * L_3 = V_0;
		WWWForm_AddField_m16759(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m16759 (WWWForm_t4504 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t623 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1 * L_0 = (__this->___fieldNames_1);
		String_t* L_1 = ___fieldName;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		List_1_t1 * L_2 = (__this->___fileNames_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_2, (String_t*)NULL);
		List_1_t4503 * L_3 = (__this->___formData_0);
		Encoding_t623 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t25* L_6 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t25* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		List_1_t1 * L_7 = (__this->___types_3);
		Encoding_t623 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral4159, L_9, (String_t*) &_stringLiteral663, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m16760 (WWWForm_t4504 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method)
{
	{
		String_t* L_0 = ___fieldName;
		String_t* L_1 = Int32_ToString_m2535((&___i), /*hidden argument*/NULL);
		WWWForm_AddField_m16758(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern TypeInfo* Dictionary_2_t1185_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m7253_MethodInfo_var;
extern "C" Dictionary_2_t1185 * WWWForm_get_headers_m16761 (WWWForm_t4504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2462);
		Encoding_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Dictionary_2__ctor_m7253_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484324);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t1185 * V_0 = {0};
	{
		Dictionary_2_t1185 * L_0 = (Dictionary_2_t1185 *)il2cpp_codegen_object_new (Dictionary_2_t1185_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7253(L_0, /*hidden argument*/Dictionary_2__ctor_m7253_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t1185 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
		Encoding_t623 * L_3 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t25* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral4151, L_6, (String_t*) &_stringLiteral663, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1523, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t1185 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1523, (String_t*) &_stringLiteral4152);
	}

IL_0059:
	{
		Dictionary_2_t1185 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern TypeInfo* MemoryStream_t576_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t623_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWForm_get_data_m16762 (WWWForm_t4504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1222);
		Encoding_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	ByteU5BU5D_t25* V_1 = {0};
	ByteU5BU5D_t25* V_2 = {0};
	ByteU5BU5D_t25* V_3 = {0};
	ByteU5BU5D_t25* V_4 = {0};
	ByteU5BU5D_t25* V_5 = {0};
	MemoryStream_t576 * V_6 = {0};
	int32_t V_7 = 0;
	ByteU5BU5D_t25* V_8 = {0};
	String_t* V_9 = {0};
	String_t* V_10 = {0};
	ByteU5BU5D_t25* V_11 = {0};
	String_t* V_12 = {0};
	ByteU5BU5D_t25* V_13 = {0};
	ByteU5BU5D_t25* V_14 = {0};
	ByteU5BU5D_t25* V_15 = {0};
	ByteU5BU5D_t25* V_16 = {0};
	MemoryStream_t576 * V_17 = {0};
	int32_t V_18 = 0;
	ByteU5BU5D_t25* V_19 = {0};
	ByteU5BU5D_t25* V_20 = {0};
	ByteU5BU5D_t25* V_21 = {0};
	ByteU5BU5D_t25* V_22 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___containsFiles_5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t623 * L_1 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, (String_t*) &_stringLiteral2382);
		V_0 = L_2;
		Encoding_t623 * L_3 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t25* L_4 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, (String_t*) &_stringLiteral2383);
		V_1 = L_4;
		Encoding_t623 * L_5 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t25* L_6 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, (String_t*) &_stringLiteral4153);
		V_2 = L_6;
		Encoding_t623 * L_7 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t25* L_8 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, (String_t*) &_stringLiteral4154);
		V_3 = L_8;
		Encoding_t623 * L_9 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t25* L_10 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, (String_t*) &_stringLiteral663);
		V_4 = L_10;
		Encoding_t623 * L_11 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t25* L_12 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, (String_t*) &_stringLiteral4155);
		V_5 = L_12;
		MemoryStream_t576 * L_13 = (MemoryStream_t576 *)il2cpp_codegen_object_new (MemoryStream_t576_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m16096(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t576 * L_14 = V_6;
			ByteU5BU5D_t25* L_15 = V_1;
			ByteU5BU5D_t25* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t576 * L_17 = V_6;
			ByteU5BU5D_t25* L_18 = V_0;
			ByteU5BU5D_t25* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t576 * L_20 = V_6;
			ByteU5BU5D_t25* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t25* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t576 * L_23 = V_6;
			ByteU5BU5D_t25* L_24 = V_1;
			ByteU5BU5D_t25* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t576 * L_26 = V_6;
			ByteU5BU5D_t25* L_27 = V_2;
			ByteU5BU5D_t25* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_29 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t25* L_33 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t576 * L_34 = V_6;
			ByteU5BU5D_t25* L_35 = V_8;
			ByteU5BU5D_t25* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t576 * L_37 = V_6;
			ByteU5BU5D_t25* L_38 = V_1;
			ByteU5BU5D_t25* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t576 * L_40 = V_6;
			ByteU5BU5D_t25* L_41 = V_3;
			ByteU5BU5D_t25* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t623 * L_43 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t1 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t623 * L_49 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m16769(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m7293(L_51, (String_t*) &_stringLiteral4156, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t20* L_53 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, (String_t*) &_stringLiteral4156);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0)) = (String_t*)(String_t*) &_stringLiteral4156;
			StringU5BU5D_t20* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1)) = (String_t*)L_55;
			StringU5BU5D_t20* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral4157);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2)) = (String_t*)(String_t*) &_stringLiteral4157;
			StringU5BU5D_t20* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_59 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m16766(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3)) = (String_t*)L_60;
			StringU5BU5D_t20* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral4158);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4)) = (String_t*)(String_t*) &_stringLiteral4158;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m3108(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_63 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t25* L_65 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t576 * L_66 = V_6;
			ByteU5BU5D_t25* L_67 = V_11;
			ByteU5BU5D_t25* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t576 * L_69 = V_6;
			ByteU5BU5D_t25* L_70 = V_4;
			ByteU5BU5D_t25* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)(((Array_t *)L_71)->max_length))));
			List_1_t1 * L_72 = (__this->___fileNames_2);
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t1 * L_75 = (__this->___fileNames_2);
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_75, L_76);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_79 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m16769(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m7293(L_81, (String_t*) &_stringLiteral4156, /*hidden argument*/NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t20* L_83 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, (String_t*) &_stringLiteral4156);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0)) = (String_t*)(String_t*) &_stringLiteral4156;
			StringU5BU5D_t20* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1)) = (String_t*)L_85;
			StringU5BU5D_t20* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral4157);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2)) = (String_t*)(String_t*) &_stringLiteral4157;
			StringU5BU5D_t20* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_89 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m16766(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3)) = (String_t*)L_90;
			StringU5BU5D_t20* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral4158);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4)) = (String_t*)(String_t*) &_stringLiteral4158;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3108(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_93 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t25* L_95 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t576 * L_96 = V_6;
			ByteU5BU5D_t25* L_97 = V_5;
			ByteU5BU5D_t25* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t576 * L_99 = V_6;
			ByteU5BU5D_t25* L_100 = V_13;
			ByteU5BU5D_t25* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t576 * L_102 = V_6;
			ByteU5BU5D_t25* L_103 = V_4;
			ByteU5BU5D_t25* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t576 * L_105 = V_6;
			ByteU5BU5D_t25* L_106 = V_1;
			ByteU5BU5D_t25* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t576 * L_108 = V_6;
			ByteU5BU5D_t25* L_109 = V_1;
			ByteU5BU5D_t25* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t4503 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t25* L_113 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t576 * L_114 = V_6;
			ByteU5BU5D_t25* L_115 = V_14;
			ByteU5BU5D_t25* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)(((Array_t *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t4503 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t576 * L_121 = V_6;
			ByteU5BU5D_t25* L_122 = V_1;
			ByteU5BU5D_t25* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t576 * L_124 = V_6;
			ByteU5BU5D_t25* L_125 = V_0;
			ByteU5BU5D_t25* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t576 * L_127 = V_6;
			ByteU5BU5D_t25* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t25* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t576 * L_130 = V_6;
			ByteU5BU5D_t25* L_131 = V_0;
			ByteU5BU5D_t25* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t576 * L_133 = V_6;
			ByteU5BU5D_t25* L_134 = V_1;
			ByteU5BU5D_t25* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t576 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t25* L_137 = (ByteU5BU5D_t25*)VirtFuncInvoker0< ByteU5BU5D_t25* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t576 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t576 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0311:
	{
		Encoding_t623 * L_140 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t25* L_141 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, (String_t*) &_stringLiteral24);
		V_15 = L_141;
		Encoding_t623 * L_142 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t25* L_143 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, (String_t*) &_stringLiteral1979);
		V_16 = L_143;
		MemoryStream_t576 * L_144 = (MemoryStream_t576 *)il2cpp_codegen_object_new (MemoryStream_t576_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m16096(L_144, ((int32_t)1024), /*hidden argument*/NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t623_il2cpp_TypeInfo_var);
			Encoding_t623 * L_145 = Encoding_get_UTF8_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t25* L_149 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_150 = WWWTranscoder_URLEncode_m16765(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t4503 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t25* L_153 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t25* L_154 = V_20;
			ByteU5BU5D_t25* L_155 = WWWTranscoder_URLEncode_m16765(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t576 * L_157 = V_17;
			ByteU5BU5D_t25* L_158 = V_15;
			ByteU5BU5D_t25* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t576 * L_160 = V_17;
			ByteU5BU5D_t25* L_161 = V_19;
			ByteU5BU5D_t25* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t576 * L_163 = V_17;
			ByteU5BU5D_t25* L_164 = V_16;
			ByteU5BU5D_t25* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t576 * L_166 = V_17;
			ByteU5BU5D_t25* L_167 = V_21;
			ByteU5BU5D_t25* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)(((Array_t *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t4503 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t576 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t25* L_174 = (ByteU5BU5D_t25*)VirtFuncInvoker0< ByteU5BU5D_t25* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t576 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t576 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t25* L_177 = V_22;
		return L_177;
	}
}
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoder.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.WWWTranscoder::.cctor()
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern "C" void WWWTranscoder__cctor_m16763 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t623 * L_0 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t25* L_1 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, (String_t*) &_stringLiteral3678);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t623 * L_2 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t25* L_3 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, (String_t*) &_stringLiteral4160);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t623 * L_4 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, (String_t*) &_stringLiteral4161);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t623 * L_6 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t25* L_7 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, (String_t*) &_stringLiteral4162);
		((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_Byte2Hex_m16764 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t25* ___hexChars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t25* L_0 = V_0;
		ByteU5BU5D_t25* L_1 = ___hexChars;
		uint8_t L_2 = ___b;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t25* L_4 = V_0;
		ByteU5BU5D_t25* L_5 = ___hexChars;
		uint8_t L_6 = ___b;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))));
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		ByteU5BU5D_t25* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_URLEncode_m16765 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___toEncode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3;
		ByteU5BU5D_t25* L_3 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t25* L_4 = WWWTranscoder_Encode_m16767(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern "C" String_t* WWWTranscoder_QPEncode_m16766 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t623 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	{
		Encoding_t623 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6;
		ByteU5BU5D_t25* L_5 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t25* L_6 = WWWTranscoder_Encode_m16767(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t623 * L_7 = WWW_get_DefaultEncoding_m16748(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_8 = V_0;
		ByteU5BU5D_t25* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern TypeInfo* MemoryStream_t576_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_Encode_m16767 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t25* ___forbidden, bool ___uppercase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1222);
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t576 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t25* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t576 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t576 * G_B8_1 = {0};
	ByteU5BU5D_t25* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t576 * G_B10_2 = {0};
	{
		ByteU5BU5D_t25* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t576 * L_1 = (MemoryStream_t576 *)il2cpp_codegen_object_new (MemoryStream_t576_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m16096(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t25* L_2 = ___input;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t576 * L_5 = V_0;
			uint8_t L_6 = ___space;
			NullCheck(L_5);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t25* L_7 = ___input;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t25* L_10 = ___input;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t25* L_13 = ___forbidden;
			ByteU5BU5D_t25* L_14 = ___input;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			bool L_17 = WWWTranscoder_ByteArrayContains_m16768(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t576 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			MemoryStream_t576 * L_20 = V_0;
			ByteU5BU5D_t25* L_21 = ___input;
			int32_t L_22 = V_1;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			bool L_24 = ___uppercase;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_25 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_26 = ((WWWTranscoder_t4505_StaticFields*)WWWTranscoder_t4505_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_27 = WWWTranscoder_Byte2Hex_m16764(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t576 * L_28 = V_0;
			ByteU5BU5D_t25* L_29 = ___input;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			int32_t L_31 = L_30;
			NullCheck(L_28);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			ByteU5BU5D_t25* L_34 = ___input;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t576 * L_35 = V_0;
			NullCheck(L_35);
			ByteU5BU5D_t25* L_36 = (ByteU5BU5D_t25*)VirtFuncInvoker0< ByteU5BU5D_t25* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t576 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t576 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t25* L_39 = V_2;
		return L_39;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m16768 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___array, uint8_t ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t25* L_0 = ___array;
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t25* L_1 = ___array;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = ___b;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))) == ((uint32_t)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t4505_il2cpp_TypeInfo_var;
extern "C" bool WWWTranscoder_SevenBitClean_m16769 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t623 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t4505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8351);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t623 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t4505_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m16770(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m16770 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___input, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t25* L_0 = ___input;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t25* L_3 = ___input;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t25* L_8 = ___input;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t4506_marshal(const CacheIndex_t4506& unmarshaled, CacheIndex_t4506_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t4506_marshal_back(const CacheIndex_t4506_marshaled& marshaled, CacheIndex_t4506& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t4506_marshal_cleanup(CacheIndex_t4506_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"



// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m16771 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t21* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m113(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"


// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m16772 (AsyncOperation_t1270 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m16908(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m16773 (AsyncOperation_t1270 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m16773_ftn) (AsyncOperation_t1270 *);
	static AsyncOperation_InternalDestroy_m16773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m16773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m16774 (AsyncOperation_t1270 * __this, const MethodInfo* method)
{
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m16773(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m127(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m7387 (AsyncOperation_t1270 * __this, const MethodInfo* method)
{
	typedef bool (*AsyncOperation_get_isDone_m7387_ftn) (AsyncOperation_t1270 *);
	static AsyncOperation_get_isDone_m7387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_get_isDone_m7387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t1270_marshal(const AsyncOperation_t1270& unmarshaled, AsyncOperation_t1270_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t1270_marshal_back(const AsyncOperation_t1270_marshaled& marshaled, AsyncOperation_t1270& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t1270_marshal_cleanup(AsyncOperation_t1270_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m3385 (LogCallback_t721 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m16775 (LogCallback_t721 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m16775((LogCallback_t721 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t721(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern TypeInfo* LogType_t767_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m16776 (LogCallback_t721 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t767_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m16777 (LogCallback_t721 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.SystemLanguage
#include "UnityEngine_UnityEngine_SystemLanguage.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t721_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceived_m16778 (Object_t * __this /* static, unused */, LogCallback_t721 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		LogCallback_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t721 * L_0 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t721 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t721 *)Castclass(L_2, LogCallback_t721_il2cpp_TypeInfo_var));
		LogCallback_t721 * L_3 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		Application_SetLogCallbackDefined_m16784(NULL /*static, unused*/, 1, ((((int32_t)((((Object_t*)(LogCallback_t721 *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t721_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceived_m16779 (Object_t * __this /* static, unused */, LogCallback_t721 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		LogCallback_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t721 * L_0 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t721 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t721 *)Castclass(L_2, LogCallback_t721_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t721_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceivedThreaded_m16780 (Object_t * __this /* static, unused */, LogCallback_t721 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		LogCallback_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t721 * L_0 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t721 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t721 *)Castclass(L_2, LogCallback_t721_il2cpp_TypeInfo_var));
		Application_SetLogCallbackDefined_m16784(NULL /*static, unused*/, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t721_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceivedThreaded_m16781 (Object_t * __this /* static, unused */, LogCallback_t721 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		LogCallback_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t721 * L_0 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t721 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t721 *)Castclass(L_2, LogCallback_t721_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Application::Quit()
extern "C" void Application_Quit_m3361 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Application_Quit_m3361_ftn) ();
	static Application_Quit_m3361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m3361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C" int32_t Application_get_loadedLevel_m3095 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m3095_ftn) ();
	static Application_get_loadedLevel_m3095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m3095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m2430 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_loadedLevelName_m2430_ftn) ();
	static Application_get_loadedLevelName_m2430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevelName_m2430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C" void Application_LoadLevel_m3098 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m16782(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m2442 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevelAsync_m16782(NULL /*static, unused*/, L_0, (-1), 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String)
extern "C" AsyncOperation_t1270 * Application_LoadLevelAsync_m7386 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___levelName;
		AsyncOperation_t1270 * L_1 = Application_LoadLevelAsync_m16782(NULL /*static, unused*/, L_0, (-1), 0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t1270 * Application_LoadLevelAsync_m16782 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method)
{
	typedef AsyncOperation_t1270 * (*Application_LoadLevelAsync_m16782_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m16782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m16782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isLoadingLevel()
extern "C" bool Application_get_isLoadingLevel_m3310 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isLoadingLevel_m3310_ftn) ();
	static Application_get_isLoadingLevel_m3310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isLoadingLevel_m3310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isLoadingLevel()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m2677 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2677_ftn) ();
	static Application_get_isPlaying_m2677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m3435 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m3435_ftn) ();
	static Application_get_isEditor_m3435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m3435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C" bool Application_get_isWebPlayer_m8932 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isWebPlayer_m8932_ftn) ();
	static Application_get_isWebPlayer_m8932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isWebPlayer_m8932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isWebPlayer()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m4886 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m4886_ftn) ();
	static Application_get_platform_m4886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m4886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C" void Application_set_runInBackground_m3053 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*Application_set_runInBackground_m3053_ftn) (bool);
	static Application_set_runInBackground_m3053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_runInBackground_m3053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_runInBackground(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Application::HasProLicense()
extern "C" bool Application_HasProLicense_m7385 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_HasProLicense_m7385_ftn) ();
	static Application_HasProLicense_m7385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_HasProLicense_m7385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::HasProLicense()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m8930 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_persistentDataPath_m8930_ftn) ();
	static Application_get_persistentDataPath_m8930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_persistentDataPath_m8930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m3082 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*Application_OpenURL_m3082_ftn) (String_t*);
	static Application_OpenURL_m3082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_OpenURL_m3082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::OpenURL(System.String)");
	_il2cpp_icall_func(___url);
}
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
extern "C" int32_t Application_get_systemLanguage_m7123 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_systemLanguage_m7123_ftn) ();
	static Application_get_systemLanguage_m7123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_systemLanguage_m7123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_systemLanguage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m16783 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t721 * V_0 = {0};
	LogCallback_t721 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t721 * L_1 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t721 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t721 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(11 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t721 * L_7 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t721 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t721 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(11 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
extern "C" void Application_SetLogCallbackDefined_m16784 (Object_t * __this /* static, unused */, bool ___defined, bool ___threaded, const MethodInfo* method)
{
	typedef void (*Application_SetLogCallbackDefined_m16784_ftn) (bool, bool);
	static Application_SetLogCallbackDefined_m16784_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_SetLogCallbackDefined_m16784_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(___defined, ___threaded);
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" void Application_RegisterLogCallback_m3386 (Object_t * __this /* static, unused */, LogCallback_t721 * ___handler, const MethodInfo* method)
{
	{
		LogCallback_t721 * L_0 = ___handler;
		Application_RegisterLogCallback_m16785(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern TypeInfo* Application_t1853_il2cpp_TypeInfo_var;
extern "C" void Application_RegisterLogCallback_m16785 (Object_t * __this /* static, unused */, LogCallback_t721 * ___handler, bool ___threaded, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3557);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t721 * L_0 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		LogCallback_t721 * L_1 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceived_m16779(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LogCallback_t721 * L_2 = ((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceivedThreaded_m16781(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		LogCallback_t721 * L_3 = ___handler;
		il2cpp_codegen_memory_barrier();
		((Application_t1853_StaticFields*)Application_t1853_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2 = L_3;
		LogCallback_t721 * L_4 = ___handler;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		bool L_5 = ___threaded;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		LogCallback_t721 * L_6 = ___handler;
		Application_add_logMessageReceivedThreaded_m16780(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0043:
	{
		LogCallback_t721 * L_7 = ___handler;
		Application_add_logMessageReceived_m16778(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void UnityEngine.Behaviour::.ctor()
extern "C" void Behaviour__ctor_m16786 (Behaviour_t1007 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m16869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m2552 (Behaviour_t1007 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m2552_ftn) (Behaviour_t1007 *);
	static Behaviour_get_enabled_m2552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m2552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" void Behaviour_set_enabled_m2780 (Behaviour_t1007 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m2780_ftn) (Behaviour_t1007 *, bool);
	static Behaviour_set_enabled_m2780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m2780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m4718 (Behaviour_t1007 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m4718_ftn) (Behaviour_t1007 *);
	static Behaviour_get_isActiveAndEnabled_m4718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m4718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m16787 (CameraCallback_t4508 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m16788 (CameraCallback_t4508 * __this, Camera_t356 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m16788((CameraCallback_t4508 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t356 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t356 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t4508(Il2CppObject* delegate, Camera_t356 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t356 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m16789 (CameraCallback_t4508 * __this, Camera_t356 * ___cam, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m16790 (CameraCallback_t4508 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m4764 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m4764_ftn) (Camera_t356 *);
	static Camera_get_nearClipPlane_m4764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m4764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m4763 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m4763_ftn) (Camera_t356 *);
	static Camera_get_farClipPlane_m4763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m4763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m7290 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m7290_ftn) (Camera_t356 *);
	static Camera_get_orthographicSize_m7290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m7290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m7291 (Camera_t356 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m7291_ftn) (Camera_t356 *, float);
	static Camera_set_orthographicSize_m7291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m7291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m4685 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m4685_ftn) (Camera_t356 *);
	static Camera_get_depth_m4685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m4685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m4768 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m4768_ftn) (Camera_t356 *);
	static Camera_get_cullingMask_m4768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m4768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m16791 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m16791_ftn) (Camera_t356 *);
	static Camera_get_eventMask_m16791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m16791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m16792 (Camera_t356 * __this, Rect_t201 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m16792_ftn) (Camera_t356 *, Rect_t201 *);
	static Camera_INTERNAL_get_pixelRect_m16792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m16792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t201  Camera_get_pixelRect_m16793 (Camera_t356 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m16792(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t201  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t4462 * Camera_get_targetTexture_m16794 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t4462 * (*Camera_get_targetTexture_m16794_ftn) (Camera_t356 *);
	static Camera_get_targetTexture_m16794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m16794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m16795 (Camera_t356 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m16795_ftn) (Camera_t356 *, Matrix4x4_t68 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m16795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m16795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t68  Camera_get_worldToCameraMatrix_m16796 (Camera_t356 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m16795(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m16797 (Camera_t356 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m16797_ftn) (Camera_t356 *, Matrix4x4_t68 *);
	static Camera_INTERNAL_get_projectionMatrix_m16797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m16797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t68  Camera_get_projectionMatrix_m16798 (Camera_t356 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m16797(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m16799 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m16799_ftn) (Camera_t356 *);
	static Camera_get_clearFlags_m16799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m16799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_WorldToScreenPoint_m3016 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m16800(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_WorldToScreenPoint_m16800 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m16800_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m16800_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m16800_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_ScreenToWorldPoint_m3004 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_ScreenToViewportPoint_m4822 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
extern "C" Ray_t319  Camera_ViewportPointToRay_m3124 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Ray_t319  L_0 = Camera_INTERNAL_CALL_ViewportPointToRay_m16803(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t319  Camera_INTERNAL_CALL_ViewportPointToRay_m16803 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Ray_t319  (*Camera_INTERNAL_CALL_ViewportPointToRay_m16803_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ViewportPointToRay_m16803_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ViewportPointToRay_m16803_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t319  Camera_ScreenPointToRay_m2965 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Ray_t319  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m16804(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t319  Camera_INTERNAL_CALL_ScreenPointToRay_m16804 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Ray_t319  (*Camera_INTERNAL_CALL_ScreenPointToRay_m16804_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m16804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m16804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t356 * Camera_get_main_m2548 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t356 * (*Camera_get_main_m2548_ftn) ();
	static Camera_get_main_m2548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m2548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m16805 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m16805_ftn) ();
	static Camera_get_allCamerasCount_m16805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m16805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m16806 (Object_t * __this /* static, unused */, CameraU5BU5D_t4624* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m16806_ftn) (CameraU5BU5D_t4624*);
	static Camera_GetAllCameras_m16806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m16806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t356_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m16807 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t4508 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t4508 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t356 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t356 * >::Invoke(11 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t356_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m16808 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t4508 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t4508 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t356 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t356 * >::Invoke(11 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t356_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m16809 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t4508 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t4508 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t356 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t356 * >::Invoke(11 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_RaycastTry_m16810 (Camera_t356 * __this, Ray_t319  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t49 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m16811(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_INTERNAL_CALL_RaycastTry_m16811 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Ray_t319 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Camera_INTERNAL_CALL_RaycastTry_m16811_ftn) (Camera_t356 *, Ray_t319 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m16811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m16811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_RaycastTry2D_m16812 (Camera_t356 * __this, Ray_t319  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t49 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m16813(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_INTERNAL_CALL_RaycastTry2D_m16813 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Ray_t319 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Camera_INTERNAL_CALL_RaycastTry2D_m16813_ftn) (Camera_t356 *, Ray_t319 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m16813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m16813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void Debug_DrawLine_m3338 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, Color_t121  ___color, float ___duration, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		float L_0 = ___duration;
		bool L_1 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m16814(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Debug_DrawLine_m3117 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, const MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	Color_t121  V_2 = {0};
	{
		V_0 = 1;
		V_1 = (0.0f);
		Color_t121  L_0 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		float L_1 = V_1;
		bool L_2 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m16814(NULL /*static, unused*/, (&___start), (&___end), (&V_2), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m16814 (Object_t * __this /* static, unused */, Vector3_t53 * ___start, Vector3_t53 * ___end, Color_t121 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m16814_ftn) (Vector3_t53 *, Vector3_t53 *, Color_t121 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m16814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m16814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m16815 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t584 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m16815_ftn) (int32_t, String_t*, Object_t584 *);
	static Debug_Internal_Log_m16815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m16815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m16816 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, Object_t584 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m16816_ftn) (Exception_t468 *, Object_t584 *);
	static Debug_Internal_LogException_m16816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m16816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m90 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral4163;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m16815(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
extern "C" void Debug_Log_m2608 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t584 * ___context, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral4163;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Object_t584 * L_3 = ___context;
		Debug_Internal_Log_m16815(NULL /*static, unused*/, G_B3_1, G_B3_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m2815 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral4163;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m16815(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m4862 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t584 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t584 * L_2 = ___context;
		Debug_Internal_Log_m16815(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m8896 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, const MethodInfo* method)
{
	{
		Exception_t468 * L_0 = ___exception;
		Debug_Internal_LogException_m16816(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m4781 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, Object_t584 * ___context, const MethodInfo* method)
{
	{
		Exception_t468 * L_0 = ___exception;
		Object_t584 * L_1 = ___context;
		Debug_Internal_LogException_m16816(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2768 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m16815(NULL /*static, unused*/, 1, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2856 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t584 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t584 * L_2 = ___context;
		Debug_Internal_Log_m16815(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m16817 (DisplaysUpdatedDelegate_t4510 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m16818 (DisplaysUpdatedDelegate_t4510 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m16818((DisplaysUpdatedDelegate_t4510 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t4510(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m16819 (DisplaysUpdatedDelegate_t4510 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m16820 (DisplaysUpdatedDelegate_t4510 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m16821 (Display_t4512 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m17589(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m16822 (Display_t4512 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t4511_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m16823 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t4511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8352);
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t4511* L_0 = ((DisplayU5BU5D_t4511*)SZArrayNew(DisplayU5BU5D_t4511_il2cpp_TypeInfo_var, 1));
		Display_t4512 * L_1 = (Display_t4512 *)il2cpp_codegen_object_new (Display_t4512_il2cpp_TypeInfo_var);
		Display__ctor_m16821(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t4512 **)(Display_t4512 **)SZArrayLdElema(L_0, 0)) = (Display_t4512 *)L_1;
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t4511* L_2 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t4512 **)(Display_t4512 **)SZArrayLdElema(L_2, L_3));
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t4510 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m16824 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t4510 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8354);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t4510 * L_0 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t4510 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t4510 *)Castclass(L_2, DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m16825 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t4510 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8354);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t4510 * L_0 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t4510 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t4510 *)Castclass(L_2, DisplaysUpdatedDelegate_t4510_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m16826 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m16842(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m16827 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m16842(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m16828 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m16841(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m16829 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m16841(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t4608  Display_get_colorBuffer_m16830 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t4608  V_0 = {0};
	RenderBuffer_t4608  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m16843(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t4608  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t4608  Display_get_depthBuffer_m16831 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t4608  V_0 = {0};
	RenderBuffer_t4608  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m16843(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t4608  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m16832 (Display_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m16845(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m16833 (Display_t4512 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m16845(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m16834 (Display_t4512 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m16846(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m16835 (Display_t4512 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m16844(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m16836 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m16847(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" Vector3_t53  Display_RelativeMouseAt_m16837 (Object_t * __this /* static, unused */, Vector3_t53  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m16848(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t53  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" Display_t4512 * Display_get_main_m16838 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		Display_t4512 * L_0 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t4511_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m16839 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t4207* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t4511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8352);
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t4207* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t4511*)SZArrayNew(DisplayU5BU5D_t4511_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t4511* L_1 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t4207* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t4512 * L_6 = (Display_t4512 *)il2cpp_codegen_object_new (Display_t4512_il2cpp_TypeInfo_var);
		Display__ctor_m16822(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t4512 **)(Display_t4512 **)SZArrayLdElema(L_1, L_2)) = (Display_t4512 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t4207* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t4511* L_10 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t4512 **)(Display_t4512 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t4512_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m16840 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t4510 * L_0 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t4512_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t4510 * L_1 = ((Display_t4512_StaticFields*)Display_t4512_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m16841 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m16841_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m16841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m16841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m16842 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m16842_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m16842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m16842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m16843 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t4608 * ___color, RenderBuffer_t4608 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m16843_ftn) (IntPtr_t, RenderBuffer_t4608 *, RenderBuffer_t4608 *);
	static Display_GetRenderingBuffersImpl_m16843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m16843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m16844 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m16844_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m16844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m16844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m16845 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m16845_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m16845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m16845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m16846 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m16846_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m16846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m16846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m16847 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m16847_ftn) ();
	static Display_MultiDisplayLicenseImpl_m16847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m16847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m16848 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m16848_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m16848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m16848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m2413 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m16786(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C" void MonoBehaviour_Internal_CancelInvokeAll_m16849 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Internal_CancelInvokeAll_m16849_ftn) (MonoBehaviour_t47 *);
	static MonoBehaviour_Internal_CancelInvokeAll_m16849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Internal_CancelInvokeAll_m16849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m2786 (MonoBehaviour_t47 * __this, String_t* ___methodName, float ___time, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m2786_ftn) (MonoBehaviour_t47 *, String_t*, float);
	static MonoBehaviour_Invoke_m2786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m2786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" void MonoBehaviour_InvokeRepeating_m3372 (MonoBehaviour_t47 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_InvokeRepeating_m3372_ftn) (MonoBehaviour_t47 *, String_t*, float, float);
	static MonoBehaviour_InvokeRepeating_m3372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_InvokeRepeating_m3372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time, ___repeatRate);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C" void MonoBehaviour_CancelInvoke_m3373 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_Internal_CancelInvokeAll_m16849(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m2785 (MonoBehaviour_t47 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_CancelInvoke_m2785_ftn) (MonoBehaviour_t47 *, String_t*);
	static MonoBehaviour_CancelInvoke_m2785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_CancelInvoke_m2785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::CancelInvoke(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t879 * MonoBehaviour_StartCoroutine_m2547 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t879 * L_1 = MonoBehaviour_StartCoroutine_Auto_m16850(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t879 * MonoBehaviour_StartCoroutine_Auto_m16850 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t879 * (*MonoBehaviour_StartCoroutine_Auto_m16850_ftn) (MonoBehaviour_t47 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m16850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m16850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m16851 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m4944 (MonoBehaviour_t47 * __this, Coroutine_t879 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t879 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m16853(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852_ftn) (MonoBehaviour_t47 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m16853 (MonoBehaviour_t47 * __this, Coroutine_t879 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m16853_ftn) (MonoBehaviour_t47 *, Coroutine_t879 *);
	static MonoBehaviour_StopCoroutine_Auto_m16853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m16853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" void MonoBehaviour_StopAllCoroutines_m2853 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m2853_ftn) (MonoBehaviour_t47 *);
	static MonoBehaviour_StopAllCoroutines_m2853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m2853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"



// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m4730 (Touch_t654 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t97  Touch_get_position_m2979 (Touch_t654 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m3346 (Touch_t654 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t654_marshal(const Touch_t654& unmarshaled, Touch_t654_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t654_marshal_back(const Touch_t654_marshaled& marshaled, Touch_t654& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t654_marshal_cleanup(Touch_t654_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"


// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m16854 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m16855 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m16855_ftn) (int32_t);
	static Input_GetKeyInt_m16855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m16855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C" bool Input_GetKeyUpInt_m16856 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyUpInt_m16856_ftn) (int32_t);
	static Input_GetKeyUpInt_m16856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyUpInt_m16856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m16857 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m16857_ftn) (int32_t);
	static Input_GetKeyDownInt_m16857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m16857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" float Input_GetAxis_m2466 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxis_m2466_ftn) (String_t*);
	static Input_GetAxis_m2466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m2466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m3038 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m3038_ftn) (String_t*);
	static Input_GetAxisRaw_m3038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m3038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C" bool Input_GetButton_m3120 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButton_m3120_ftn) (String_t*);
	static Input_GetButton_m3120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButton_m3120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButton(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m2933 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2933_ftn) (String_t*);
	static Input_GetButtonDown_m2933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C" bool Input_GetButtonUp_m2976 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonUp_m2976_ftn) (String_t*);
	static Input_GetButtonUp_m2976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonUp_m2976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonUp(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m3035 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m16855(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyDown_m2725 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownInt_m16857(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyUp_m2420 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyUpInt_m16856(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m2465 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m2465_ftn) (int32_t);
	static Input_GetMouseButton_m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m2961 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2961_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m3347 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m3347_ftn) (int32_t);
	static Input_GetMouseButtonUp_m3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" Vector3_t53  Input_get_mousePosition_m2964 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Input_get_mousePosition_m2964_ftn) ();
	static Input_get_mousePosition_m2964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m2964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C" Vector2_t97  Input_get_mouseScrollDelta_m4731 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector2_t97  (*Input_get_mouseScrollDelta_m4731_ftn) ();
	static Input_get_mouseScrollDelta_m4731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m4731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m4755 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m4755_ftn) ();
	static Input_get_mousePresent_m4755_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m4755_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C" Vector3_t53  Input_get_acceleration_m3387 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Input_get_acceleration_m3387_ftn) ();
	static Input_get_acceleration_m3387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_acceleration_m3387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_acceleration()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern TypeInfo* TouchU5BU5D_t655_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t655* Input_get_touches_m2978 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		TouchU5BU5D_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8355);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t655* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m2977(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t655*)SZArrayNew(TouchU5BU5D_t655_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t655* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Touch_t654  L_5 = Input_GetTouch_m3345(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		*((Touch_t654 *)(Touch_t654 *)SZArrayLdElema(L_2, L_3)) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		TouchU5BU5D_t655* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t654  Input_GetTouch_m3345 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t654  (*Input_GetTouch_m3345_ftn) (int32_t);
	static Input_GetTouch_m3345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m3345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m2977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2977_ftn) ();
	static Input_get_touchCount_m2977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m4760 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m4941 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m4941_ftn) (int32_t);
	static Input_set_imeCompositionMode_m4941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m4941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m4890 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m4890_ftn) ();
	static Input_get_compositionString_m4890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m4890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m16858 (Object_t * __this /* static, unused */, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m16858_ftn) (Vector2_t97 *);
	static Input_INTERNAL_set_compositionCursorPos_m16858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m16858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m4932 (Object_t * __this /* static, unused */, Vector2_t97  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m16858(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"


// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m16859 (Object_t584 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t584 * Object_Internal_CloneSingle_m16860 (Object_t * __this /* static, unused */, Object_t584 * ___data, const MethodInfo* method)
{
	typedef Object_t584 * (*Object_Internal_CloneSingle_m16860_ftn) (Object_t584 *);
	static Object_Internal_CloneSingle_m16860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m16860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t584 * Object_Internal_InstantiateSingle_m16861 (Object_t * __this /* static, unused */, Object_t584 * ___data, Vector3_t53  ___pos, Quaternion_t69  ___rot, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___data;
		Object_t584 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t584 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862 (Object_t * __this /* static, unused */, Object_t584 * ___data, Vector3_t53 * ___pos, Quaternion_t69 * ___rot, const MethodInfo* method)
{
	typedef Object_t584 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862_ftn) (Object_t584 *, Vector3_t53 *, Quaternion_t69 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m7289 (Object_t * __this /* static, unused */, Object_t584 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m7289_ftn) (Object_t584 *, float);
	static Object_Destroy_m7289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m7289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m2754 (Object_t * __this /* static, unused */, Object_t584 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t584 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m7289(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m16863 (Object_t * __this /* static, unused */, Object_t584 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m16863_ftn) (Object_t584 *, bool);
	static Object_DestroyImmediate_m16863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m16863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2518 (Object_t * __this /* static, unused */, Object_t584 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t584 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m16863(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t694* Object_FindObjectsOfType_m3236 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t694* (*Object_FindObjectsOfType_m3236_ftn) (Type_t *);
	static Object_FindObjectsOfType_m3236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m3236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m2484 (Object_t584 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m2484_ftn) (Object_t584 *);
	static Object_get_name_m2484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m2484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m2536 (Object_t584 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m2536_ftn) (Object_t584 *, String_t*);
	static Object_set_name_m2536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m3052 (Object_t * __this /* static, unused */, Object_t584 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m3052_ftn) (Object_t584 *);
	static Object_DontDestroyOnLoad_m3052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m3052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m3278 (Object_t584 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m3278_ftn) (Object_t584 *, int32_t);
	static Object_set_hideFlags_m3278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m3278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m16864 (Object_t * __this /* static, unused */, Object_t584 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_DestroyObject_m16864_ftn) (Object_t584 *, float);
	static Object_DestroyObject_m16864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyObject_m16864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m2485 (Object_t * __this /* static, unused */, Object_t584 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t584 * L_0 = ___obj;
		float L_1 = V_0;
		Object_DestroyObject_m16864(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m3479 (Object_t584 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m3479_ftn) (Object_t584 *);
	static Object_ToString_m3479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m3479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t584_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m3477 (Object_t584 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m16865(NULL /*static, unused*/, __this, ((Object_t584 *)IsInst(L_0, Object_t584_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m3478 (Object_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2602(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m16865 (Object_t * __this /* static, unused */, Object_t584 * ___lhs, Object_t584 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t584 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t584 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t584 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t584 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t584 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m16866(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t584 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m16866(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t584 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t584 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m16866 (Object_t * __this /* static, unused */, Object_t584 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1368);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t584 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m16867(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m14862(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2602 (Object_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m16867 (Object_t584 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t584 * Object_Instantiate_m2944 (Object_t * __this /* static, unused */, Object_t584 * ___original, Vector3_t53  ___position, Quaternion_t69  ___rotation, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___original;
		Object_CheckNullArgument_m16868(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral4164, /*hidden argument*/NULL);
		Object_t584 * L_1 = ___original;
		Vector3_t53  L_2 = ___position;
		Quaternion_t69  L_3 = ___rotation;
		Object_t584 * L_4 = Object_Internal_InstantiateSingle_m16861(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" Object_t584 * Object_Instantiate_m7311 (Object_t * __this /* static, unused */, Object_t584 * ___original, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___original;
		Object_CheckNullArgument_m16868(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral4164, /*hidden argument*/NULL);
		Object_t584 * L_1 = ___original;
		Object_t584 * L_2 = Object_Internal_CloneSingle_m16860(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t1000_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m16868 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1790);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t1000 * L_2 = (ArgumentException_t1000 *)il2cpp_codegen_object_new (ArgumentException_t1000_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5003(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t584 * Object_FindObjectOfType_m2435 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t694* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t694* L_1 = Object_FindObjectsOfType_m3236(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t694* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t694* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t584 **)(Object_t584 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t584 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m2415 (Object_t * __this /* static, unused */, Object_t584 * ___exists, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m16865(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m2464 (Object_t * __this /* static, unused */, Object_t584 * ___x, Object_t584 * ___y, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___x;
		Object_t584 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m16865(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m2419 (Object_t * __this /* static, unused */, Object_t584 * ___x, Object_t584 * ___y, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___x;
		Object_t584 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m16865(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t584_marshal(const Object_t584& unmarshaled, Object_t584_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t584_marshal_back(const Object_t584_marshaled& marshaled, Object_t584& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t584_marshal_cleanup(Object_t584_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m16869 (Component_t462 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t54 * Component_get_transform_m2421 (Component_t462 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Component_get_transform_m2421_ftn) (Component_t462 *);
	static Component_get_transform_m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t49 * Component_get_gameObject_m2452 (Component_t462 * __this, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Component_get_gameObject_m2452_ftn) (Component_t462 *);
	static Component_get_gameObject_m2452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m2452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t462 * Component_GetComponent_m5033 (Component_t462 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t462 * L_2 = GameObject_GetComponent_m2538(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m16870 (Component_t462 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m16870_ftn) (Component_t462 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m16870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m16870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C" Component_t462 * Component_GetComponent_m7317 (Component_t462 * __this, String_t* ___type, const MethodInfo* method)
{
	typedef Component_t462 * (*Component_GetComponent_m7317_ftn) (Component_t462 *, String_t*);
	static Component_GetComponent_m7317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponent_m7317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponent(System.String)");
	return _il2cpp_icall_func(__this, ___type);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t462 * Component_GetComponentInChildren_m7125 (Component_t462 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t462 * L_2 = GameObject_GetComponentInChildren_m7124(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m16871 (Component_t462 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m16871_ftn) (Component_t462 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m16871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m16871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m4797 (Component_t462 * __this, Type_t * ___type, List_1_t463 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t463 * L_1 = ___results;
		Component_GetComponentsForListInternal_m16871(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m7395 (Component_t462 * __this, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m16876(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C" void Component_set_tag_m7288 (Component_t462 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		GameObject_set_tag_m3131(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m2821 (Component_t462 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_SendMessage_m2821_ftn) (Component_t462 *, String_t*, Object_t *, int32_t);
	static Component_SendMessage_m2821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_SendMessage_m2821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C" void Component_SendMessage_m3354 (Component_t462 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = ___value;
		int32_t L_2 = V_0;
		Component_SendMessage_m2821(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" void Component_SendMessage_m2841 (Component_t462 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		Component_SendMessage_m2821(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m3127 (Component_t462 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_SendMessage_m2821(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m7126 (Component_t462 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_BroadcastMessage_m7126_ftn) (Component_t462 *, String_t*, Object_t *, int32_t);
	static Component_BroadcastMessage_m7126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_BroadcastMessage_m7126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m2955 (Component_t462 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_BroadcastMessage_m7126(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"



// System.Void UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_get_color_m16872 (Light_t720 * __this, Color_t121 * ___value, const MethodInfo* method)
{
	typedef void (*Light_INTERNAL_get_color_m16872_ftn) (Light_t720 *, Color_t121 *);
	static Light_INTERNAL_get_color_m16872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_get_color_m16872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_set_color_m16873 (Light_t720 * __this, Color_t121 * ___value, const MethodInfo* method)
{
	typedef void (*Light_INTERNAL_set_color_m16873_ftn) (Light_t720 *, Color_t121 *);
	static Light_INTERNAL_set_color_m16873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_set_color_m16873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.Light::get_color()
extern "C" Color_t121  Light_get_color_m3378 (Light_t720 * __this, const MethodInfo* method)
{
	Color_t121  V_0 = {0};
	{
		Light_INTERNAL_get_color_m16872(__this, (&V_0), /*hidden argument*/NULL);
		Color_t121  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C" void Light_set_color_m3380 (Light_t720 * __this, Color_t121  ___value, const MethodInfo* method)
{
	{
		Light_INTERNAL_set_color_m16873(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m2508 (GameObject_t49 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m16878(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m3277 (GameObject_t49 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m16878(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" void GameObject__ctor_m2537 (GameObject_t49 * __this, String_t* ___name, TypeU5BU5D_t580* ___components, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t580* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m16859(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m16878(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		TypeU5BU5D_t580* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t580* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m7296(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t580* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t462 * GameObject_GetComponent_m2538 (GameObject_t49 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t462 * (*GameObject_GetComponent_m2538_ftn) (GameObject_t49 *, Type_t *);
	static GameObject_GetComponent_m2538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m16874 (GameObject_t49 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m16874_ftn) (GameObject_t49 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m16874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m16874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t54_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern "C" Component_t462 * GameObject_GetComponentInChildren_m7124 (GameObject_t49 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Transform_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Component_t462 * V_0 = {0};
	Transform_t54 * V_1 = {0};
	Transform_t54 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t462 * V_4 = {0};
	Component_t462 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m2549(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t462 * L_2 = GameObject_GetComponent_m2538(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t462 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t462 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t54 * L_6 = GameObject_get_transform_m2462(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t54 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t54 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t54 *)Castclass(L_12, Transform_t54_il2cpp_TypeInfo_var));
			Transform_t54 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t49 * L_14 = Component_get_gameObject_m2452(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t462 * L_16 = GameObject_GetComponentInChildren_m7124(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t462 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_17, (Object_t584 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t462 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t588_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0095:
	{
		return (Component_t462 *)NULL;
	}

IL_0097:
	{
		Component_t462 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m16875 (GameObject_t49 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m16875_ftn) (GameObject_t49 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m16875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m16875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t54 * GameObject_get_transform_m2462 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*GameObject_get_transform_m2462_ftn) (GameObject_t49 *);
	static GameObject_get_transform_m2462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m2462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2694 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2694_ftn) (GameObject_t49 *);
	static GameObject_get_layer_m2694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m4922 (GameObject_t49 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m4922_ftn) (GameObject_t49 *, int32_t);
	static GameObject_set_layer_m4922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m4922_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m2429 (GameObject_t49 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m2429_ftn) (GameObject_t49 *, bool);
	static GameObject_SetActive_m2429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m2429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m2433 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m2433_ftn) (GameObject_t49 *);
	static GameObject_get_activeSelf_m2433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m2433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2549 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2549_ftn) (GameObject_t49 *);
	static GameObject_get_activeInHierarchy_m2549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m16876 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m16876_ftn) (GameObject_t49 *);
	static GameObject_get_tag_m16876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m16876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C" void GameObject_set_tag_m3131 (GameObject_t49 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_tag_m3131_ftn) (GameObject_t49 *, String_t*);
	static GameObject_set_tag_m3131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_tag_m3131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_tag(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t49 * GameObject_FindGameObjectWithTag_m7389 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObject_t49 * (*GameObject_FindGameObjectWithTag_m7389_ftn) (String_t*);
	static GameObject_FindGameObjectWithTag_m7389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectWithTag_m7389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" GameObjectU5BU5D_t60* GameObject_FindGameObjectsWithTag_m3102 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObjectU5BU5D_t60* (*GameObject_FindGameObjectsWithTag_m3102_ftn) (String_t*);
	static GameObject_FindGameObjectsWithTag_m3102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectsWithTag_m3102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m2975 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2975_ftn) (GameObject_t49 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String)
extern "C" void GameObject_SendMessage_m3090 (GameObject_t49 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		GameObject_SendMessage_m2975(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m3348 (GameObject_t49 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_SendMessage_m2975(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m2974 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_BroadcastMessage_m2974_ftn) (GameObject_t49 *, String_t*, Object_t *, int32_t);
	static GameObject_BroadcastMessage_m2974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_BroadcastMessage_m2974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m2969 (GameObject_t49 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_BroadcastMessage_m2974(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t462 * GameObject_Internal_AddComponentWithType_m16877 (GameObject_t49 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t462 * (*GameObject_Internal_AddComponentWithType_m16877_ftn) (GameObject_t49 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m16877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m16877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t462 * GameObject_AddComponent_m7296 (GameObject_t49 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t462 * L_1 = GameObject_Internal_AddComponentWithType_m16877(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m16878 (Object_t * __this /* static, unused */, GameObject_t49 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m16878_ftn) (GameObject_t49 *, String_t*);
	static GameObject_Internal_CreateGameObject_m16878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m16878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t49 * GameObject_Find_m3371 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t49 * (*GameObject_Find_m3371_ftn) (String_t*);
	static GameObject_Find_m3371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m3371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" GameObject_t49 * GameObject_get_gameObject_m2842 (GameObject_t49 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"



// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m16879 (Enumerator_t4516 * __this, Transform_t54 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Transform_t54 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m16880 (Enumerator_t4516 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t54 * L_2 = Transform_GetChild_m3144(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m16881 (Enumerator_t4516 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t54 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2456(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// System.Void UnityEngine.Transform/Enumerator::Reset()
extern "C" void Enumerator_Reset_m16882 (Enumerator_t4516 * __this, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m16883 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m16883_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_position_m16883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m16883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m16884 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m16884_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_position_m16884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m16884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t53  Transform_get_position_m2459 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m16883(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m2461 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m16884(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m16885 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m16885_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_localPosition_m16885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m16885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m16886 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m16886_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_localPosition_m16886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m16886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t53  Transform_get_localPosition_m2444 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m16885(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m2423 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m16886(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t53  Transform_get_eulerAngles_m3119 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t53  L_1 = Quaternion_get_eulerAngles_m3145((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" Vector3_t53  Transform_get_right_m2632 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_right_m3025(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2470(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" Vector3_t53  Transform_get_up_m2631 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_up_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2470(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t53  Transform_get_forward_m2584 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_forward_m2580(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2470(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m16887 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m16887_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_get_rotation_m16887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m16887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m16888 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m16888_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_set_rotation_m16888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m16888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t69  Transform_get_rotation_m2512 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m16887(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t69  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m2633 (Transform_t54 * __this, Quaternion_t69  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m16888(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m16889 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m16889_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_get_localRotation_m16889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m16889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m16890 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m16890_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_set_localRotation_m16890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m16890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t69  Transform_get_localRotation_m2947 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m16889(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t69  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m2689 (Transform_t54 * __this, Quaternion_t69  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m16890(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m16891 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m16891_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_localScale_m16891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m16891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m16892 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m16892_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_localScale_m16892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m16892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t53  Transform_get_localScale_m2514 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m16891(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m2634 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m16892(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t54 * Transform_get_parent_m2540 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = Transform_get_parentInternal_m16893(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern "C" void Transform_set_parent_m2509 (Transform_t54 * __this, Transform_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t259 *)IsInst(__this, RectTransform_t259_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2856(NULL /*static, unused*/, (String_t*) &_stringLiteral4165, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t54 * L_0 = ___value;
		Transform_set_parentInternal_m16894(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t54 * Transform_get_parentInternal_m16893 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_get_parentInternal_m16893_ftn) (Transform_t54 *);
	static Transform_get_parentInternal_m16893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m16893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m16894 (Transform_t54 * __this, Transform_t54 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m16894_ftn) (Transform_t54 *, Transform_t54 *);
	static Transform_set_parentInternal_m16894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m16894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m4920 (Transform_t54 * __this, Transform_t54 * ___parent, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___parent;
		Transform_SetParent_m2835(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2835 (Transform_t54 * __this, Transform_t54 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m2835_ftn) (Transform_t54 *, Transform_t54 *, bool);
	static Transform_SetParent_m2835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m2835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m16895 (Transform_t54 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m16895_ftn) (Transform_t54 *, Matrix4x4_t68 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m16895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m16895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t68  Transform_get_worldToLocalMatrix_m4965 (Transform_t54 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m16895(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m16896 (Transform_t54 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localToWorldMatrix_m16896_ftn) (Transform_t54 *, Matrix4x4_t68 *);
	static Transform_INTERNAL_get_localToWorldMatrix_m16896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localToWorldMatrix_m16896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t68  Transform_get_localToWorldMatrix_m2609 (Transform_t54 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Transform_INTERNAL_get_localToWorldMatrix_m16896(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m16897 (Transform_t54 * __this, Vector3_t53  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t69  L_3 = Quaternion_Euler_m2469(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t69  L_5 = Transform_get_localRotation_m2947(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_6 = V_0;
		Quaternion_t69  L_7 = Quaternion_op_Multiply_m2695(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m2689(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t69  L_8 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_9 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_10 = Quaternion_Inverse_m4981(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t69  L_11 = V_0;
		Quaternion_t69  L_12 = Quaternion_op_Multiply_m2695(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t69  L_13 = Transform_get_rotation_m2512(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_14 = Quaternion_op_Multiply_m2695(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t69  L_15 = Quaternion_op_Multiply_m2695(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m2633(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C" void Transform_Rotate_m3024 (Transform_t54 * __this, float ___xAngle, float ___yAngle, float ___zAngle, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		int32_t L_3 = V_0;
		Transform_Rotate_m16898(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Rotate_m16898 (Transform_t54 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, const MethodInfo* method)
{
	{
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		Vector3_t53  L_3 = {0};
		Vector3__ctor_m2422(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___relativeTo;
		Transform_Rotate_m16897(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C" void Transform_LookAt_m2471 (Transform_t54 * __this, Transform_t54 * ___target, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = Vector3_get_up_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t54 * L_1 = ___target;
		Vector3_t53  L_2 = V_0;
		Transform_LookAt_m16899(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m16899 (Transform_t54 * __this, Transform_t54 * ___target, Vector3_t53  ___worldUp, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m2415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t54 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t53  L_3 = Transform_get_position_m2459(L_2, /*hidden argument*/NULL);
		Vector3_t53  L_4 = ___worldUp;
		Transform_LookAt_m16900(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m16900 (Transform_t54 * __this, Vector3_t53  ___worldPosition, Vector3_t53  ___worldUp, const MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m16901(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" void Transform_LookAt_m2940 (Transform_t54 * __this, Vector3_t53  ___worldPosition, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = Vector3_get_up_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m16901(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m16901 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___worldPosition, Vector3_t53 * ___worldUp, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m16901_ftn) (Transform_t54 *, Vector3_t53 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_LookAt_m16901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m16901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_TransformDirection_m2692 (Transform_t54 * __this, Vector3_t53  ___direction, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_TransformDirection_m16902(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_TransformDirection_m16902 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_TransformDirection_m16902_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_TransformDirection_m16902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m16902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_InverseTransformDirection_m2575 (Transform_t54 * __this, Vector3_t53  ___direction, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_InverseTransformDirection_m16903(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_InverseTransformDirection_m16903 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_InverseTransformDirection_m16903_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_InverseTransformDirection_m16903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformDirection_m16903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_TransformPoint_m2510 (Transform_t54 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_TransformPoint_m16904(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_TransformPoint_m16904 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_TransformPoint_m16904_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_TransformPoint_m16904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m16904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
extern "C" Vector3_t53  Transform_TransformPoint_m2948 (Transform_t54 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t53  L_3 = {0};
		Vector3__ctor_m2422(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t53  L_4 = Transform_TransformPoint_m2510(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_InverseTransformPoint_m2517 (Transform_t54 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m16905(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_InverseTransformPoint_m16905 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_InverseTransformPoint_m16905_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m16905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m16905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" Transform_t54 * Transform_get_root_m3159 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_get_root_m3159_ftn) (Transform_t54 *);
	static Transform_get_root_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_root_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_root()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2456 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2456_ftn) (Transform_t54 *);
	static Transform_get_childCount_m2456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m4921 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m4921_ftn) (Transform_t54 *);
	static Transform_SetAsFirstSibling_m4921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m4921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsLastSibling()
extern "C" void Transform_SetAsLastSibling_m3410 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsLastSibling_m3410_ftn) (Transform_t54 *);
	static Transform_SetAsLastSibling_m3410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsLastSibling_m3410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsLastSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t54 * Transform_Find_m7309 (Transform_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_Find_m7309_ftn) (Transform_t54 *, String_t*);
	static Transform_Find_m7309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m7309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t4516_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m16906 (Transform_t54 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t4516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8356);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t4516 * L_0 = (Enumerator_t4516 *)il2cpp_codegen_object_new (Enumerator_t4516_il2cpp_TypeInfo_var);
		Enumerator__ctor_m16879(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t54 * Transform_GetChild_m3144 (Transform_t54 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_GetChild_m3144_ftn) (Transform_t54 *, int32_t);
	static Transform_GetChild_m3144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m3144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m2414 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m2414_ftn) ();
	static Time_get_time_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C" float Time_get_timeSinceLevelLoad_m2546 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeSinceLevelLoad_m2546_ftn) ();
	static Time_get_timeSinceLevelLoad_m2546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeSinceLevelLoad_m2546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m2446 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m2446_ftn) ();
	static Time_get_deltaTime_m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m4757 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m4757_ftn) ();
	static Time_get_unscaledTime_m4757_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m4757_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m4773 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m4773_ftn) ();
	static Time_get_unscaledDeltaTime_m4773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m4773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m2690 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m2690_ftn) ();
	static Time_get_timeScale_m2690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m2690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m2731 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m2731_ftn) (float);
	static Time_set_timeScale_m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m2550 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m2550_ftn) ();
	static Time_get_frameCount_m2550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m2550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" float Time_get_realtimeSinceStartup_m2788 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m2788_ftn) ();
	static Time_get_realtimeSinceStartup_m2788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m2788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif



// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m2447 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m2447_ftn) (float, float);
	static Random_Range_m2447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m2447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m3085 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m16907(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m16907 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m16907_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m16907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m16907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m3381 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Random_get_value_m3381_ftn) ();
	static Random_get_value_m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C" Vector3_t53  Random_get_insideUnitSphere_m3134 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Random_get_insideUnitSphere_m3134_ftn) ();
	static Random_get_insideUnitSphere_m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_insideUnitSphere_m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_insideUnitSphere()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m16908 (YieldInstruction_t4440 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t4440_marshal(const YieldInstruction_t4440& unmarshaled, YieldInstruction_t4440_marshaled& marshaled)
{
}
void YieldInstruction_t4440_marshal_back(const YieldInstruction_t4440_marshaled& marshaled, YieldInstruction_t4440& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t4440_marshal_cleanup(YieldInstruction_t4440_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern "C" void PlayerPrefsException__ctor_m16909 (PlayerPrefsException_t4519 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m3235(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"



// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C" bool PlayerPrefs_TrySetSetString_m16910 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetSetString_m16910_ftn) (String_t*, String_t*);
	static PlayerPrefs_TrySetSetString_m16910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetSetString_m16910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern TypeInfo* PlayerPrefsException_t4519_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetString_m2735 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t4519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8357);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetSetString_m16910(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t4519 * L_3 = (PlayerPrefsException_t4519 *)il2cpp_codegen_object_new (PlayerPrefsException_t4519_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m16909(L_3, (String_t*) &_stringLiteral4166, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3259 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m3259_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m3259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m3259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m2737 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m3259(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m2736 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_HasKey_m2736_ftn) (String_t*);
	static PlayerPrefs_HasKey_m2736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_HasKey_m2736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::HasKey(System.String)");
	return _il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C" void PlayerPrefs_DeleteKey_m2740 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteKey_m2740_ftn) (String_t*);
	static PlayerPrefs_DeleteKey_m2740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteKey_m2740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
	_il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m8882 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_Save_m8882_ftn) ();
	static PlayerPrefs_Save_m8882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_Save_m8882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
	_il2cpp_icall_func();
}
// UnityEngine.Motion
#include "UnityEngine_UnityEngine_Motion.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Motion
#include "UnityEngine_UnityEngine_MotionMethodDeclarations.h"



// UnityEngine.ParticleSystemRenderMode
#include "UnityEngine_UnityEngine_ParticleSystemRenderMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ParticleSystemRenderMode
#include "UnityEngine_UnityEngine_ParticleSystemRenderModeMethodDeclarations.h"



// UnityEngine.ParticleSystemSimulationSpace
#include "UnityEngine_UnityEngine_ParticleSystemSimulationSpace.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ParticleSystemSimulationSpace
#include "UnityEngine_UnityEngine_ParticleSystemSimulationSpaceMethodDeclarations.h"



// UnityEngine.ParticleSystem/Particle
#include "UnityEngine_UnityEngine_ParticleSystem_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ParticleSystem/Particle
#include "UnityEngine_UnityEngine_ParticleSystem_ParticleMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"


// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C" Vector3_t53  Particle_get_position_m2674 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m2652 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
extern "C" Vector3_t53  Particle_get_velocity_m2698 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2700 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C" void Particle_set_lifetime_m2551 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Lifetime_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C" void Particle_set_startLifetime_m2675 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartLifetime_10 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2646 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2656 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_4 = ((float)((float)L_0*(float)(0.0174532924f)));
		return;
	}
}
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::get_color()
extern "C" Color32_t89  Particle_get_color_m2673 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Color32_t89  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_color(UnityEngine.Color32)
extern "C" void Particle_set_color_m2655 (Particle_t187 * __this, Color32_t89  ___value, const MethodInfo* method)
{
	{
		Color32_t89  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_100.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_100MethodDeclarations.h"
struct GameObject_t49;
struct ParticleSystem_t189;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2450_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2450(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t189_m2661(__this, method) (( ParticleSystem_t189 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)


// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
extern "C" bool ParticleSystem_get_isStopped_m2680 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef bool (*ParticleSystem_get_isStopped_m2680_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_isStopped_m2680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isStopped_m2680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isStopped()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.ParticleSystem::get_isPaused()
extern "C" bool ParticleSystem_get_isPaused_m2679 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef bool (*ParticleSystem_get_isPaused_m2679_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_isPaused_m2679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPaused_m2679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPaused()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m2718 (ParticleSystem_t189 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_set_startSize_m2718_ftn) (ParticleSystem_t189 *, float);
	static ParticleSystem_set_startSize_m2718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSize_m2718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem::get_simulationSpace()
extern "C" int32_t ParticleSystem_get_simulationSpace_m2658 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystem_get_simulationSpace_m2658_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_simulationSpace_m2658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_simulationSpace_m2658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_simulationSpace()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
extern "C" void ParticleSystem_set_simulationSpace_m2693 (ParticleSystem_t189 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_set_simulationSpace_m2693_ftn) (ParticleSystem_t189 *, int32_t);
	static ParticleSystem_set_simulationSpace_m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_simulationSpace_m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C" void ParticleSystem_SetParticles_m2653 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, int32_t ___size, const MethodInfo* method)
{
	typedef void (*ParticleSystem_SetParticles_m2653_ftn) (ParticleSystem_t189 *, ParticleU5BU5D_t186*, int32_t);
	static ParticleSystem_SetParticles_m2653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_SetParticles_m2653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)");
	_il2cpp_icall_func(__this, ___particles, ___size);
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C" int32_t ParticleSystem_GetParticles_m2651 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystem_GetParticles_m2651_ftn) (ParticleSystem_t189 *, ParticleU5BU5D_t186*);
	static ParticleSystem_GetParticles_m2651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticles_m2651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])");
	return _il2cpp_icall_func(__this, ___particles);
}
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m16911 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Play_m16911_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Play_m16911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Play_m16911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m16912 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Stop_m16912_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Stop_m16912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Stop_m16912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Internal_Clear()
extern "C" void ParticleSystem_Internal_Clear_m16913 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Clear_m16913_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Clear_m16913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Clear_m16913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Clear()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m2681 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Play_m16914(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m16914 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t4661* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t4661* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t4661* L_1 = ParticleSystem_GetParticleSystems_m16918(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t4661* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t4661* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Play_m16911(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t4661* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Play_m16911(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m2678 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Stop_m16915(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m16915 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t4661* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t4661* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t4661* L_1 = ParticleSystem_GetParticleSystems_m16918(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t4661* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t4661* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Stop_m16912(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t4661* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Stop_m16912(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C" void ParticleSystem_Clear_m2657 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Clear_m16916(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" void ParticleSystem_Clear_m16916 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t4661* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t4661* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t4661* L_1 = ParticleSystem_GetParticleSystems_m16918(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t4661* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t4661* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Clear_m16913(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t4661* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Clear_m16913(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C" void ParticleSystem_Emit_m2650 (ParticleSystem_t189 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		ParticleSystem_INTERNAL_CALL_Emit_m16917(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m16917 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___self, int32_t ___count, const MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m16917_ftn) (ParticleSystem_t189 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m16917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m16917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern TypeInfo* List_1_t4662_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m17590_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m17591_MethodInfo_var;
extern "C" ParticleSystemU5BU5D_t4661* ParticleSystem_GetParticleSystems_m16918 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___root, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8358);
		List_1__ctor_m17590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485325);
		List_1_ToArray_m17591_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485326);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t4662 * V_0 = {0};
	{
		ParticleSystem_t189 * L_0 = ___root;
		bool L_1 = Object_op_Implicit_m2415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (ParticleSystemU5BU5D_t4661*)NULL;
	}

IL_000d:
	{
		List_1_t4662 * L_2 = (List_1_t4662 *)il2cpp_codegen_object_new (List_1_t4662_il2cpp_TypeInfo_var);
		List_1__ctor_m17590(L_2, /*hidden argument*/List_1__ctor_m17590_MethodInfo_var);
		V_0 = L_2;
		List_1_t4662 * L_3 = V_0;
		ParticleSystem_t189 * L_4 = ___root;
		NullCheck(L_3);
		VirtActionInvoker1< ParticleSystem_t189 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_3, L_4);
		ParticleSystem_t189 * L_5 = ___root;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2421(L_5, /*hidden argument*/NULL);
		List_1_t4662 * L_7 = V_0;
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m16919(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		List_1_t4662 * L_8 = V_0;
		NullCheck(L_8);
		ParticleSystemU5BU5D_t4661* L_9 = List_1_ToArray_m17591(L_8, /*hidden argument*/List_1_ToArray_m17591_MethodInfo_var);
		return L_9;
	}
}
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t54_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisParticleSystem_t189_m2661_MethodInfo_var;
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m16919 (Object_t * __this /* static, unused */, Transform_t54 * ___transform, List_1_t4662 * ___particleSystems, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Transform_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		GameObject_GetComponent_TisParticleSystem_t189_m2661_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Object_t * V_1 = {0};
	ParticleSystem_t189 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t54 * L_0 = ___transform;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t54 *)Castclass(L_3, Transform_t54_il2cpp_TypeInfo_var));
			Transform_t54 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t49 * L_5 = Component_get_gameObject_m2452(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			ParticleSystem_t189 * L_6 = GameObject_GetComponent_TisParticleSystem_t189_m2661(L_5, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t189_m2661_MethodInfo_var);
			V_2 = L_6;
			ParticleSystem_t189 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0030:
		{
			List_1_t4662 * L_9 = ___particleSystems;
			ParticleSystem_t189 * L_10 = V_2;
			NullCheck(L_9);
			VirtActionInvoker1< ParticleSystem_t189 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_9, L_10);
			Transform_t54 * L_11 = V_0;
			List_1_t4662 * L_12 = ___particleSystems;
			ParticleSystem_GetDirectParticleSystemChildrenRecursive_m16919(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		}

IL_003e:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_000c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_3 = ((Object_t *)IsInst(L_15, IDisposable_t588_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_3;
			if (L_16)
			{
				goto IL_0059;
			}
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_0059:
		{
			Object_t * L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.ParticleSystemRenderer
#include "UnityEngine_UnityEngine_ParticleSystemRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ParticleSystemRenderer
#include "UnityEngine_UnityEngine_ParticleSystemRendererMethodDeclarations.h"



// UnityEngine.ParticleSystemRenderMode UnityEngine.ParticleSystemRenderer::get_renderMode()
extern "C" int32_t ParticleSystemRenderer_get_renderMode_m2691 (ParticleSystemRenderer_t190 * __this, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystemRenderer_get_renderMode_m2691_ftn) (ParticleSystemRenderer_t190 *);
	static ParticleSystemRenderer_get_renderMode_m2691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_get_renderMode_m2691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t53  Particle_get_position_m16920 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m16921 (Particle_t4524 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t53  Particle_get_velocity_m16922 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m16923 (Particle_t4524 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m16924 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m16925 (Particle_t4524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m16926 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m16927 (Particle_t4524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m16928 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m16929 (Particle_t4524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m16930 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m16931 (Particle_t4524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m16932 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m16933 (Particle_t4524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t121  Particle_get_color_m16934 (Particle_t4524 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m16935 (Particle_t4524 * __this, Color_t121  ___value, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceModeMethodDeclarations.h"



// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m16936 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t318 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m16937(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m16937 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m16937_ftn) (Vector3_t53 *, Vector3_t53 *, RaycastHit_t318 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m16937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m16937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m2949 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t53  L_0 = ___origin;
		Vector3_t53  L_1 = ___direction;
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2585(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2585 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___origin;
		Vector3_t53  L_1 = ___direction;
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m16936(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m3160 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t319  L_0 = ___ray;
		RaycastHit_t318 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2562(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2562 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Ray_get_origin_m2566((&___ray), /*hidden argument*/NULL);
		Vector3_t53  L_1 = Ray_get_direction_m2568((&___ray), /*hidden argument*/NULL);
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m2585(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m3007 (Object_t * __this /* static, unused */, Ray_t319  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Ray_get_origin_m2566((&___ray), /*hidden argument*/NULL);
		Vector3_t53  L_1 = Ray_get_direction_m2568((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t317* L_4 = Physics_RaycastAll_m16938(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m16938 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t317* L_2 = Physics_INTERNAL_CALL_RaycastAll_m16939(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_INTERNAL_CALL_RaycastAll_m16939 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t317* (*Physics_INTERNAL_CALL_RaycastAll_m16939_ftn) (Vector3_t53 *, Vector3_t53 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m16939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m16939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" bool Physics_Linecast_m7442 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, RaycastHit_t318 * ___hitInfo, int32_t ___layerMask, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = ___end;
		Vector3_t53  L_1 = ___start;
		Vector3_t53  L_2 = Vector3_op_Subtraction_m2460(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t53  L_3 = ___start;
		Vector3_t53  L_4 = V_0;
		RaycastHit_t318 * L_5 = ___hitInfo;
		float L_6 = Vector3_get_magnitude_m2707((&V_0), /*hidden argument*/NULL);
		int32_t L_7 = ___layerMask;
		bool L_8 = Physics_Raycast_m2585(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m16940 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m16940_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_get_velocity_m16940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m16940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m16941 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m16941_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_set_velocity_m16941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m16941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t53  Rigidbody_get_velocity_m3314 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_velocity_m16940(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m3311 (Rigidbody_t100 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m16941(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_angularVelocity_m16942 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_angularVelocity_m16942_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_get_angularVelocity_m16942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_angularVelocity_m16942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m16943 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m16943_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m16943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m16943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" Vector3_t53  Rigidbody_get_angularVelocity_m3315 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_angularVelocity_m16942(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m3312 (Rigidbody_t100 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m16943(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m3046 (Rigidbody_t100 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m3046_ftn) (Rigidbody_t100 *, bool);
	static Rigidbody_set_isKinematic_m3046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m3046_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m3352 (Rigidbody_t100 * __this, Vector3_t53  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m16944(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m16944 (Object_t * __this /* static, unused */, Rigidbody_t100 * ___self, Vector3_t53 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m16944_ftn) (Rigidbody_t100 *, Vector3_t53 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m16944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m16944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Rigidbody_AddForceAtPosition_m2709 (Rigidbody_t100 * __this, Vector3_t53  ___force, Vector3_t53  ___position, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945 (Object_t * __this /* static, unused */, Rigidbody_t100 * ___self, Vector3_t53 * ___force, Vector3_t53 * ___position, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945_ftn) (Rigidbody_t100 *, Vector3_t53 *, Vector3_t53 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"

// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"


// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" bool Collider_get_enabled_m7367 (Collider_t194 * __this, const MethodInfo* method)
{
	typedef bool (*Collider_get_enabled_m7367_ftn) (Collider_t194 *);
	static Collider_get_enabled_m7367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_enabled_m7367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m3001 (Collider_t194 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m3001_ftn) (Collider_t194 *, bool);
	static Collider_set_enabled_m3001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m3001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t100 * Collider_get_attachedRigidbody_m16946 (Collider_t194 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t100 * (*Collider_get_attachedRigidbody_m16946_ftn) (Collider_t194 *);
	static Collider_get_attachedRigidbody_m16946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m16946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m16947 (Collider_t194 * __this, Bounds_t56 * ___value, const MethodInfo* method)
{
	typedef void (*Collider_INTERNAL_get_bounds_m16947_ftn) (Collider_t194 *, Bounds_t56 *);
	static Collider_INTERNAL_get_bounds_m16947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_get_bounds_m16947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t56  Collider_get_bounds_m3116 (Collider_t194 * __this, const MethodInfo* method)
{
	Bounds_t56  V_0 = {0};
	{
		Collider_INTERNAL_get_bounds_m16947(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t56  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"



// System.Void UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_get_center_m16948 (BoxCollider_t1449 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_get_center_m16948_ftn) (BoxCollider_t1449 *, Vector3_t53 *);
	static BoxCollider_INTERNAL_get_center_m16948_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_center_m16948_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" Vector3_t53  BoxCollider_get_center_m7362 (BoxCollider_t1449 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		BoxCollider_INTERNAL_get_center_m16948(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_get_size_m16949 (BoxCollider_t1449 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_get_size_m16949_ftn) (BoxCollider_t1449 *, Vector3_t53 *);
	static BoxCollider_INTERNAL_get_size_m16949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_size_m16949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" Vector3_t53  BoxCollider_get_size_m7363 (BoxCollider_t1449 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		BoxCollider_INTERNAL_get_size_m16949(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.SphereCollider
#include "UnityEngine_UnityEngine_SphereCollider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SphereCollider
#include "UnityEngine_UnityEngine_SphereColliderMethodDeclarations.h"



// System.Void UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" void SphereCollider_INTERNAL_get_center_m16950 (SphereCollider_t1450 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*SphereCollider_INTERNAL_get_center_m16950_ftn) (SphereCollider_t1450 *, Vector3_t53 *);
	static SphereCollider_INTERNAL_get_center_m16950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_INTERNAL_get_center_m16950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
extern "C" Vector3_t53  SphereCollider_get_center_m7364 (SphereCollider_t1450 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		SphereCollider_INTERNAL_get_center_m16950(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.SphereCollider::get_radius()
extern "C" float SphereCollider_get_radius_m7365 (SphereCollider_t1450 * __this, const MethodInfo* method)
{
	typedef float (*SphereCollider_get_radius_m7365_ftn) (SphereCollider_t1450 *);
	static SphereCollider_get_radius_m7365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_get_radius_m7365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::get_radius()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleColliderMethodDeclarations.h"



// System.Single UnityEngine.CapsuleCollider::get_height()
extern "C" float CapsuleCollider_get_height_m7361 (CapsuleCollider_t1448 * __this, const MethodInfo* method)
{
	typedef float (*CapsuleCollider_get_height_m7361_ftn) (CapsuleCollider_t1448 *);
	static CapsuleCollider_get_height_m7361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m7361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t53  RaycastHit_get_point_m2563 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t53  RaycastHit_get_normal_m2564 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m3008 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t194 * RaycastHit_get_collider_m2710 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Collider_t194 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t100 * RaycastHit_get_rigidbody_m2708 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	Rigidbody_t100 * G_B3_0 = {0};
	{
		Collider_t194 * L_0 = RaycastHit_get_collider_m2710(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t194 * L_2 = RaycastHit_get_collider_m2710(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t100 * L_3 = Collider_get_attachedRigidbody_m16946(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t100 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t54 * RaycastHit_get_transform_m2565 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	Rigidbody_t100 * V_0 = {0};
	{
		Rigidbody_t100 * L_0 = RaycastHit_get_rigidbody_m2708(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t100 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody_t100 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_4 = Component_get_transform_m2421(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider_t194 * L_5 = RaycastHit_get_collider_m2710(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider_t194 * L_7 = RaycastHit_get_collider_m2710(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2421(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t54 *)NULL;
	}
}
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlagsMethodDeclarations.h"



// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
extern "C" Vector3_t53  ControllerColliderHit_get_moveDirection_m3130 (ControllerColliderHit_t575 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_MoveDirection_4);
		return L_0;
	}
}
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterController.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"



// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" int32_t CharacterController_Move_m3030 (CharacterController_t321 * __this, Vector3_t53  ___motion, const MethodInfo* method)
{
	{
		int32_t L_0 = CharacterController_INTERNAL_CALL_Move_m16951(NULL /*static, unused*/, __this, (&___motion), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m16951 (Object_t * __this /* static, unused */, CharacterController_t321 * ___self, Vector3_t53 * ___motion, const MethodInfo* method)
{
	typedef int32_t (*CharacterController_INTERNAL_CALL_Move_m16951_ftn) (CharacterController_t321 *, Vector3_t53 *);
	static CharacterController_INTERNAL_CALL_Move_m16951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_Move_m16951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___motion);
}
// System.Single UnityEngine.CharacterController::get_height()
extern "C" float CharacterController_get_height_m7360 (CharacterController_t321 * __this, const MethodInfo* method)
{
	typedef float (*CharacterController_get_height_m7360_ftn) (CharacterController_t321 *);
	static CharacterController_get_height_m7360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_height_m7360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_height()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_101.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_101MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t4528_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t597_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m17592_MethodInfo_var;
extern "C" void Physics2D__cctor_m16952 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8359);
		Physics2D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		List_1__ctor_m17592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485327);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t4528 * L_0 = (List_1_t4528 *)il2cpp_codegen_object_new (List_1_t4528_il2cpp_TypeInfo_var);
		List_1__ctor_m17592(L_0, /*hidden argument*/List_1__ctor_m17592_MethodInfo_var);
		((Physics2D_t597_StaticFields*)Physics2D_t597_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern TypeInfo* Physics2D_t597_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m16953 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t596 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t596 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t597_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m16954(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m16954 (Object_t * __this /* static, unused */, Vector2_t97 * ___origin, Vector2_t97 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t596 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m16954_ftn) (Vector2_t97 *, Vector2_t97 *, float, int32_t, float, float, RaycastHit2D_t596 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m16954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m16954_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t597_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t596  Physics2D_Raycast_m3006 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t97  L_0 = ___origin;
		Vector2_t97  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t597_il2cpp_TypeInfo_var);
		RaycastHit2D_t596  L_6 = Physics2D_Raycast_m2569(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t597_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t596  Physics2D_Raycast_m2569 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t596  V_0 = {0};
	{
		Vector2_t97  L_0 = ___origin;
		Vector2_t97  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t597_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m16953(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t596  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t597_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t659* Physics2D_RaycastAll_m3005 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t597_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t659* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m16955(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t659* Physics2D_INTERNAL_CALL_RaycastAll_m16955 (Object_t * __this /* static, unused */, Vector2_t97 * ___origin, Vector2_t97 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t659* (*Physics2D_INTERNAL_CALL_RaycastAll_m16955_ftn) (Vector2_t97 *, Vector2_t97 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m16955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m16955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t97  RaycastHit2D_get_point_m2571 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t97  RaycastHit2D_get_normal_m2573 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m4823 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t195 * RaycastHit2D_get_collider_m2570 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Collider2D_t195 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t324 * RaycastHit2D_get_rigidbody_m2711 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	Rigidbody2D_t324 * G_B3_0 = {0};
	{
		Collider2D_t195 * L_0 = RaycastHit2D_get_collider_m2570(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t195 * L_2 = RaycastHit2D_get_collider_m2570(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t324 * L_3 = Collider2D_get_attachedRigidbody_m16960(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t324 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t54 * RaycastHit2D_get_transform_m2574 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	Rigidbody2D_t324 * V_0 = {0};
	{
		Rigidbody2D_t324 * L_0 = RaycastHit2D_get_rigidbody_m2711(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t324 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t324 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_4 = Component_get_transform_m2421(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t195 * L_5 = RaycastHit2D_get_collider_m2570(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t195 * L_7 = RaycastHit2D_get_collider_m2570(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2421(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t54 *)NULL;
	}
}
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m16956 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_velocity_m16956_ftn) (Rigidbody2D_t324 *, Vector2_t97 *);
	static Rigidbody2D_INTERNAL_get_velocity_m16956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_velocity_m16956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m16957 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m16957_ftn) (Rigidbody2D_t324 *, Vector2_t97 *);
	static Rigidbody2D_INTERNAL_set_velocity_m16957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m16957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t97  Rigidbody2D_get_velocity_m3034 (Rigidbody2D_t324 * __this, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_velocity_m16956(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m3039 (Rigidbody2D_t324 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m16957(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C" float Rigidbody2D_get_angularVelocity_m3316 (Rigidbody2D_t324 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_angularVelocity_m3316_ftn) (Rigidbody2D_t324 *);
	static Rigidbody2D_get_angularVelocity_m3316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_angularVelocity_m3316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_angularVelocity()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C" void Rigidbody2D_set_angularVelocity_m3313 (Rigidbody2D_t324 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_angularVelocity_m3313_ftn) (Rigidbody2D_t324 *, float);
	static Rigidbody2D_set_angularVelocity_m3313_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_angularVelocity_m3313_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C" void Rigidbody2D_set_isKinematic_m3047 (Rigidbody2D_t324 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_isKinematic_m3047_ftn) (Rigidbody2D_t324 *, bool);
	static Rigidbody2D_set_isKinematic_m3047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_isKinematic_m3047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m3037 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForce_m16958(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m16958 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForce_m16958_ftn) (Rigidbody2D_t324 *, Vector2_t97 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForce_m16958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForce_m16958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody2D::AddForceAtPosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForceAtPosition_m2712 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, Vector2_t97  ___position, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, Vector2_t97 * ___position, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959_ftn) (Rigidbody2D_t324 *, Vector2_t97 *, Vector2_t97 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t324 * Collider2D_get_attachedRigidbody_m16960 (Collider2D_t195 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t324 * (*Collider2D_get_attachedRigidbody_m16960_ftn) (Collider2D_t195 *);
	static Collider2D_get_attachedRigidbody_m16960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m16960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgentMethodDeclarations.h"



// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m2966 (NavMeshAgent_t297 * __this, Vector3_t53  ___target, const MethodInfo* method)
{
	{
		bool L_0 = NavMeshAgent_INTERNAL_CALL_SetDestination_m16961(NULL /*static, unused*/, __this, (&___target), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m16961 (Object_t * __this /* static, unused */, NavMeshAgent_t297 * ___self, Vector3_t53 * ___target, const MethodInfo* method)
{
	typedef bool (*NavMeshAgent_INTERNAL_CALL_SetDestination_m16961_ftn) (NavMeshAgent_t297 *, Vector3_t53 *);
	static NavMeshAgent_INTERNAL_CALL_SetDestination_m16961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_SetDestination_m16961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___target);
}
// System.Single UnityEngine.NavMeshAgent::get_remainingDistance()
extern "C" float NavMeshAgent_get_remainingDistance_m2959 (NavMeshAgent_t297 * __this, const MethodInfo* method)
{
	typedef float (*NavMeshAgent_get_remainingDistance_m2959_ftn) (NavMeshAgent_t297 *);
	static NavMeshAgent_get_remainingDistance_m2959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m2959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::get_remainingDistance()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m16962 (AudioConfigurationChangeHandler_t4530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m16963 (AudioConfigurationChangeHandler_t4530 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m16963((AudioConfigurationChangeHandler_t4530 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t4530(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m16964 (AudioConfigurationChangeHandler_t4530 * __this, bool ___deviceWasChanged, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t30_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m16965 (AudioConfigurationChangeHandler_t4530 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t4531_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m16966 (AudioSettings_t4531 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t4531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8360);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t4530 * L_0 = ((AudioSettings_t4531_StaticFields*)AudioSettings_t4531_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t4530 * L_1 = ((AudioSettings_t4531_StaticFields*)AudioSettings_t4531_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioType
#include "UnityEngine_UnityEngine_AudioTypeMethodDeclarations.h"



// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m16967 (PCMReaderCallback_t4533 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m16968 (PCMReaderCallback_t4533 * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m16968((PCMReaderCallback_t4533 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t4533(Il2CppObject* delegate, SingleU5BU5D_t168* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m16969 (PCMReaderCallback_t4533 * __this, SingleU5BU5D_t168* ___data, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m16970 (PCMReaderCallback_t4533 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m16971 (PCMSetPositionCallback_t4534 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m16972 (PCMSetPositionCallback_t4534 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m16972((PCMSetPositionCallback_t4534 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t4534(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m16973 (PCMSetPositionCallback_t4534 * __this, int32_t ___position, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t29_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m16974 (PCMSetPositionCallback_t4534 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m7331 (AudioClip_t261 * __this, const MethodInfo* method)
{
	typedef float (*AudioClip_get_length_m7331_ftn) (AudioClip_t261 *);
	static AudioClip_get_length_m7331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m7331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m16975 (AudioClip_t261 * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t4533 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t4533 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t168* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t168* >::Invoke(11 /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m16976 (AudioClip_t261 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t4534 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t4534 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioListener
#include "UnityEngine_UnityEngine_AudioListener.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioListener
#include "UnityEngine_UnityEngine_AudioListenerMethodDeclarations.h"



// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m7315 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m7315_ftn) (AudioSource_t262 *);
	static AudioSource_get_volume_m7315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m7315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m7316 (AudioSource_t262 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m7316_ftn) (AudioSource_t262 *, float);
	static AudioSource_set_volume_m7316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m7316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t261 * AudioSource_get_clip_m7334 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef AudioClip_t261 * (*AudioSource_get_clip_m7334_ftn) (AudioSource_t262 *);
	static AudioSource_get_clip_m7334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m7334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m3156 (AudioSource_t262 * __this, AudioClip_t261 * ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m3156_ftn) (AudioSource_t262 *, AudioClip_t261 *);
	static AudioSource_set_clip_m3156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m3156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m16977 (AudioSource_t262 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m16977_ftn) (AudioSource_t262 *, uint64_t);
	static AudioSource_Play_m16977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m16977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m3157 (AudioSource_t262 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m16977(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m7335 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m7335_ftn) (AudioSource_t262 *);
	static AudioSource_Stop_m7335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m7335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m7332 (AudioSource_t262 * __this, const MethodInfo* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m16978(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_Pause_m16978 (Object_t * __this /* static, unused */, AudioSource_t262 * ___self, const MethodInfo* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m16978_ftn) (AudioSource_t262 *);
	static AudioSource_INTERNAL_CALL_Pause_m16978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m16978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m7333 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m7333_ftn) (AudioSource_t262 *);
	static AudioSource_get_isPlaying_m7333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m7333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m16979 (AudioSource_t262 * __this, AudioClip_t261 * ___clip, float ___volumeScale, const MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m16979_ftn) (AudioSource_t262 *, AudioClip_t261 *, float);
	static AudioSource_PlayOneShot_m16979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m16979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m2871 (AudioSource_t262 * __this, AudioClip_t261 * ___clip, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t261 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m16979(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m16980 (WebCamDevice_t4535 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m16981 (WebCamDevice_t4535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t4535_marshal(const WebCamDevice_t4535& unmarshaled, WebCamDevice_t4535_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t4535_marshal_back(const WebCamDevice_t4535_marshaled& marshaled, WebCamDevice_t4535& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t4535_marshal_cleanup(WebCamDevice_t4535_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapModeMethodDeclarations.h"



// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m16982 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t584 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t660 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m16983 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m16984 (AnimationEvent_t4538 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m16985 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m16986 (AnimationEvent_t4538 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m16987 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m16988 (AnimationEvent_t4538 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m16989 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m16990 (AnimationEvent_t4538 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t584 * AnimationEvent_get_objectReferenceParameter_m16991 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m16992 (AnimationEvent_t4538 * __this, Object_t584 * ___value, const MethodInfo* method)
{
	{
		Object_t584 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m16993 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m16994 (AnimationEvent_t4538 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m16995 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m16996 (AnimationEvent_t4538 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m16997 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m16998 (AnimationEvent_t4538 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m16999 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m17000 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t660 * AnimationEvent_get_animationState_m17001 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m16999(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2815(NULL /*static, unused*/, (String_t*) &_stringLiteral4167, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t660 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" AnimatorStateInfo_t574  AnimationEvent_get_animatorStateInfo_m17002 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m17000(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2815(NULL /*static, unused*/, (String_t*) &_stringLiteral4168, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t574  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" AnimatorClipInfo_t4539  AnimationEvent_get_animatorClipInfo_m17003 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m17000(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2815(NULL /*static, unused*/, (String_t*) &_stringLiteral4169, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t4539  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m17004 (AnimationEvent_t4538 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m16993(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m16995(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m17572((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AnimationClip
#include "UnityEngine_UnityEngine_AnimationClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationClip
#include "UnityEngine_UnityEngine_AnimationClipMethodDeclarations.h"



// System.Single UnityEngine.AnimationClip::get_length()
extern "C" float AnimationClip_get_length_m3027 (AnimationClip_t296 * __this, const MethodInfo* method)
{
	typedef float (*AnimationClip_get_length_m3027_ftn) (AnimationClip_t296 *);
	static AnimationClip_get_length_m3027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m3027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C" void Keyframe__ctor_m2672 (Keyframe_t601 * __this, float ___time, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		__this->___m_InTangent_2 = (0.0f);
		__this->___m_OutTangent_3 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Keyframe__ctor_m3343 (Keyframe_t601 * __this, float ___time, float ___value, float ___inTangent, float ___outTangent, const MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		float L_2 = ___inTangent;
		__this->___m_InTangent_2 = L_2;
		float L_3 = ___outTangent;
		__this->___m_OutTangent_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C" void Keyframe_set_time_m2594 (Keyframe_t601 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C" void Keyframe_set_value_m2590 (Keyframe_t601 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Value_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C" void Keyframe_set_inTangent_m2591 (Keyframe_t601 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_InTangent_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C" void Keyframe_set_outTangent_m2592 (Keyframe_t601 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_OutTangent_3 = L_0;
		return;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"



// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2596 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t600* L_0 = ___keys;
		AnimationCurve_Init_m17009(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2595 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m17009(__this, (KeyframeU5BU5D_t600*)(KeyframeU5BU5D_t600*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m17005 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m17005_ftn) (AnimationCurve_t98 *);
	static AnimationCurve_Cleanup_m17005_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m17005_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m17006 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m17005(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m127(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m2588 (AnimationCurve_t98 * __this, float ___time, const MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m2588_ftn) (AnimationCurve_t98 *, float);
	static AnimationCurve_Evaluate_m2588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m2588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t600* AnimationCurve_get_keys_m2589 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	{
		KeyframeU5BU5D_t600* L_0 = AnimationCurve_GetKeys_m17008(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_set_keys_m2593 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___value, const MethodInfo* method)
{
	{
		KeyframeU5BU5D_t600* L_0 = ___value;
		AnimationCurve_SetKeys_m17007(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_SetKeys_m17007 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_SetKeys_m17007_ftn) (AnimationCurve_t98 *, KeyframeU5BU5D_t600*);
	static AnimationCurve_SetKeys_m17007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_SetKeys_m17007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t600* AnimationCurve_GetKeys_m17008 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	typedef KeyframeU5BU5D_t600* (*AnimationCurve_GetKeys_m17008_ftn) (AnimationCurve_t98 *);
	static AnimationCurve_GetKeys_m17008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKeys_m17008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKeys()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m17009 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t600* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m17009_ftn) (AnimationCurve_t98 *, KeyframeU5BU5D_t600*);
	static AnimationCurve_Init_m17009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m17009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t98_marshal(const AnimationCurve_t98& unmarshaled, AnimationCurve_t98_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t98_marshal_back(const AnimationCurve_t98_marshaled& marshaled, AnimationCurve_t98& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t98_marshal_cleanup(AnimationCurve_t98_marshaled& marshaled)
{
}
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayModeMethodDeclarations.h"



// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_EnumeratorMethodDeclarations.h"

// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"


// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m17010 (Enumerator_t4541 * __this, Animation_t298 * ___outer, const MethodInfo* method)
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Animation_t298 * L_0 = ___outer;
		__this->___m_Outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m17011 (Enumerator_t4541 * __this, const MethodInfo* method)
{
	{
		Animation_t298 * L_0 = (__this->___m_Outer_0);
		int32_t L_1 = (__this->___m_CurrentIndex_1);
		NullCheck(L_0);
		AnimationState_t660 * L_2 = Animation_GetStateAtIndex_m17019(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m17012 (Enumerator_t4541 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Animation_t298 * L_0 = (__this->___m_Outer_0);
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m17020(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___m_CurrentIndex_1);
		__this->___m_CurrentIndex_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->___m_CurrentIndex_1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
extern "C" void Enumerator_Reset_m17013 (Enumerator_t4541 * __this, const MethodInfo* method)
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C" AnimationClip_t296 * Animation_get_clip_m7349 (Animation_t298 * __this, const MethodInfo* method)
{
	typedef AnimationClip_t296 * (*Animation_get_clip_m7349_ftn) (Animation_t298 *);
	static Animation_get_clip_m7349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_clip_m7349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_clip()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t660 * Animation_get_Item_m3021 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		AnimationState_t660 * L_1 = Animation_GetState_m17018(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" void Animation_CrossFade_m17014 (Animation_t298 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Animation_CrossFade_m17014_ftn) (Animation_t298 *, String_t*, float, int32_t);
	static Animation_CrossFade_m17014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_m17014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation, ___fadeLength, ___mode);
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" void Animation_CrossFade_m2960 (Animation_t298 * __this, String_t* ___animation, const MethodInfo* method)
{
	int32_t V_0 = {0};
	float V_1 = 0.0f;
	{
		V_0 = 0;
		V_1 = (0.3f);
		String_t* L_0 = ___animation;
		float L_1 = V_1;
		int32_t L_2 = V_0;
		Animation_CrossFade_m17014(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" void Animation_AddClip_m3020 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, const MethodInfo* method)
{
	{
		AnimationClip_t296 * L_0 = ___clip;
		String_t* L_1 = ___newName;
		Animation_AddClip_m17016(__this, L_0, L_1, ((int32_t)-2147483648), ((int32_t)2147483647), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" void Animation_AddClip_m17015 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, bool ___addLoopFrame, const MethodInfo* method)
{
	typedef void (*Animation_AddClip_m17015_ftn) (Animation_t298 *, AnimationClip_t296 *, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m17015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m17015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___clip, ___newName, ___firstFrame, ___lastFrame, ___addLoopFrame);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" void Animation_AddClip_m17016 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		AnimationClip_t296 * L_0 = ___clip;
		String_t* L_1 = ___newName;
		int32_t L_2 = ___firstFrame;
		int32_t L_3 = ___lastFrame;
		bool L_4 = V_0;
		Animation_AddClip_m17015(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern TypeInfo* Enumerator_t4541_il2cpp_TypeInfo_var;
extern "C" Object_t * Animation_GetEnumerator_m17017 (Animation_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t4541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8361);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t4541 * L_0 = (Enumerator_t4541 *)il2cpp_codegen_object_new (Enumerator_t4541_il2cpp_TypeInfo_var);
		Enumerator__ctor_m17010(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t660 * Animation_GetState_m17018 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef AnimationState_t660 * (*Animation_GetState_m17018_ftn) (Animation_t298 *, String_t*);
	static Animation_GetState_m17018_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_m17018_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t660 * Animation_GetStateAtIndex_m17019 (Animation_t298 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef AnimationState_t660 * (*Animation_GetStateAtIndex_m17019_ftn) (Animation_t298 *, int32_t);
	static Animation_GetStateAtIndex_m17019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m17019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m17020 (Animation_t298 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animation_GetStateCount_m17020_ftn) (Animation_t298 *);
	static Animation_GetStateCount_m17020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m17020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C" void AnimationState_set_wrapMode_m3125 (AnimationState_t660 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_wrapMode_m3125_ftn) (AnimationState_t660 *, int32_t);
	static AnimationState_set_wrapMode_m3125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_wrapMode_m3125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" void AnimationState_set_time_m3126 (AnimationState_t660 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_time_m3126_ftn) (AnimationState_t660 *, float);
	static AnimationState_set_time_m3126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m3126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" void AnimationState_set_speed_m3028 (AnimationState_t660 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_speed_m3028_ftn) (AnimationState_t660 *, float);
	static AnimationState_set_speed_m3028_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m3028_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AnimationState::get_length()
extern "C" float AnimationState_get_length_m7310 (AnimationState_t660 * __this, const MethodInfo* method)
{
	typedef float (*AnimationState_get_length_m7310_ftn) (AnimationState_t660 *);
	static AnimationState_get_length_m7310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m7310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C" void AnimationState_set_layer_m3022 (AnimationState_t660 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_layer_m3022_ftn) (AnimationState_t660 *, int32_t);
	static AnimationState_set_layer_m3022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_layer_m3022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
extern "C" void AnimationState_AddMixingTransform_m17021 (AnimationState_t660 * __this, Transform_t54 * ___mix, bool ___recursive, const MethodInfo* method)
{
	typedef void (*AnimationState_AddMixingTransform_m17021_ftn) (AnimationState_t660 *, Transform_t54 *, bool);
	static AnimationState_AddMixingTransform_m17021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_AddMixingTransform_m17021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___mix, ___recursive);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform)
extern "C" void AnimationState_AddMixingTransform_m3023 (AnimationState_t660 * __this, Transform_t54 * ___mix, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		Transform_t54 * L_0 = ___mix;
		bool L_1 = V_0;
		AnimationState_AddMixingTransform_m17021(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.AnimationState::get_name()
extern "C" String_t* AnimationState_get_name_m7359 (AnimationState_t660 * __this, const MethodInfo* method)
{
	typedef String_t* (*AnimationState_get_name_m7359_ftn) (AnimationState_t660 *);
	static AnimationState_get_name_m7359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_name_m7359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_name()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m3165 (AnimatorStateInfo_t574 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m2936 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m17022 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m17023 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m17024 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m2790 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m17025 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m17026 (AnimatorStateInfo_t574 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m17027 (AnimatorStateInfo_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m17028 (AnimatorTransitionInfo_t4543 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m17029 (AnimatorTransitionInfo_t4543 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m17030 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m17031 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m17032 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m17033 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m17034 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m17035 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m17036 (AnimatorTransitionInfo_t4543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t4543_marshal(const AnimatorTransitionInfo_t4543& unmarshaled, AnimatorTransitionInfo_t4543_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t4543_marshal_back(const AnimatorTransitionInfo_t4543_marshaled& marshaled, AnimatorTransitionInfo_t4543& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t4543_marshal_cleanup(AnimatorTransitionInfo_t4543_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"


// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C" float Animator_GetFloat_m3110 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = Animator_GetFloatString_m17043(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C" float Animator_GetFloat_m7329 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		float L_1 = Animator_GetFloatID_m17044(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m3147 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		Animator_SetFloatString_m17041(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloat_m3166 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		float L_2 = ___dampTime;
		float L_3 = ___deltaTime;
		Animator_SetFloatStringDamp_m17053(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C" void Animator_SetFloat_m7330 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		float L_1 = ___value;
		Animator_SetFloatID_m17042(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m3107 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = Animator_GetBoolString_m17047(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C" bool Animator_GetBool_m3424 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		bool L_1 = Animator_GetBoolID_m17048(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m3040 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m17045(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C" void Animator_SetBool_m3428 (Animator_t214 * __this, int32_t ___id, bool ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		bool L_1 = ___value;
		Animator_SetBoolID_m17046(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" int32_t Animator_GetInteger_m3109 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_GetIntegerString_m17050(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" void Animator_SetInteger_m3337 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		Animator_SetIntegerString_m17049(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m2784 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m17051(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2787 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m17052(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" void Animator_set_applyRootMotion_m3331 (Animator_t214 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_set_applyRootMotion_m3331_ftn) (Animator_t214 *, bool);
	static Animator_set_applyRootMotion_m3331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_m3331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" int32_t Animator_get_layerCount_m3163 (Animator_t214 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animator_get_layerCount_m3163_ftn) (Animator_t214 *);
	static Animator_get_layerCount_m3163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m3163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C" float Animator_GetLayerWeight_m3336 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method)
{
	typedef float (*Animator_GetLayerWeight_m3336_ftn) (Animator_t214 *, int32_t);
	static Animator_GetLayerWeight_m3336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m3336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" void Animator_SetLayerWeight_m3164 (Animator_t214 * __this, int32_t ___layerIndex, float ___weight, const MethodInfo* method)
{
	typedef void (*Animator_SetLayerWeight_m3164_ftn) (Animator_t214 *, int32_t, float);
	static Animator_SetLayerWeight_m3164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m3164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex, ___weight);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t574  Animator_GetCurrentAnimatorStateInfo_m2789 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method)
{
	typedef AnimatorStateInfo_t574  (*Animator_GetCurrentAnimatorStateInfo_m2789_ftn) (Animator_t214 *, int32_t);
	static Animator_GetCurrentAnimatorStateInfo_m2789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorStateInfo_m2789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C" bool Animator_IsInTransition_m3423 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method)
{
	typedef bool (*Animator_IsInTransition_m3423_ftn) (Animator_t214 *, int32_t);
	static Animator_IsInTransition_m3423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m3423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
extern "C" void Animator_CrossFade_m7314 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName;
		float L_1 = ___transitionDuration;
		int32_t L_2 = ___layer;
		float L_3 = V_0;
		Animator_CrossFade_m17037(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" void Animator_CrossFade_m7397 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName;
		float L_1 = ___transitionDuration;
		int32_t L_2 = V_1;
		float L_3 = V_0;
		Animator_CrossFade_m17037(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m17037 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___transitionDuration;
		int32_t L_3 = ___layer;
		float L_4 = ___normalizedTime;
		Animator_CrossFade_m17038(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m17038 (Animator_t214 * __this, int32_t ___stateNameHash, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_CrossFade_m17038_ftn) (Animator_t214 *, int32_t, float, int32_t, float);
	static Animator_CrossFade_m17038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m17038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___transitionDuration, ___layer, ___normalizedTime);
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
extern "C" void Animator_Play_m7313 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName;
		int32_t L_1 = ___layer;
		float L_2 = V_0;
		Animator_Play_m17039(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m17039 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m3427(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer;
		float L_3 = ___normalizedTime;
		Animator_Play_m17040(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m17040 (Animator_t214 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_Play_m17040_ftn) (Animator_t214 *, int32_t, int32_t, float);
	static Animator_Play_m17040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m17040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___layer, ___normalizedTime);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t994 * Animator_get_runtimeAnimatorController_m4983 (Animator_t214 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t994 * (*Animator_get_runtimeAnimatorController_m4983_ftn) (Animator_t214 *);
	static Animator_get_runtimeAnimatorController_m4983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m4983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C" void Animator_set_runtimeAnimatorController_m7312 (Animator_t214 * __this, RuntimeAnimatorController_t994 * ___value, const MethodInfo* method)
{
	typedef void (*Animator_set_runtimeAnimatorController_m7312_ftn) (Animator_t214 *, RuntimeAnimatorController_t994 *);
	static Animator_set_runtimeAnimatorController_m7312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m7312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3427 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3427_ftn) (String_t*);
	static Animator_StringToHash_m3427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m17041 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatString_m17041_ftn) (Animator_t214 *, String_t*, float);
	static Animator_SetFloatString_m17041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m17041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" void Animator_SetFloatID_m17042 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatID_m17042_ftn) (Animator_t214 *, int32_t, float);
	static Animator_SetFloatID_m17042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m17042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id, ___value);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" float Animator_GetFloatString_m17043 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef float (*Animator_GetFloatString_m17043_ftn) (Animator_t214 *, String_t*);
	static Animator_GetFloatString_m17043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_m17043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" float Animator_GetFloatID_m17044 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	typedef float (*Animator_GetFloatID_m17044_ftn) (Animator_t214 *, int32_t);
	static Animator_GetFloatID_m17044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m17044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	return _il2cpp_icall_func(__this, ___id);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m17045 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m17045_ftn) (Animator_t214 *, String_t*, bool);
	static Animator_SetBoolString_m17045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m17045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" void Animator_SetBoolID_m17046 (Animator_t214 * __this, int32_t ___id, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetBoolID_m17046_ftn) (Animator_t214 *, int32_t, bool);
	static Animator_SetBoolID_m17046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m17046_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id, ___value);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m17047 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Animator_GetBoolString_m17047_ftn) (Animator_t214 *, String_t*);
	static Animator_GetBoolString_m17047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m17047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" bool Animator_GetBoolID_m17048 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	typedef bool (*Animator_GetBoolID_m17048_ftn) (Animator_t214 *, int32_t);
	static Animator_GetBoolID_m17048_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_m17048_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	return _il2cpp_icall_func(__this, ___id);
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m17049 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetIntegerString_m17049_ftn) (Animator_t214 *, String_t*, int32_t);
	static Animator_SetIntegerString_m17049_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m17049_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" int32_t Animator_GetIntegerString_m17050 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_GetIntegerString_m17050_ftn) (Animator_t214 *, String_t*);
	static Animator_GetIntegerString_m17050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m17050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m17051 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m17051_ftn) (Animator_t214 *, String_t*);
	static Animator_SetTriggerString_m17051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m17051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m17052 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m17052_ftn) (Animator_t214 *, String_t*);
	static Animator_ResetTriggerString_m17052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m17052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloatStringDamp_m17053 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatStringDamp_m17053_ftn) (Animator_t214 *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m17053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m17053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value, ___dampTime, ___deltaTime);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t4544_marshal(const SkeletonBone_t4544& unmarshaled, SkeletonBone_t4544_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t4544_marshal_back(const SkeletonBone_t4544_marshaled& marshaled, SkeletonBone_t4544& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t4544_marshal_cleanup(SkeletonBone_t4544_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m17054 (HumanBone_t4546 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m17055 (HumanBone_t4546 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m17056 (HumanBone_t4546 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m17057 (HumanBone_t4546 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t4546_marshal(const HumanBone_t4546& unmarshaled, HumanBone_t4546_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t4546_marshal_back(const HumanBone_t4546_marshaled& marshaled, HumanBone_t4546& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t4546_marshal_cleanup(HumanBone_t4546_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TerrainData
#include "UnityEngine_UnityEngine_TerrainData.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TerrainData
#include "UnityEngine_UnityEngine_TerrainDataMethodDeclarations.h"



// System.Void UnityEngine.TerrainData::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C" void TerrainData_INTERNAL_get_size_m17058 (TerrainData_t590 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*TerrainData_INTERNAL_get_size_m17058_ftn) (TerrainData_t590 *, Vector3_t53 *);
	static TerrainData_INTERNAL_get_size_m17058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_INTERNAL_get_size_m17058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::INTERNAL_get_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C" Vector3_t53  TerrainData_get_size_m2475 (TerrainData_t590 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		TerrainData_INTERNAL_get_size_m17058(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_Terrain.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_TerrainMethodDeclarations.h"



// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" TerrainData_t590 * Terrain_get_terrainData_m2474 (Terrain_t58 * __this, const MethodInfo* method)
{
	typedef TerrainData_t590 * (*Terrain_get_terrainData_m2474_ftn) (Terrain_t58 *);
	static Terrain_get_terrainData_m2474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m2474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m2480 (Terrain_t58 * __this, Vector3_t53  ___worldPosition, const MethodInfo* method)
{
	{
		float L_0 = Terrain_INTERNAL_CALL_SampleHeight_m17059(NULL /*static, unused*/, __this, (&___worldPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Terrain::INTERNAL_CALL_SampleHeight(UnityEngine.Terrain,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_SampleHeight_m17059 (Object_t * __this /* static, unused */, Terrain_t58 * ___self, Vector3_t53 * ___worldPosition, const MethodInfo* method)
{
	typedef float (*Terrain_INTERNAL_CALL_SampleHeight_m17059_ftn) (Terrain_t58 *, Vector3_t53 *);
	static Terrain_INTERNAL_CALL_SampleHeight_m17059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_INTERNAL_CALL_SampleHeight_m17059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::INTERNAL_CALL_SampleHeight(UnityEngine.Terrain,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___worldPosition);
}
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t58 * Terrain_get_activeTerrain_m2479 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Terrain_t58 * (*Terrain_get_activeTerrain_m2479_ftn) ();
	static Terrain_get_activeTerrain_m2479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrain_m2479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrain()");
	return _il2cpp_icall_func();
}
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"

// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"


// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" void TextMesh_set_text_m3369 (TextMesh_t528 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m3369_ftn) (TextMesh_t528 *, String_t*);
	static TextMesh_set_text_m3369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m3369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_font(UnityEngine.Font)
extern "C" void TextMesh_set_font_m3366 (TextMesh_t528 * __this, Font_t529 * ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_font_m3366_ftn) (TextMesh_t528 *, Font_t529 *);
	static TextMesh_set_font_m3366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_font_m3366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_font(UnityEngine.Font)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
extern "C" void TextMesh_set_anchor_m3367 (TextMesh_t528 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_anchor_m3367_ftn) (TextMesh_t528 *, int32_t);
	static TextMesh_set_anchor_m3367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_anchor_m3367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_characterSize(System.Single)
extern "C" void TextMesh_set_characterSize_m3368 (TextMesh_t528 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_characterSize_m3368_ftn) (TextMesh_t528 *, float);
	static TextMesh_set_characterSize_m3368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_characterSize_m3368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_characterSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m17060 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m17061 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2728(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m17062 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2868(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m17063 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m17064 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t201 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m4805(L_1, /*hidden argument*/NULL);
		Rect_t201 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2868(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m17065 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t201 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m4805(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m17066 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m17067 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2728(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeftUnFlipped_m17068 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m4805(L_2, /*hidden argument*/NULL);
		Vector2_t97  L_4 = {0};
		Vector2__ctor_m2417(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRightUnFlipped_m17069 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2728(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m4805(L_4, /*hidden argument*/NULL);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2417(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRightUnFlipped_m17070 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2728(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m4805(L_4, /*hidden argument*/NULL);
		Rect_t201 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2868(L_6, /*hidden argument*/NULL);
		Vector2_t97  L_8 = {0};
		Vector2__ctor_m2417(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeftUnFlipped_m17071 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m4804(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m4805(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2868(L_4, /*hidden argument*/NULL);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2417(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeft_m17072 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	Vector2_t97  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t97  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m17068(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m17068(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRight_m17073 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	Vector2_t97  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t97  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m17071(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m17069(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRight_m17074 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	Vector2_t97  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t97  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m17070(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m17070(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeft_m17075 (CharacterInfo_t4547 * __this, const MethodInfo* method)
{
	Vector2_t97  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t97  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m17069(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m17071(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t4547_marshal(const CharacterInfo_t4547& unmarshaled, CharacterInfo_t4547_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t4547_marshal_back(const CharacterInfo_t4547_marshaled& marshaled, CharacterInfo_t4547& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t4547_marshal_cleanup(CharacterInfo_t4547_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m17076 (FontTextureRebuildCallback_t4548 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m17077 (FontTextureRebuildCallback_t4548 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m17077((FontTextureRebuildCallback_t4548 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t4548(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m17078 (FontTextureRebuildCallback_t4548 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m17079 (FontTextureRebuildCallback_t4548 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t974_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m4786 (Object_t * __this /* static, unused */, Action_1_t974 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		Action_1_t974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1716);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t974 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t974 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t974 *)Castclass(L_2, Action_1_t974_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t974_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m17080 (Object_t * __this /* static, unused */, Action_1_t974 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		Action_1_t974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1716);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t974 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t974 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t974 *)Castclass(L_2, Action_1_t974_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t48 * Font_get_material_m3365 (Font_t529 * __this, const MethodInfo* method)
{
	typedef Material_t48 * (*Font_get_material_m3365_ftn) (Font_t529 *);
	static Font_get_material_m3365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m3365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m4907 (Font_t529 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m4907_ftn) (Font_t529 *, uint16_t);
	static Font_HasCharacter_m4907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m4907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m17081 (Object_t * __this /* static, unused */, Font_t529 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t974 * V_0 = {0};
	{
		Action_1_t974 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t974 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t974 * L_2 = V_0;
		Font_t529 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t529 * >::Invoke(11 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		Font_t529 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t4548 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t529 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t4548 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m4992 (Font_t529 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m4992_ftn) (Font_t529 *);
	static Font_get_dynamic_m4992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m4992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m4994 (Font_t529 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m4994_ftn) (Font_t529 *);
	static Font_get_fontSize_m4994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m4994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
