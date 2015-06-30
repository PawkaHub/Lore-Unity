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
extern "C" void SerializePrivateVariables__ctor_m12829 (SerializePrivateVariables_t2764 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3240(__this, /*hidden argument*/NULL);
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
extern "C" void SerializeField__ctor_m3310 (SerializeField_t708 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3240(__this, /*hidden argument*/NULL);
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
extern "C" Shader_t573 * Shader_Find_m2443 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef Shader_t573 * (*Shader_Find_m2443_ftn) (String_t*);
	static Shader_Find_m2443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_Find_m2443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m12830 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m12830_ftn) (String_t*);
	static Shader_PropertyToID_m12830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m12830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
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
extern "C" void Material__ctor_m2444 (Material_t48 * __this, Shader_t573 * ___shader, const MethodInfo* method)
{
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		Shader_t573 * L_0 = ___shader;
		Material_Internal_CreateWithShader_m12841(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m3082 (Material_t48 * __this, Material_t48 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		Material_t48 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m12842(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m2964 (Material_t48 * __this, Color_t121  ___value, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___value;
		Material_SetColor_m12831(__this, (String_t*) &_stringLiteral3282, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t903 * Material_get_mainTexture_m9554 (Material_t48 * __this, const MethodInfo* method)
{
	{
		Texture_t903 * L_0 = Material_GetTexture_m12834(__this, (String_t*) &_stringLiteral3283, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m2331 (Material_t48 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___value;
		Material_SetTextureOffset_m12836(__this, (String_t*) &_stringLiteral3283, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m12831 (Material_t48 * __this, String_t* ___propertyName, Color_t121  ___color, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m12830(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t121  L_2 = ___color;
		Material_SetColor_m12832(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m12832 (Material_t48 * __this, int32_t ___nameID, Color_t121  ___color, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetColor_m12833(NULL /*static, unused*/, __this, L_0, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m12833 (Object_t * __this /* static, unused */, Material_t48 * ___self, int32_t ___nameID, Color_t121 * ___color, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m12833_ftn) (Material_t48 *, int32_t, Color_t121 *);
	static Material_INTERNAL_CALL_SetColor_m12833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m12833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t903 * Material_GetTexture_m12834 (Material_t48 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m12830(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t903 * L_2 = Material_GetTexture_m12835(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t903 * Material_GetTexture_m12835 (Material_t48 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t903 * (*Material_GetTexture_m12835_ftn) (Material_t48 *, int32_t);
	static Material_GetTexture_m12835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m12835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m12836 (Material_t48 * __this, String_t* ___propertyName, Vector2_t97  ___offset, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		Material_INTERNAL_CALL_SetTextureOffset_m12837(NULL /*static, unused*/, __this, L_0, (&___offset), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m12837 (Object_t * __this /* static, unused */, Material_t48 * ___self, String_t* ___propertyName, Vector2_t97 * ___offset, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetTextureOffset_m12837_ftn) (Material_t48 *, String_t*, Vector2_t97 *);
	static Material_INTERNAL_CALL_SetTextureOffset_m12837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetTextureOffset_m12837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___propertyName, ___offset);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m12838 (Material_t48 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m12830(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m12839(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m12839 (Material_t48 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m12839_ftn) (Material_t48 *, int32_t, float);
	static Material_SetFloat_m12839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m12839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m9551 (Material_t48 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m12838(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m9550 (Material_t48 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m12830(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m12840(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m12840 (Material_t48 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m12840_ftn) (Material_t48 *, int32_t);
	static Material_HasProperty_m12840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m12840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m12841 (Object_t * __this /* static, unused */, Material_t48 * ___mono, Shader_t573 * ___shader, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m12841_ftn) (Material_t48 *, Shader_t573 *);
	static Material_Internal_CreateWithShader_m12841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m12841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m12842 (Object_t * __this /* static, unused */, Material_t48 * ___mono, Material_t48 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m12842_ftn) (Material_t48 *, Material_t48 *);
	static Material_Internal_CreateWithMaterial_m12842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m12842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
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
extern "C" void SphericalHarmonicsL2_Clear_m12843 (SphericalHarmonicsL2_t2765 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m12844(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m12844 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t2765 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845_ftn) (SphericalHarmonicsL2_t2765 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m12846 (SphericalHarmonicsL2_t2765 * __this, Color_t121  ___color, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m12847(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m12847 (Object_t * __this /* static, unused */, Color_t121  ___color, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t2765 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848 (Object_t * __this /* static, unused */, Color_t121 * ___color, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848_ftn) (Color_t121 *, SphericalHarmonicsL2_t2765 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m12849 (SphericalHarmonicsL2_t2765 * __this, Vector3_t53  ___direction, Color_t121  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t121  V_0 = {0};
	{
		Color_t121  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t121  L_2 = Color_op_Multiply_m9544(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t53  L_3 = ___direction;
		Color_t121  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m12850(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m12850 (Object_t * __this /* static, unused */, Vector3_t53  ___direction, Color_t121  ___color, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t2765 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851 (Object_t * __this /* static, unused */, Vector3_t53 * ___direction, Color_t121 * ___color, SphericalHarmonicsL2_t2765 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851_ftn) (Vector3_t53 *, Color_t121 *, SphericalHarmonicsL2_t2765 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern TypeInfo* IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var;
extern "C" float SphericalHarmonicsL2_get_Item_m12852 (SphericalHarmonicsL2_t2765 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2614);
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
		IndexOutOfRangeException_t1325 * L_31 = (IndexOutOfRangeException_t1325 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6563(L_31, (String_t*) &_stringLiteral3284, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var;
extern "C" void SphericalHarmonicsL2_set_Item_m12853 (SphericalHarmonicsL2_t2765 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2614);
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
		IndexOutOfRangeException_t1325 * L_31 = (IndexOutOfRangeException_t1325 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t1325_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6563(L_31, (String_t*) &_stringLiteral3284, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m12854 (SphericalHarmonicsL2_t2765 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m13693(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m13693(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m13693(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m13693(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m13693(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m13693(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m13693(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m13693(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m13693(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m13693(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m13693(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m13693(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m13693(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m13693(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m13693(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m13693(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m13693(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m13693(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m13693(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m13693(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m13693(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m13693(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m13693(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m13693(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m13693(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m13693(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m13693(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern TypeInfo* SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m12855 (SphericalHarmonicsL2_t2765 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5722);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t2765  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var)))
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
		V_0 = ((*(SphericalHarmonicsL2_t2765 *)((SphericalHarmonicsL2_t2765 *)UnBox (L_1, SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t2765  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m12859(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t2765 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern TypeInfo* SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t2765  SphericalHarmonicsL2_op_Multiply_m12856 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5722);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t2765  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var, (&V_0));
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
		SphericalHarmonicsL2_t2765  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t2765  SphericalHarmonicsL2_op_Multiply_m12857 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t2765  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5722);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t2765  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var, (&V_0));
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
		SphericalHarmonicsL2_t2765  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t2765  SphericalHarmonicsL2_op_Addition_m12858 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765  ___lhs, SphericalHarmonicsL2_t2765  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5722);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t2765  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t2765_il2cpp_TypeInfo_var, (&V_0));
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
		SphericalHarmonicsL2_t2765  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m12859 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765  ___lhs, SphericalHarmonicsL2_t2765  ___rhs, const MethodInfo* method)
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
extern "C" bool SphericalHarmonicsL2_op_Inequality_m12860 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t2765  ___lhs, SphericalHarmonicsL2_t2765  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t2765  L_0 = ___lhs;
		SphericalHarmonicsL2_t2765  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m12859(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" Sprite_t555 * Sprite_Create_m2851 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201  ___rect, Vector2_t97  ___pivot, const MethodInfo* method)
{
	Vector4_t2149  V_0 = {0};
	int32_t V_1 = {0};
	uint32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		Vector4_t2149  L_0 = Vector4_get_zero_m9411(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 1;
		V_2 = 0;
		V_3 = (100.0f);
		Texture2D_t90 * L_1 = ___texture;
		float L_2 = V_3;
		uint32_t L_3 = V_2;
		int32_t L_4 = V_1;
		Sprite_t555 * L_5 = Sprite_INTERNAL_CALL_Create_m12861(NULL /*static, unused*/, L_1, (&___rect), (&___pivot), L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t555 * Sprite_INTERNAL_CALL_Create_m12861 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201 * ___rect, Vector2_t97 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t2149 * ___border, const MethodInfo* method)
{
	typedef Sprite_t555 * (*Sprite_INTERNAL_CALL_Create_m12861_ftn) (Texture2D_t90 *, Rect_t201 *, Vector2_t97 *, float, uint32_t, int32_t, Vector4_t2149 *);
	static Sprite_INTERNAL_CALL_Create_m12861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_CALL_Create_m12861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)");
	return _il2cpp_icall_func(___texture, ___rect, ___pivot, ___pixelsPerUnit, ___extrude, ___meshType, ___border);
}
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t201  Sprite_get_rect_m9413 (Sprite_t555 * __this, const MethodInfo* method)
{
	typedef Rect_t201  (*Sprite_get_rect_m9413_ftn) (Sprite_t555 *);
	static Sprite_get_rect_m9413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m9413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m9409 (Sprite_t555 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m9409_ftn) (Sprite_t555 *);
	static Sprite_get_pixelsPerUnit_m9409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m9409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t90 * Sprite_get_texture_m9406 (Sprite_t555 * __this, const MethodInfo* method)
{
	typedef Texture2D_t90 * (*Sprite_get_texture_m9406_ftn) (Sprite_t555 *);
	static Sprite_get_texture_m9406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m9406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t201  Sprite_get_textureRect_m9429 (Sprite_t555 * __this, const MethodInfo* method)
{
	typedef Rect_t201  (*Sprite_get_textureRect_m9429_ftn) (Sprite_t555 *);
	static Sprite_get_textureRect_m9429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m9429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t2149  Sprite_get_border_m9407 (Sprite_t555 * __this, const MethodInfo* method)
{
	typedef Vector4_t2149  (*Sprite_get_border_m9407_ftn) (Sprite_t555 *);
	static Sprite_get_border_m9407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m9407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
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
extern "C" Vector4_t2149  DataUtility_GetInnerUV_m9419 (Object_t * __this /* static, unused */, Sprite_t555 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t2149  (*DataUtility_GetInnerUV_m9419_ftn) (Sprite_t555 *);
	static DataUtility_GetInnerUV_m9419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m9419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t2149  DataUtility_GetOuterUV_m9418 (Object_t * __this /* static, unused */, Sprite_t555 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t2149  (*DataUtility_GetOuterUV_m9418_ftn) (Sprite_t555 *);
	static DataUtility_GetOuterUV_m9418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m9418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t2149  DataUtility_GetPadding_m9412 (Object_t * __this /* static, unused */, Sprite_t555 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t2149  (*DataUtility_GetPadding_m9412_ftn) (Sprite_t555 *);
	static DataUtility_GetPadding_m9412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m9412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern "C" Vector2_t97  DataUtility_GetMinSize_m9427 (Object_t * __this /* static, unused */, Sprite_t555 * ___sprite, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	{
		Sprite_t555 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m12862(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m12862 (Object_t * __this /* static, unused */, Sprite_t555 * ___sprite, Vector2_t97 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m12862_ftn) (Sprite_t555 *, Vector2_t97 *);
	static DataUtility_Internal_GetMinSize_m12862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m12862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"


// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m5487 (WWW_t899 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url;
		WWW_InitWWW_m12867(__this, L_0, (ByteU5BU5D_t25*)(ByteU5BU5D_t25*)NULL, (StringU5BU5D_t20*)(StringU5BU5D_t20*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m12863 (WWW_t899 * __this, String_t* ___url, WWWForm_t2769 * ___form, const MethodInfo* method)
{
	StringU5BU5D_t20* V_0 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		WWWForm_t2769 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t860 * L_1 = WWWForm_get_headers_m12883(L_0, /*hidden argument*/NULL);
		StringU5BU5D_t20* L_2 = WWW_FlattenedHeadersFrom_m12877(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t2769 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t25* L_5 = WWWForm_get_data_m12884(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t20* L_6 = V_0;
		WWW_InitWWW_m12867(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m7638 (WWW_t899 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, Dictionary_2_t860 * ___headers, const MethodInfo* method)
{
	StringU5BU5D_t20* V_0 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Dictionary_2_t860 * L_0 = ___headers;
		StringU5BU5D_t20* L_1 = WWW_FlattenedHeadersFrom_m12877(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___url;
		ByteU5BU5D_t25* L_3 = ___postData;
		StringU5BU5D_t20* L_4 = V_0;
		WWW_InitWWW_m12867(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m12864 (WWW_t899 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m12866(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m12865 (WWW_t899 * __this, const MethodInfo* method)
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
		WWW_DestroyWWW_m12866(__this, 0, /*hidden argument*/NULL);
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
extern "C" void WWW_DestroyWWW_m12866 (WWW_t899 * __this, bool ___cancel, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m12866_ftn) (WWW_t899 *, bool);
	static WWW_DestroyWWW_m12866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m12866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m12867 (WWW_t899 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, StringU5BU5D_t20* ___iHeaders, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m12867_ftn) (WWW_t899 *, String_t*, ByteU5BU5D_t25*, StringU5BU5D_t20*);
	static WWW_InitWWW_m12867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m12867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern TypeInfo* UnityException_t1137_il2cpp_TypeInfo_var;
extern "C" Dictionary_2_t860 * WWW_get_responseHeaders_m12868 (WWW_t899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t1137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1854);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = WWW_get_isDone_m5488(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t1137 * L_1 = (UnityException_t1137 *)il2cpp_codegen_object_new (UnityException_t1137_il2cpp_TypeInfo_var);
		UnityException__ctor_m13599(L_1, (String_t*) &_stringLiteral3285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m12869(__this, /*hidden argument*/NULL);
		Dictionary_2_t860 * L_3 = WWW_ParseHTTPHeaderString_m12878(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m12869 (WWW_t899 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m12869_ftn) (WWW_t899 *);
	static WWW_get_responseHeadersString_m12869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m12869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern TypeInfo* UnityException_t1137_il2cpp_TypeInfo_var;
extern "C" String_t* WWW_get_text_m7619 (WWW_t899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t1137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1854);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m5488(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t1137 * L_1 = (UnityException_t1137 *)il2cpp_codegen_object_new (UnityException_t1137_il2cpp_TypeInfo_var);
		UnityException__ctor_m13599(L_1, (String_t*) &_stringLiteral3286, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t25* L_2 = WWW_get_bytes_m12872(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Encoding_t602 * L_3 = WWW_GetTextEncoder_m12871(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = V_0;
		ByteU5BU5D_t25* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern "C" Encoding_t602 * WWW_get_DefaultEncoding_m12870 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_0 = Encoding_get_ASCII_m6581(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Encoding_t602 * WWW_GetTextEncoder_m12871 (WWW_t899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t602 * V_5 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t860 * L_0 = WWW_get_responseHeaders_m12868(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, (String_t*) &_stringLiteral3287, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m13712(L_2, (String_t*) &_stringLiteral3288, 5, /*hidden argument*/NULL);
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
		int32_t L_7 = String_IndexOf_m6700(L_5, ((int32_t)61), L_6, /*hidden argument*/NULL);
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
		String_t* L_11 = String_Substring_m5270(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m2630(L_11, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_13 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		CharU5BU5D_t646* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m11525(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m2630(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m3239(L_17, ((int32_t)59), /*hidden argument*/NULL);
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
		String_t* L_22 = String_Substring_m2785(L_20, 0, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_24 = Encoding_GetEncoding_m11577(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
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
		String_t* L_26 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral3289, L_25, (String_t*) &_stringLiteral134, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_27 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t602 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t25* WWW_get_bytes_m12872 (WWW_t899 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t25* (*WWW_get_bytes_m12872_ftn) (WWW_t899 *);
	static WWW_get_bytes_m12872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m12872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m7618 (WWW_t899 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m7618_ftn) (WWW_t899 *);
	static WWW_get_error_m7618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m7618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioClip UnityEngine.WWW::get_audioClip()
extern "C" AudioClip_t261 * WWW_get_audioClip_m5489 (WWW_t899 * __this, const MethodInfo* method)
{
	{
		AudioClip_t261 * L_0 = WWW_GetAudioClip_m12873(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12873 (WWW_t899 * __this, bool ___threeD, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		AudioClip_t261 * L_1 = WWW_GetAudioClip_m12874(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12874 (WWW_t899 * __this, bool ___threeD, bool ___stream, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		bool L_1 = ___stream;
		AudioClip_t261 * L_2 = WWW_GetAudioClip_m12875(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12875 (WWW_t899 * __this, bool ___threeD, bool ___stream, int32_t ___audioType, const MethodInfo* method)
{
	{
		bool L_0 = ___threeD;
		bool L_1 = ___stream;
		int32_t L_2 = ___audioType;
		AudioClip_t261 * L_3 = WWW_GetAudioClipInternal_m12876(__this, L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClipInternal_m12876 (WWW_t899 * __this, bool ___threeD, bool ___stream, bool ___compressed, int32_t ___audioType, const MethodInfo* method)
{
	typedef AudioClip_t261 * (*WWW_GetAudioClipInternal_m12876_ftn) (WWW_t899 *, bool, bool, bool, int32_t);
	static WWW_GetAudioClipInternal_m12876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_GetAudioClipInternal_m12876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)");
	return _il2cpp_icall_func(__this, ___threeD, ___stream, ___compressed, ___audioType);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m5488 (WWW_t899 * __this, const MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m5488_ftn) (WWW_t899 *);
	static WWW_get_isDone_m5488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m5488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.WWW::get_progress()
extern "C" float WWW_get_progress_m7622 (WWW_t899 * __this, const MethodInfo* method)
{
	typedef float (*WWW_get_progress_m7622_ftn) (WWW_t899 *);
	static WWW_get_progress_m7622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_progress_m7622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_progress()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t1115_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m5408_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5409_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m5410_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m5411_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5412_MethodInfo_var;
extern "C" StringU5BU5D_t20* WWW_FlattenedHeadersFrom_m12877 (Object_t * __this /* static, unused */, Dictionary_2_t860 * ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Enumerator_t1115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1739);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Dictionary_2_GetEnumerator_m5408_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484105);
		Enumerator_get_Current_m5409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484106);
		KeyValuePair_2_get_Key_m5410_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484107);
		KeyValuePair_2_get_Value_m5411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484108);
		Enumerator_MoveNext_m5412_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484109);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t20* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t1114  V_2 = {0};
	Enumerator_t1115  V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t860 * L_0 = ___headers;
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
		Dictionary_2_t860 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t860 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t1115  L_4 = Dictionary_2_GetEnumerator_m5408(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m5408_MethodInfo_var);
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
			KeyValuePair_2_t1114  L_5 = Enumerator_get_Current_m5409((&V_3), /*hidden argument*/Enumerator_get_Current_m5409_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t20* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m5410((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m5410_MethodInfo_var);
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
			String_t* L_14 = KeyValuePair_2_get_Value_m5411((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m5411_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_14);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13)) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m5412((&V_3), /*hidden argument*/Enumerator_MoveNext_m5412_MethodInfo_var);
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
		Enumerator_t1115  L_17 = V_3;
		Enumerator_t1115  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t1115_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_19);
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
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t860_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5398_MethodInfo_var;
extern "C" Dictionary_2_t860 * WWW_ParseHTTPHeaderString_m12878 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		Dictionary_2_t860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1736);
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		Dictionary_2__ctor_m5398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t860 * V_0 = {0};
	StringReader_t599 * V_1 = {0};
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
		ArgumentException_t1126 * L_1 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_1, (String_t*) &_stringLiteral3290, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Dictionary_2_t860 * L_2 = (Dictionary_2_t860 *)il2cpp_codegen_object_new (Dictionary_2_t860_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5398(L_2, /*hidden argument*/Dictionary_2__ctor_m5398_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t599 * L_4 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m2670(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t599 * L_5 = V_1;
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
		bool L_11 = String_StartsWith_m3141(L_10, (String_t*) &_stringLiteral3291, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t860 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral3292, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m5439(L_14, (String_t*) &_stringLiteral461, /*hidden argument*/NULL);
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
		String_t* L_19 = String_Substring_m2785(L_17, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m12200(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m5270(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_23;
		Dictionary_2_t860 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t860 * L_27 = V_0;
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
#include "mscorlib_System_Collections_Generic_List_1_gen_94.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_94MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.WWWForm::.ctor()
extern TypeInfo* List_1_t2768_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m13713_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" void WWWForm__ctor_m12879 (WWWForm_t2769 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5723);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		List_1__ctor_m13713_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485006);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		List_1_t2768 * L_0 = (List_1_t2768 *)il2cpp_codegen_object_new (List_1_t2768_il2cpp_TypeInfo_var);
		List_1__ctor_m13713(L_0, /*hidden argument*/List_1__ctor_m13713_MethodInfo_var);
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
		int32_t L_4 = Random_Range_m2998(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
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
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m12880 (WWWForm_t2769 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	Encoding_t602 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_0 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t602 * L_3 = V_0;
		WWWForm_AddField_m12881(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m12881 (WWWForm_t2769 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t602 * ___e, const MethodInfo* method)
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
		List_1_t2768 * L_3 = (__this->___formData_0);
		Encoding_t602 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t25* L_6 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t25* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		List_1_t1 * L_7 = (__this->___types_3);
		Encoding_t602 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral3301, L_9, (String_t*) &_stringLiteral665, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m12882 (WWWForm_t2769 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method)
{
	{
		String_t* L_0 = ___fieldName;
		String_t* L_1 = Int32_ToString_m2448((&___i), /*hidden argument*/NULL);
		WWWForm_AddField_m12880(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern TypeInfo* Dictionary_2_t860_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5398_MethodInfo_var;
extern "C" Dictionary_2_t860 * WWWForm_get_headers_m12883 (WWWForm_t2769 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1736);
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Dictionary_2__ctor_m5398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t860 * V_0 = {0};
	{
		Dictionary_2_t860 * L_0 = (Dictionary_2_t860 *)il2cpp_codegen_object_new (Dictionary_2_t860_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5398(L_0, /*hidden argument*/Dictionary_2__ctor_m5398_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t860 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_3 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t25* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral3293, L_6, (String_t*) &_stringLiteral665, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1743, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t860 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1743, (String_t*) &_stringLiteral3294);
	}

IL_0059:
	{
		Dictionary_2_t860 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern TypeInfo* MemoryStream_t558_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWForm_get_data_m12884 (WWWForm_t2769 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1212);
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	ByteU5BU5D_t25* V_1 = {0};
	ByteU5BU5D_t25* V_2 = {0};
	ByteU5BU5D_t25* V_3 = {0};
	ByteU5BU5D_t25* V_4 = {0};
	ByteU5BU5D_t25* V_5 = {0};
	MemoryStream_t558 * V_6 = {0};
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
	MemoryStream_t558 * V_17 = {0};
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
		Encoding_t602 * L_1 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, (String_t*) &_stringLiteral2733);
		V_0 = L_2;
		Encoding_t602 * L_3 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t25* L_4 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, (String_t*) &_stringLiteral3135);
		V_1 = L_4;
		Encoding_t602 * L_5 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t25* L_6 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, (String_t*) &_stringLiteral3295);
		V_2 = L_6;
		Encoding_t602 * L_7 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t25* L_8 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, (String_t*) &_stringLiteral3296);
		V_3 = L_8;
		Encoding_t602 * L_9 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t25* L_10 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, (String_t*) &_stringLiteral665);
		V_4 = L_10;
		Encoding_t602 * L_11 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t25* L_12 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, (String_t*) &_stringLiteral3297);
		V_5 = L_12;
		MemoryStream_t558 * L_13 = (MemoryStream_t558 *)il2cpp_codegen_object_new (MemoryStream_t558_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m6690(L_13, ((int32_t)1024), /*hidden argument*/NULL);
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
			MemoryStream_t558 * L_14 = V_6;
			ByteU5BU5D_t25* L_15 = V_1;
			ByteU5BU5D_t25* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t558 * L_17 = V_6;
			ByteU5BU5D_t25* L_18 = V_0;
			ByteU5BU5D_t25* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t558 * L_20 = V_6;
			ByteU5BU5D_t25* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t25* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t558 * L_23 = V_6;
			ByteU5BU5D_t25* L_24 = V_1;
			ByteU5BU5D_t25* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t558 * L_26 = V_6;
			ByteU5BU5D_t25* L_27 = V_2;
			ByteU5BU5D_t25* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_29 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t25* L_33 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t558 * L_34 = V_6;
			ByteU5BU5D_t25* L_35 = V_8;
			ByteU5BU5D_t25* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t558 * L_37 = V_6;
			ByteU5BU5D_t25* L_38 = V_1;
			ByteU5BU5D_t25* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t558 * L_40 = V_6;
			ByteU5BU5D_t25* L_41 = V_3;
			ByteU5BU5D_t25* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t602 * L_43 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t1 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t602 * L_49 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m12891(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m5439(L_51, (String_t*) &_stringLiteral3298, /*hidden argument*/NULL);
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
			ArrayElementTypeCheck (L_53, (String_t*) &_stringLiteral3298);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0)) = (String_t*)(String_t*) &_stringLiteral3298;
			StringU5BU5D_t20* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1)) = (String_t*)L_55;
			StringU5BU5D_t20* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral3299);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2)) = (String_t*)(String_t*) &_stringLiteral3299;
			StringU5BU5D_t20* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_59 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m12888(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3)) = (String_t*)L_60;
			StringU5BU5D_t20* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral3300);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4)) = (String_t*)(String_t*) &_stringLiteral3300;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m3021(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_63 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t25* L_65 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t558 * L_66 = V_6;
			ByteU5BU5D_t25* L_67 = V_11;
			ByteU5BU5D_t25* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t558 * L_69 = V_6;
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
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_79 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m12891(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m5439(L_81, (String_t*) &_stringLiteral3298, /*hidden argument*/NULL);
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
			ArrayElementTypeCheck (L_83, (String_t*) &_stringLiteral3298);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0)) = (String_t*)(String_t*) &_stringLiteral3298;
			StringU5BU5D_t20* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1)) = (String_t*)L_85;
			StringU5BU5D_t20* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral3299);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2)) = (String_t*)(String_t*) &_stringLiteral3299;
			StringU5BU5D_t20* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_89 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m12888(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3)) = (String_t*)L_90;
			StringU5BU5D_t20* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral3300);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4)) = (String_t*)(String_t*) &_stringLiteral3300;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3021(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_93 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t25* L_95 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t558 * L_96 = V_6;
			ByteU5BU5D_t25* L_97 = V_5;
			ByteU5BU5D_t25* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t558 * L_99 = V_6;
			ByteU5BU5D_t25* L_100 = V_13;
			ByteU5BU5D_t25* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t558 * L_102 = V_6;
			ByteU5BU5D_t25* L_103 = V_4;
			ByteU5BU5D_t25* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t558 * L_105 = V_6;
			ByteU5BU5D_t25* L_106 = V_1;
			ByteU5BU5D_t25* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t558 * L_108 = V_6;
			ByteU5BU5D_t25* L_109 = V_1;
			ByteU5BU5D_t25* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t2768 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t25* L_113 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t558 * L_114 = V_6;
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
			List_1_t2768 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t558 * L_121 = V_6;
			ByteU5BU5D_t25* L_122 = V_1;
			ByteU5BU5D_t25* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t558 * L_124 = V_6;
			ByteU5BU5D_t25* L_125 = V_0;
			ByteU5BU5D_t25* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t558 * L_127 = V_6;
			ByteU5BU5D_t25* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t25* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t558 * L_130 = V_6;
			ByteU5BU5D_t25* L_131 = V_0;
			ByteU5BU5D_t25* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t558 * L_133 = V_6;
			ByteU5BU5D_t25* L_134 = V_1;
			ByteU5BU5D_t25* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t558 * L_136 = V_6;
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
			MemoryStream_t558 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t558 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_139);
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
		Encoding_t602 * L_140 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t25* L_141 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, (String_t*) &_stringLiteral24);
		V_15 = L_141;
		Encoding_t602 * L_142 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t25* L_143 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, (String_t*) &_stringLiteral1486);
		V_16 = L_143;
		MemoryStream_t558 * L_144 = (MemoryStream_t558 *)il2cpp_codegen_object_new (MemoryStream_t558_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m6690(L_144, ((int32_t)1024), /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
			Encoding_t602 * L_145 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t25* L_149 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_150 = WWWTranscoder_URLEncode_m12887(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t2768 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t25* L_153 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t25* L_154 = V_20;
			ByteU5BU5D_t25* L_155 = WWWTranscoder_URLEncode_m12887(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t558 * L_157 = V_17;
			ByteU5BU5D_t25* L_158 = V_15;
			ByteU5BU5D_t25* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t558 * L_160 = V_17;
			ByteU5BU5D_t25* L_161 = V_19;
			ByteU5BU5D_t25* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t558 * L_163 = V_17;
			ByteU5BU5D_t25* L_164 = V_16;
			ByteU5BU5D_t25* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t558 * L_166 = V_17;
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
			List_1_t2768 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t558 * L_173 = V_17;
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
			MemoryStream_t558 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t558 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_176);
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
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern "C" void WWWTranscoder__cctor_m12885 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t602 * L_0 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t25* L_1 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, (String_t*) &_stringLiteral3302);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t602 * L_2 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t25* L_3 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, (String_t*) &_stringLiteral3303);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t602 * L_4 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, (String_t*) &_stringLiteral3304);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t602 * L_6 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t25* L_7 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, (String_t*) &_stringLiteral3305);
		((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_Byte2Hex_m12886 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t25* ___hexChars, const MethodInfo* method)
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
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_URLEncode_m12887 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___toEncode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3;
		ByteU5BU5D_t25* L_3 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t25* L_4 = WWWTranscoder_Encode_m12889(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern "C" String_t* WWWTranscoder_QPEncode_m12888 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t602 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	{
		Encoding_t602 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6;
		ByteU5BU5D_t25* L_5 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t25* L_6 = WWWTranscoder_Encode_m12889(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t602 * L_7 = WWW_get_DefaultEncoding_m12870(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_8 = V_0;
		ByteU5BU5D_t25* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern TypeInfo* MemoryStream_t558_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* WWWTranscoder_Encode_m12889 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t25* ___forbidden, bool ___uppercase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1212);
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t558 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t25* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t558 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t558 * G_B8_1 = {0};
	ByteU5BU5D_t25* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t558 * G_B10_2 = {0};
	{
		ByteU5BU5D_t25* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t558 * L_1 = (MemoryStream_t558 *)il2cpp_codegen_object_new (MemoryStream_t558_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m6690(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/NULL);
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
			MemoryStream_t558 * L_5 = V_0;
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
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			bool L_17 = WWWTranscoder_ByteArrayContains_m12890(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t558 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			MemoryStream_t558 * L_20 = V_0;
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
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_25 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_26 = ((WWWTranscoder_t2770_StaticFields*)WWWTranscoder_t2770_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
			ByteU5BU5D_t25* L_27 = WWWTranscoder_Byte2Hex_m12886(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t558 * L_28 = V_0;
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
			MemoryStream_t558 * L_35 = V_0;
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
			MemoryStream_t558 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t558 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_38);
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
extern "C" bool WWWTranscoder_ByteArrayContains_m12890 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___array, uint8_t ___b, const MethodInfo* method)
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
extern TypeInfo* WWWTranscoder_t2770_il2cpp_TypeInfo_var;
extern "C" bool WWWTranscoder_SevenBitClean_m12891 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t602 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t602 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t25* L_2 = (ByteU5BU5D_t25*)VirtFuncInvoker1< ByteU5BU5D_t25*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t2770_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m12892(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m12892 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___input, const MethodInfo* method)
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
void CacheIndex_t2771_marshal(const CacheIndex_t2771& unmarshaled, CacheIndex_t2771_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t2771_marshal_back(const CacheIndex_t2771_marshaled& marshaled, CacheIndex_t2771& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t2771_marshal_cleanup(CacheIndex_t2771_marshaled& marshaled)
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
extern "C" String_t* UnityString_Format_m12893 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
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
extern "C" void AsyncOperation__ctor_m12894 (AsyncOperation_t946 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m13027(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m12895 (AsyncOperation_t946 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m12895_ftn) (AsyncOperation_t946 *);
	static AsyncOperation_InternalDestroy_m12895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m12895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m12896 (AsyncOperation_t946 * __this, const MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m12895(__this, /*hidden argument*/NULL);
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
extern "C" bool AsyncOperation_get_isDone_m5538 (AsyncOperation_t946 * __this, const MethodInfo* method)
{
	typedef bool (*AsyncOperation_get_isDone_m5538_ftn) (AsyncOperation_t946 *);
	static AsyncOperation_get_isDone_m5538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_get_isDone_m5538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t946_marshal(const AsyncOperation_t946& unmarshaled, AsyncOperation_t946_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t946_marshal_back(const AsyncOperation_t946_marshaled& marshaled, AsyncOperation_t946& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t946_marshal_cleanup(AsyncOperation_t946_marshaled& marshaled)
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
extern "C" void LogCallback__ctor_m3294 (LogCallback_t703 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m12897 (LogCallback_t703 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m12897((LogCallback_t703 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
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
extern "C" void pinvoke_delegate_wrapper_LogCallback_t703(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
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
extern TypeInfo* LogType_t739_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m12898 (LogCallback_t703 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t739_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m12899 (LogCallback_t703 * __this, Object_t * ___result, const MethodInfo* method)
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
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t703_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceived_m12900 (Object_t * __this /* static, unused */, LogCallback_t703 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		LogCallback_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t703 * L_0 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t703 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Combine_m2440(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t703 *)Castclass(L_2, LogCallback_t703_il2cpp_TypeInfo_var));
		LogCallback_t703 * L_3 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		Application_SetLogCallbackDefined_m12906(NULL /*static, unused*/, 1, ((((int32_t)((((Object_t*)(LogCallback_t703 *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t703_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceived_m12901 (Object_t * __this /* static, unused */, LogCallback_t703 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		LogCallback_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t703 * L_0 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t703 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Remove_m2441(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t703 *)Castclass(L_2, LogCallback_t703_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t703_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceivedThreaded_m12902 (Object_t * __this /* static, unused */, LogCallback_t703 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		LogCallback_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t703 * L_0 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t703 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Combine_m2440(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t703 *)Castclass(L_2, LogCallback_t703_il2cpp_TypeInfo_var));
		Application_SetLogCallbackDefined_m12906(NULL /*static, unused*/, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t703_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceivedThreaded_m12903 (Object_t * __this /* static, unused */, LogCallback_t703 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		LogCallback_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t703 * L_0 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t703 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Remove_m2441(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t703 *)Castclass(L_2, LogCallback_t703_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Application::Quit()
extern "C" void Application_Quit_m3276 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Application_Quit_m3276_ftn) ();
	static Application_Quit_m3276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m3276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C" int32_t Application_get_loadedLevel_m3008 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m3008_ftn) ();
	static Application_get_loadedLevel_m3008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m3008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m2343 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_loadedLevelName_m2343_ftn) ();
	static Application_get_loadedLevelName_m2343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevelName_m2343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C" void Application_LoadLevel_m3011 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m12904(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m2355 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevelAsync_m12904(NULL /*static, unused*/, L_0, (-1), 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String)
extern "C" AsyncOperation_t946 * Application_LoadLevelAsync_m5537 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___levelName;
		AsyncOperation_t946 * L_1 = Application_LoadLevelAsync_m12904(NULL /*static, unused*/, L_0, (-1), 0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t946 * Application_LoadLevelAsync_m12904 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method)
{
	typedef AsyncOperation_t946 * (*Application_LoadLevelAsync_m12904_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m12904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m12904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isLoadingLevel()
extern "C" bool Application_get_isLoadingLevel_m3225 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isLoadingLevel_m3225_ftn) ();
	static Application_get_isLoadingLevel_m3225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isLoadingLevel_m3225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isLoadingLevel()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m2590 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2590_ftn) ();
	static Application_get_isPlaying_m2590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m9504 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m9504_ftn) ();
	static Application_get_isEditor_m9504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m9504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C" bool Application_get_isWebPlayer_m7646 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isWebPlayer_m7646_ftn) ();
	static Application_get_isWebPlayer_m7646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isWebPlayer_m7646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isWebPlayer()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m7637 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m7637_ftn) ();
	static Application_get_platform_m7637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m7637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C" void Application_set_runInBackground_m2966 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*Application_set_runInBackground_m2966_ftn) (bool);
	static Application_set_runInBackground_m2966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_runInBackground_m2966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_runInBackground(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Application::HasProLicense()
extern "C" bool Application_HasProLicense_m5536 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_HasProLicense_m5536_ftn) ();
	static Application_HasProLicense_m5536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_HasProLicense_m5536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::HasProLicense()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m7645 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_persistentDataPath_m7645_ftn) ();
	static Application_get_persistentDataPath_m7645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_persistentDataPath_m7645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m2995 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*Application_OpenURL_m2995_ftn) (String_t*);
	static Application_OpenURL_m2995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_OpenURL_m2995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::OpenURL(System.String)");
	_il2cpp_icall_func(___url);
}
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
extern "C" int32_t Application_get_systemLanguage_m5269 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_systemLanguage_m5269_ftn) ();
	static Application_get_systemLanguage_m5269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_systemLanguage_m5269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_systemLanguage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m12905 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t703 * V_0 = {0};
	LogCallback_t703 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t703 * L_1 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t703 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t703 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(11 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t703 * L_7 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t703 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t703 * L_9 = V_1;
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
extern "C" void Application_SetLogCallbackDefined_m12906 (Object_t * __this /* static, unused */, bool ___defined, bool ___threaded, const MethodInfo* method)
{
	typedef void (*Application_SetLogCallbackDefined_m12906_ftn) (bool, bool);
	static Application_SetLogCallbackDefined_m12906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_SetLogCallbackDefined_m12906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(___defined, ___threaded);
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" void Application_RegisterLogCallback_m3295 (Object_t * __this /* static, unused */, LogCallback_t703 * ___handler, const MethodInfo* method)
{
	{
		LogCallback_t703 * L_0 = ___handler;
		Application_RegisterLogCallback_m12907(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern TypeInfo* Application_t1650_il2cpp_TypeInfo_var;
extern "C" void Application_RegisterLogCallback_m12907 (Object_t * __this /* static, unused */, LogCallback_t703 * ___handler, bool ___threaded, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t703 * L_0 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		LogCallback_t703 * L_1 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceived_m12901(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LogCallback_t703 * L_2 = ((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceivedThreaded_m12903(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		LogCallback_t703 * L_3 = ___handler;
		il2cpp_codegen_memory_barrier();
		((Application_t1650_StaticFields*)Application_t1650_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2 = L_3;
		LogCallback_t703 * L_4 = ___handler;
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
		LogCallback_t703 * L_6 = ___handler;
		Application_add_logMessageReceivedThreaded_m12902(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0043:
	{
		LogCallback_t703 * L_7 = ___handler;
		Application_add_logMessageReceived_m12900(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
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
extern "C" void Behaviour__ctor_m12908 (Behaviour_t1130 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m12991(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m2465 (Behaviour_t1130 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m2465_ftn) (Behaviour_t1130 *);
	static Behaviour_get_enabled_m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" void Behaviour_set_enabled_m2693 (Behaviour_t1130 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m2693_ftn) (Behaviour_t1130 *, bool);
	static Behaviour_set_enabled_m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m9289 (Behaviour_t1130 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m9289_ftn) (Behaviour_t1130 *);
	static Behaviour_get_isActiveAndEnabled_m9289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m9289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
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
extern "C" void CameraCallback__ctor_m12909 (CameraCallback_t2773 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m12910 (CameraCallback_t2773 * __this, Camera_t356 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m12910((CameraCallback_t2773 *)__this->___prev_9,___cam, method);
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
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t2773(Il2CppObject* delegate, Camera_t356 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t356 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m12911 (CameraCallback_t2773 * __this, Camera_t356 * ___cam, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m12912 (CameraCallback_t2773 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" float Camera_get_nearClipPlane_m9334 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m9334_ftn) (Camera_t356 *);
	static Camera_get_nearClipPlane_m9334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m9334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m9333 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m9333_ftn) (Camera_t356 *);
	static Camera_get_farClipPlane_m9333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m9333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m5436 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m5436_ftn) (Camera_t356 *);
	static Camera_get_orthographicSize_m5436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m5436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m5437 (Camera_t356 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m5437_ftn) (Camera_t356 *, float);
	static Camera_set_orthographicSize_m5437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m5437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m9258 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m9258_ftn) (Camera_t356 *);
	static Camera_get_depth_m9258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m9258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m9338 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m9338_ftn) (Camera_t356 *);
	static Camera_get_cullingMask_m9338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m9338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m12913 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m12913_ftn) (Camera_t356 *);
	static Camera_get_eventMask_m12913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m12913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m12914 (Camera_t356 * __this, Rect_t201 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m12914_ftn) (Camera_t356 *, Rect_t201 *);
	static Camera_INTERNAL_get_pixelRect_m12914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m12914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t201  Camera_get_pixelRect_m12915 (Camera_t356 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m12914(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t201  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t2727 * Camera_get_targetTexture_m12916 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t2727 * (*Camera_get_targetTexture_m12916_ftn) (Camera_t356 *);
	static Camera_get_targetTexture_m12916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m12916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m12917 (Camera_t356 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m12917_ftn) (Camera_t356 *, Matrix4x4_t68 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m12917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m12917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t68  Camera_get_worldToCameraMatrix_m12918 (Camera_t356 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m12917(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m12919 (Camera_t356 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m12919_ftn) (Camera_t356 *, Matrix4x4_t68 *);
	static Camera_INTERNAL_get_projectionMatrix_m12919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m12919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t68  Camera_get_projectionMatrix_m12920 (Camera_t356 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m12919(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m12921 (Camera_t356 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m12921_ftn) (Camera_t356 *);
	static Camera_get_clearFlags_m12921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m12921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_WorldToScreenPoint_m2929 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m12922(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_WorldToScreenPoint_m12922 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m12922_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m12922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m12922_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_ScreenToWorldPoint_m2917 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Camera_ScreenToViewportPoint_m9390 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t53  Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
extern "C" Ray_t319  Camera_ViewportPointToRay_m3037 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Ray_t319  L_0 = Camera_INTERNAL_CALL_ViewportPointToRay_m12925(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t319  Camera_INTERNAL_CALL_ViewportPointToRay_m12925 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Ray_t319  (*Camera_INTERNAL_CALL_ViewportPointToRay_m12925_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ViewportPointToRay_m12925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ViewportPointToRay_m12925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t319  Camera_ScreenPointToRay_m2878 (Camera_t356 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Ray_t319  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m12926(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t319  Camera_INTERNAL_CALL_ScreenPointToRay_m12926 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Ray_t319  (*Camera_INTERNAL_CALL_ScreenPointToRay_m12926_ftn) (Camera_t356 *, Vector3_t53 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m12926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m12926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t356 * Camera_get_main_m2461 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t356 * (*Camera_get_main_m2461_ftn) ();
	static Camera_get_main_m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m12927 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m12927_ftn) ();
	static Camera_get_allCamerasCount_m12927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m12927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m12928 (Object_t * __this /* static, unused */, CameraU5BU5D_t2889* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m12928_ftn) (CameraU5BU5D_t2889*);
	static Camera_GetAllCameras_m12928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m12928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t356_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m12929 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2773 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2773 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
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
extern "C" void Camera_FireOnPreRender_m12930 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2773 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2773 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
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
extern "C" void Camera_FireOnPostRender_m12931 (Object_t * __this /* static, unused */, Camera_t356 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2773 * L_0 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2773 * L_1 = ((Camera_t356_StaticFields*)Camera_t356_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
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
extern "C" GameObject_t49 * Camera_RaycastTry_m12932 (Camera_t356 * __this, Ray_t319  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t49 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m12933(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_INTERNAL_CALL_RaycastTry_m12933 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Ray_t319 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Camera_INTERNAL_CALL_RaycastTry_m12933_ftn) (Camera_t356 *, Ray_t319 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m12933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m12933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_RaycastTry2D_m12934 (Camera_t356 * __this, Ray_t319  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t49 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m12935(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t49 * Camera_INTERNAL_CALL_RaycastTry2D_m12935 (Object_t * __this /* static, unused */, Camera_t356 * ___self, Ray_t319 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Camera_INTERNAL_CALL_RaycastTry2D_m12935_ftn) (Camera_t356 *, Ray_t319 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m12935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m12935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
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
extern "C" void Debug_DrawLine_m3253 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, Color_t121  ___color, float ___duration, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		float L_0 = ___duration;
		bool L_1 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m12936(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Debug_DrawLine_m3030 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, const MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	Color_t121  V_2 = {0};
	{
		V_0 = 1;
		V_1 = (0.0f);
		Color_t121  L_0 = Color_get_white_m2556(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		float L_1 = V_1;
		bool L_2 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m12936(NULL /*static, unused*/, (&___start), (&___end), (&V_2), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m12936 (Object_t * __this /* static, unused */, Vector3_t53 * ___start, Vector3_t53 * ___end, Color_t121 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m12936_ftn) (Vector3_t53 *, Vector3_t53 *, Color_t121 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m12936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m12936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m12937 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t563 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m12937_ftn) (int32_t, String_t*, Object_t563 *);
	static Debug_Internal_Log_m12937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m12937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m12938 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, Object_t563 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m12938_ftn) (Exception_t468 *, Object_t563 *);
	static Debug_Internal_LogException_m12938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m12938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
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
		G_B3_0 = (String_t*) &_stringLiteral3306;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m12937(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
extern "C" void Debug_Log_m2521 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t563 * ___context, const MethodInfo* method)
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
		G_B3_0 = (String_t*) &_stringLiteral3306;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Object_t563 * L_3 = ___context;
		Debug_Internal_Log_m12937(NULL /*static, unused*/, G_B3_1, G_B3_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m2728 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
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
		G_B3_0 = (String_t*) &_stringLiteral3306;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m12937(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m5522 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t563 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t563 * L_2 = ___context;
		Debug_Internal_Log_m12937(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m7627 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, const MethodInfo* method)
{
	{
		Exception_t468 * L_0 = ___exception;
		Debug_Internal_LogException_m12938(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m9351 (Object_t * __this /* static, unused */, Exception_t468 * ___exception, Object_t563 * ___context, const MethodInfo* method)
{
	{
		Exception_t468 * L_0 = ___exception;
		Object_t563 * L_1 = ___context;
		Debug_Internal_LogException_m12938(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2681 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m12937(NULL /*static, unused*/, 1, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2769 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t563 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t563 * L_2 = ___context;
		Debug_Internal_Log_m12937(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
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
extern "C" void DisplaysUpdatedDelegate__ctor_m12939 (DisplaysUpdatedDelegate_t2775 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m12940 (DisplaysUpdatedDelegate_t2775 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m12940((DisplaysUpdatedDelegate_t2775 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t2775(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m12941 (DisplaysUpdatedDelegate_t2775 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m12942 (DisplaysUpdatedDelegate_t2775 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void Display__ctor_m12943 (Display_t2777 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m13714(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m12944 (Display_t2777 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m12945 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5725);
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t2776* L_0 = ((DisplayU5BU5D_t2776*)SZArrayNew(DisplayU5BU5D_t2776_il2cpp_TypeInfo_var, 1));
		Display_t2777 * L_1 = (Display_t2777 *)il2cpp_codegen_object_new (Display_t2777_il2cpp_TypeInfo_var);
		Display__ctor_m12943(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t2777 **)(Display_t2777 **)SZArrayLdElema(L_0, 0)) = (Display_t2777 *)L_1;
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t2776* L_2 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t2777 **)(Display_t2777 **)SZArrayLdElema(L_2, L_3));
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t2775 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m12946 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t2775 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5727);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2775 * L_0 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t2775 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Combine_m2440(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t2775 *)Castclass(L_2, DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m12947 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t2775 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5727);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2775 * L_0 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t2775 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Remove_m2441(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t2775 *)Castclass(L_2, DisplaysUpdatedDelegate_t2775_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m12948 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m12964(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m12949 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m12964(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m12950 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m12963(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m12951 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m12963(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t2873  Display_get_colorBuffer_m12952 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t2873  V_0 = {0};
	RenderBuffer_t2873  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m12965(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t2873  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t2873  Display_get_depthBuffer_m12953 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t2873  V_0 = {0};
	RenderBuffer_t2873  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m12965(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t2873  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m12954 (Display_t2777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m12967(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m12955 (Display_t2777 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m12967(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m12956 (Display_t2777 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m12968(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m12957 (Display_t2777 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m12966(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m12958 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m12969(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" Vector3_t53  Display_RelativeMouseAt_m12959 (Object_t * __this /* static, unused */, Vector3_t53  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
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
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m12970(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
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
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" Display_t2777 * Display_get_main_m12960 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		Display_t2777 * L_0 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m12961 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t2926* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5725);
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t2926* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t2776*)SZArrayNew(DisplayU5BU5D_t2776_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t2776* L_1 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t2926* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t2777 * L_6 = (Display_t2777 *)il2cpp_codegen_object_new (Display_t2777_il2cpp_TypeInfo_var);
		Display__ctor_m12944(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t2777 **)(Display_t2777 **)SZArrayLdElema(L_1, L_2)) = (Display_t2777 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t2926* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t2776* L_10 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t2777 **)(Display_t2777 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t2777_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m12962 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2775 * L_0 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2775 * L_1 = ((Display_t2777_StaticFields*)Display_t2777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m12963 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m12963_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m12963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m12963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m12964 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m12964_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m12964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m12964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m12965 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t2873 * ___color, RenderBuffer_t2873 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m12965_ftn) (IntPtr_t, RenderBuffer_t2873 *, RenderBuffer_t2873 *);
	static Display_GetRenderingBuffersImpl_m12965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m12965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m12966 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m12966_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m12966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m12966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m12967 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m12967_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m12967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m12967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m12968 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m12968_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m12968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m12968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m12969 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m12969_ftn) ();
	static Display_MultiDisplayLicenseImpl_m12969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m12969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m12970 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m12970_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m12970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m12970_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
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
extern "C" void MonoBehaviour__ctor_m2326 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m12908(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C" void MonoBehaviour_Internal_CancelInvokeAll_m12971 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Internal_CancelInvokeAll_m12971_ftn) (MonoBehaviour_t47 *);
	static MonoBehaviour_Internal_CancelInvokeAll_m12971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Internal_CancelInvokeAll_m12971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m2699 (MonoBehaviour_t47 * __this, String_t* ___methodName, float ___time, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m2699_ftn) (MonoBehaviour_t47 *, String_t*, float);
	static MonoBehaviour_Invoke_m2699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m2699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" void MonoBehaviour_InvokeRepeating_m3287 (MonoBehaviour_t47 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_InvokeRepeating_m3287_ftn) (MonoBehaviour_t47 *, String_t*, float, float);
	static MonoBehaviour_InvokeRepeating_m3287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_InvokeRepeating_m3287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time, ___repeatRate);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C" void MonoBehaviour_CancelInvoke_m3288 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_Internal_CancelInvokeAll_m12971(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m2698 (MonoBehaviour_t47 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_CancelInvoke_m2698_ftn) (MonoBehaviour_t47 *, String_t*);
	static MonoBehaviour_CancelInvoke_m2698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_CancelInvoke_m2698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::CancelInvoke(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t2059 * MonoBehaviour_StartCoroutine_m2460 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t2059 * L_1 = MonoBehaviour_StartCoroutine_Auto_m12972(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t2059 * MonoBehaviour_StartCoroutine_Auto_m12972 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t2059 * (*MonoBehaviour_StartCoroutine_Auto_m12972_ftn) (MonoBehaviour_t47 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m12972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m12972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m12973 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m9508 (MonoBehaviour_t47 * __this, Coroutine_t2059 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t2059 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m12975(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974 (MonoBehaviour_t47 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974_ftn) (MonoBehaviour_t47 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m12975 (MonoBehaviour_t47 * __this, Coroutine_t2059 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m12975_ftn) (MonoBehaviour_t47 *, Coroutine_t2059 *);
	static MonoBehaviour_StopCoroutine_Auto_m12975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m12975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" void MonoBehaviour_StopAllCoroutines_m2766 (MonoBehaviour_t47 * __this, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m2766_ftn) (MonoBehaviour_t47 *);
	static MonoBehaviour_StopAllCoroutines_m2766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m2766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
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
extern "C" int32_t Touch_get_fingerId_m9301 (Touch_t635 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t97  Touch_get_position_m2892 (Touch_t635 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m3261 (Touch_t635 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t635_marshal(const Touch_t635& unmarshaled, Touch_t635_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t635_marshal_back(const Touch_t635_marshaled& marshaled, Touch_t635& unmarshaled)
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
void Touch_t635_marshal_cleanup(Touch_t635_marshaled& marshaled)
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
extern "C" void Input__cctor_m12976 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m12977 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m12977_ftn) (int32_t);
	static Input_GetKeyInt_m12977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m12977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C" bool Input_GetKeyUpInt_m12978 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyUpInt_m12978_ftn) (int32_t);
	static Input_GetKeyUpInt_m12978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyUpInt_m12978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m12979 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m12979_ftn) (int32_t);
	static Input_GetKeyDownInt_m12979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m12979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" float Input_GetAxis_m2379 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxis_m2379_ftn) (String_t*);
	static Input_GetAxis_m2379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m2379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m2951 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2951_ftn) (String_t*);
	static Input_GetAxisRaw_m2951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C" bool Input_GetButton_m3033 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButton_m3033_ftn) (String_t*);
	static Input_GetButton_m3033_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButton_m3033_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButton(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m2846 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2846_ftn) (String_t*);
	static Input_GetButtonDown_m2846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C" bool Input_GetButtonUp_m2889 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonUp_m2889_ftn) (String_t*);
	static Input_GetButtonUp_m2889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonUp_m2889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonUp(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern TypeInfo* Input_t564_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m2948 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m12977(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern TypeInfo* Input_t564_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyDown_m2638 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownInt_m12979(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern TypeInfo* Input_t564_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyUp_m2333 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyUpInt_m12978(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m2378 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m2378_ftn) (int32_t);
	static Input_GetMouseButton_m2378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m2378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m2874 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2874_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m3262 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m3262_ftn) (int32_t);
	static Input_GetMouseButtonUp_m3262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m3262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" Vector3_t53  Input_get_mousePosition_m2877 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Input_get_mousePosition_m2877_ftn) ();
	static Input_get_mousePosition_m2877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m2877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C" Vector2_t97  Input_get_mouseScrollDelta_m9302 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector2_t97  (*Input_get_mouseScrollDelta_m9302_ftn) ();
	static Input_get_mouseScrollDelta_m9302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m9302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m9325 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m9325_ftn) ();
	static Input_get_mousePresent_m9325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m9325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C" Vector3_t53  Input_get_acceleration_m3296 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Input_get_acceleration_m3296_ftn) ();
	static Input_get_acceleration_m3296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_acceleration_m3296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_acceleration()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern TypeInfo* Input_t564_il2cpp_TypeInfo_var;
extern TypeInfo* TouchU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t636* Input_get_touches_m2891 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		TouchU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t636* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m2890(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t636*)SZArrayNew(TouchU5BU5D_t636_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t636* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		Touch_t635  L_5 = Input_GetTouch_m3260(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		*((Touch_t635 *)(Touch_t635 *)SZArrayLdElema(L_2, L_3)) = L_5;
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
		TouchU5BU5D_t636* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t635  Input_GetTouch_m3260 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t635  (*Input_GetTouch_m3260_ftn) (int32_t);
	static Input_GetTouch_m3260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m3260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m2890 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2890_ftn) ();
	static Input_get_touchCount_m2890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m9330 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m9503 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m9503_ftn) (int32_t);
	static Input_set_imeCompositionMode_m9503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m9503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m9454 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m9454_ftn) ();
	static Input_get_compositionString_m9454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m9454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m12980 (Object_t * __this /* static, unused */, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m12980_ftn) (Vector2_t97 *);
	static Input_INTERNAL_set_compositionCursorPos_m12980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m12980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern TypeInfo* Input_t564_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m9493 (Object_t * __this /* static, unused */, Vector2_t97  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t564_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m12980(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
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
extern "C" void Object__ctor_m12981 (Object_t563 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t563 * Object_Internal_CloneSingle_m12982 (Object_t * __this /* static, unused */, Object_t563 * ___data, const MethodInfo* method)
{
	typedef Object_t563 * (*Object_Internal_CloneSingle_m12982_ftn) (Object_t563 *);
	static Object_Internal_CloneSingle_m12982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m12982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t563 * Object_Internal_InstantiateSingle_m12983 (Object_t * __this /* static, unused */, Object_t563 * ___data, Vector3_t53  ___pos, Quaternion_t69  ___rot, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___data;
		Object_t563 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t563 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984 (Object_t * __this /* static, unused */, Object_t563 * ___data, Vector3_t53 * ___pos, Quaternion_t69 * ___rot, const MethodInfo* method)
{
	typedef Object_t563 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984_ftn) (Object_t563 *, Vector3_t53 *, Quaternion_t69 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m5435 (Object_t * __this /* static, unused */, Object_t563 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m5435_ftn) (Object_t563 *, float);
	static Object_Destroy_m5435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m5435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m2667 (Object_t * __this /* static, unused */, Object_t563 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t563 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m5435(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m12985 (Object_t * __this /* static, unused */, Object_t563 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m12985_ftn) (Object_t563 *, bool);
	static Object_DestroyImmediate_m12985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m12985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2431 (Object_t * __this /* static, unused */, Object_t563 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t563 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m12985(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t677* Object_FindObjectsOfType_m3151 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t677* (*Object_FindObjectsOfType_m3151_ftn) (Type_t *);
	static Object_FindObjectsOfType_m3151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m3151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m2397 (Object_t563 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m2397_ftn) (Object_t563 *);
	static Object_get_name_m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m2449 (Object_t563 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m2449_ftn) (Object_t563 *, String_t*);
	static Object_set_name_m2449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m2965 (Object_t * __this /* static, unused */, Object_t563 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m2965_ftn) (Object_t563 *);
	static Object_DontDestroyOnLoad_m2965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m2965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m3193 (Object_t563 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m3193_ftn) (Object_t563 *, int32_t);
	static Object_set_hideFlags_m3193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m3193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m12986 (Object_t * __this /* static, unused */, Object_t563 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_DestroyObject_m12986_ftn) (Object_t563 *, float);
	static Object_DestroyObject_m12986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyObject_m12986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m2398 (Object_t * __this /* static, unused */, Object_t563 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t563 * L_0 = ___obj;
		float L_1 = V_0;
		Object_DestroyObject_m12986(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m3347 (Object_t563 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m3347_ftn) (Object_t563 *);
	static Object_ToString_m3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t563_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m3345 (Object_t563 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1905);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m12987(NULL /*static, unused*/, __this, ((Object_t563 *)IsInst(L_0, Object_t563_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m3346 (Object_t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2515(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m12987 (Object_t * __this /* static, unused */, Object_t563 * ___lhs, Object_t563 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t563 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t563 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t563 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t563 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
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
		Object_t563 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m12988(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
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
		Object_t563 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m12988(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t563 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t563 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m12988 (Object_t * __this /* static, unused */, Object_t563 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1358);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t563 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m12989(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m13715(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2515 (Object_t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m12989 (Object_t563 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t563 * Object_Instantiate_m2857 (Object_t * __this /* static, unused */, Object_t563 * ___original, Vector3_t53  ___position, Quaternion_t69  ___rotation, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___original;
		Object_CheckNullArgument_m12990(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral3307, /*hidden argument*/NULL);
		Object_t563 * L_1 = ___original;
		Vector3_t53  L_2 = ___position;
		Quaternion_t69  L_3 = ___rotation;
		Object_t563 * L_4 = Object_Internal_InstantiateSingle_m12983(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" Object_t563 * Object_Instantiate_m5457 (Object_t * __this /* static, unused */, Object_t563 * ___original, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___original;
		Object_CheckNullArgument_m12990(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral3307, /*hidden argument*/NULL);
		Object_t563 * L_1 = ___original;
		Object_t563 * L_2 = Object_Internal_CloneSingle_m12982(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m12990 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
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
		ArgumentException_t1126 * L_2 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t563 * Object_FindObjectOfType_m2348 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t677* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t677* L_1 = Object_FindObjectsOfType_m3151(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t677* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t677* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t563 **)(Object_t563 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t563 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m2328 (Object_t * __this /* static, unused */, Object_t563 * ___exists, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m12987(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m2377 (Object_t * __this /* static, unused */, Object_t563 * ___x, Object_t563 * ___y, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___x;
		Object_t563 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m12987(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m2332 (Object_t * __this /* static, unused */, Object_t563 * ___x, Object_t563 * ___y, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___x;
		Object_t563 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m12987(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t563_marshal(const Object_t563& unmarshaled, Object_t563_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t563_marshal_back(const Object_t563_marshaled& marshaled, Object_t563& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t563_marshal_cleanup(Object_t563_marshaled& marshaled)
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
extern "C" void Component__ctor_m12991 (Component_t462 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t54 * Component_get_transform_m2334 (Component_t462 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Component_get_transform_m2334_ftn) (Component_t462 *);
	static Component_get_transform_m2334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m2334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t49 * Component_get_gameObject_m2365 (Component_t462 * __this, const MethodInfo* method)
{
	typedef GameObject_t49 * (*Component_get_gameObject_m2365_ftn) (Component_t462 *);
	static Component_get_gameObject_m2365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m2365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t462 * Component_GetComponent_m5496 (Component_t462 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2365(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t462 * L_2 = GameObject_GetComponent_m2451(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m12992 (Component_t462 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m12992_ftn) (Component_t462 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m12992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m12992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C" Component_t462 * Component_GetComponent_m5463 (Component_t462 * __this, String_t* ___type, const MethodInfo* method)
{
	typedef Component_t462 * (*Component_GetComponent_m5463_ftn) (Component_t462 *, String_t*);
	static Component_GetComponent_m5463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponent_m5463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponent(System.String)");
	return _il2cpp_icall_func(__this, ___type);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t462 * Component_GetComponentInChildren_m5272 (Component_t462 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2365(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t462 * L_2 = GameObject_GetComponentInChildren_m5271(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m12993 (Component_t462 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m12993_ftn) (Component_t462 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m12993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m12993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m9367 (Component_t462 * __this, Type_t * ___type, List_1_t463 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t463 * L_1 = ___results;
		Component_GetComponentsForListInternal_m12993(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m5546 (Component_t462 * __this, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2365(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m12996(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C" void Component_set_tag_m5434 (Component_t462 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2365(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		GameObject_set_tag_m3044(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m2734 (Component_t462 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_SendMessage_m2734_ftn) (Component_t462 *, String_t*, Object_t *, int32_t);
	static Component_SendMessage_m2734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_SendMessage_m2734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C" void Component_SendMessage_m3269 (Component_t462 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = ___value;
		int32_t L_2 = V_0;
		Component_SendMessage_m2734(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" void Component_SendMessage_m2754 (Component_t462 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		Component_SendMessage_m2734(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m3040 (Component_t462 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_SendMessage_m2734(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m5273 (Component_t462 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_BroadcastMessage_m5273_ftn) (Component_t462 *, String_t*, Object_t *, int32_t);
	static Component_BroadcastMessage_m5273_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_BroadcastMessage_m5273_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m2868 (Component_t462 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_BroadcastMessage_m5273(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m2421 (GameObject_t49 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m12998(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m3192 (GameObject_t49 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m12998(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" void GameObject__ctor_m2450 (GameObject_t49 * __this, String_t* ___name, TypeU5BU5D_t562* ___components, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t562* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m12981(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m12998(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		TypeU5BU5D_t562* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t562* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m5442(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t562* L_8 = V_1;
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
extern "C" Component_t462 * GameObject_GetComponent_m2451 (GameObject_t49 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t462 * (*GameObject_GetComponent_m2451_ftn) (GameObject_t49 *, Type_t *);
	static GameObject_GetComponent_m2451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m12994 (GameObject_t49 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m12994_ftn) (GameObject_t49 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m12994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m12994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t54_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" Component_t462 * GameObject_GetComponentInChildren_m5271 (GameObject_t49 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Transform_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
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
		bool L_0 = GameObject_get_activeInHierarchy_m2462(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t462 * L_2 = GameObject_GetComponent_m2451(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t462 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_3, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		Transform_t54 * L_6 = GameObject_get_transform_m2375(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t54 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_7, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
			GameObject_t49 * L_14 = Component_get_gameObject_m2365(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t462 * L_16 = GameObject_GetComponentInChildren_m5271(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t462 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_17, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t567_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_24);
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
extern "C" Array_t * GameObject_GetComponentsInternal_m12995 (GameObject_t49 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m12995_ftn) (GameObject_t49 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m12995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m12995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t54 * GameObject_get_transform_m2375 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*GameObject_get_transform_m2375_ftn) (GameObject_t49 *);
	static GameObject_get_transform_m2375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m2375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2607 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2607_ftn) (GameObject_t49 *);
	static GameObject_get_layer_m2607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m9482 (GameObject_t49 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m9482_ftn) (GameObject_t49 *, int32_t);
	static GameObject_set_layer_m9482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m9482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m2342 (GameObject_t49 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m2342_ftn) (GameObject_t49 *, bool);
	static GameObject_SetActive_m2342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m2342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m2346 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m2346_ftn) (GameObject_t49 *);
	static GameObject_get_activeSelf_m2346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m2346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2462 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2462_ftn) (GameObject_t49 *);
	static GameObject_get_activeInHierarchy_m2462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m12996 (GameObject_t49 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m12996_ftn) (GameObject_t49 *);
	static GameObject_get_tag_m12996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m12996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C" void GameObject_set_tag_m3044 (GameObject_t49 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_tag_m3044_ftn) (GameObject_t49 *, String_t*);
	static GameObject_set_tag_m3044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_tag_m3044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_tag(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t49 * GameObject_FindGameObjectWithTag_m5540 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObject_t49 * (*GameObject_FindGameObjectWithTag_m5540_ftn) (String_t*);
	static GameObject_FindGameObjectWithTag_m5540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectWithTag_m5540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" GameObjectU5BU5D_t60* GameObject_FindGameObjectsWithTag_m3015 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObjectU5BU5D_t60* (*GameObject_FindGameObjectsWithTag_m3015_ftn) (String_t*);
	static GameObject_FindGameObjectsWithTag_m3015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectsWithTag_m3015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m2888 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2888_ftn) (GameObject_t49 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String)
extern "C" void GameObject_SendMessage_m3003 (GameObject_t49 * __this, String_t* ___methodName, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		GameObject_SendMessage_m2888(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m3263 (GameObject_t49 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_SendMessage_m2888(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m2887 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_BroadcastMessage_m2887_ftn) (GameObject_t49 *, String_t*, Object_t *, int32_t);
	static GameObject_BroadcastMessage_m2887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_BroadcastMessage_m2887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m2882 (GameObject_t49 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_BroadcastMessage_m2887(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t462 * GameObject_Internal_AddComponentWithType_m12997 (GameObject_t49 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t462 * (*GameObject_Internal_AddComponentWithType_m12997_ftn) (GameObject_t49 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m12997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m12997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t462 * GameObject_AddComponent_m5442 (GameObject_t49 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t462 * L_1 = GameObject_Internal_AddComponentWithType_m12997(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m12998 (Object_t * __this /* static, unused */, GameObject_t49 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m12998_ftn) (GameObject_t49 *, String_t*);
	static GameObject_Internal_CreateGameObject_m12998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m12998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t49 * GameObject_Find_m3286 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t49 * (*GameObject_Find_m3286_ftn) (String_t*);
	static GameObject_Find_m3286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m3286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" GameObject_t49 * GameObject_get_gameObject_m2755 (GameObject_t49 * __this, const MethodInfo* method)
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
extern "C" void Enumerator__ctor_m12999 (Enumerator_t2781 * __this, Transform_t54 * ___outer, const MethodInfo* method)
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
extern "C" Object_t * Enumerator_get_Current_m13000 (Enumerator_t2781 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t54 * L_2 = Transform_GetChild_m3057(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m13001 (Enumerator_t2781 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t54 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2369(L_0, /*hidden argument*/NULL);
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
extern "C" void Transform_INTERNAL_get_position_m13002 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m13002_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_position_m13002_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m13002_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m13003 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m13003_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_position_m13003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m13003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t53  Transform_get_position_m2372 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m13002(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m2374 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m13003(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m13004 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m13004_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_localPosition_m13004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m13004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m13005 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m13005_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_localPosition_m13005_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m13005_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t53  Transform_get_localPosition_m2357 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m13004(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m2336 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m13005(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t53  Transform_get_eulerAngles_m3032 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t53  L_1 = Quaternion_get_eulerAngles_m3058((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" Vector3_t53  Transform_get_right_m2545 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_right_m2938(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2383(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" Vector3_t53  Transform_get_up_m2544 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_up_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2383(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t53  Transform_get_forward_m2497 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Quaternion_t69  L_0 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Vector3_t53  L_1 = Vector3_get_forward_m2493(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Quaternion_op_Multiply_m2383(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m13006 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m13006_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_get_rotation_m13006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m13006_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m13007 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m13007_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_set_rotation_m13007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m13007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t69  Transform_get_rotation_m2425 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m13006(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t69  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m2546 (Transform_t54 * __this, Quaternion_t69  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m13007(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m13008 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m13008_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_get_localRotation_m13008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m13008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m13009 (Transform_t54 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m13009_ftn) (Transform_t54 *, Quaternion_t69 *);
	static Transform_INTERNAL_set_localRotation_m13009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m13009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t69  Transform_get_localRotation_m2860 (Transform_t54 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m13008(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t69  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m2602 (Transform_t54 * __this, Quaternion_t69  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m13009(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m13010 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m13010_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_get_localScale_m13010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m13010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m13011 (Transform_t54 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m13011_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_set_localScale_m13011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m13011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t53  Transform_get_localScale_m2427 (Transform_t54 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m13010(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m2547 (Transform_t54 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m13011(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t54 * Transform_get_parent_m2453 (Transform_t54 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = Transform_get_parentInternal_m13012(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern "C" void Transform_set_parent_m2422 (Transform_t54 * __this, Transform_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t259 *)IsInst(__this, RectTransform_t259_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2769(NULL /*static, unused*/, (String_t*) &_stringLiteral3308, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t54 * L_0 = ___value;
		Transform_set_parentInternal_m13013(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t54 * Transform_get_parentInternal_m13012 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_get_parentInternal_m13012_ftn) (Transform_t54 *);
	static Transform_get_parentInternal_m13012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m13012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m13013 (Transform_t54 * __this, Transform_t54 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m13013_ftn) (Transform_t54 *, Transform_t54 *);
	static Transform_set_parentInternal_m13013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m13013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m9480 (Transform_t54 * __this, Transform_t54 * ___parent, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___parent;
		Transform_SetParent_m2748(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2748 (Transform_t54 * __this, Transform_t54 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m2748_ftn) (Transform_t54 *, Transform_t54 *, bool);
	static Transform_SetParent_m2748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m2748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m13014 (Transform_t54 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m13014_ftn) (Transform_t54 *, Matrix4x4_t68 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m13014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m13014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t68  Transform_get_worldToLocalMatrix_m9529 (Transform_t54 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m13014(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m13015 (Transform_t54 * __this, Matrix4x4_t68 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localToWorldMatrix_m13015_ftn) (Transform_t54 *, Matrix4x4_t68 *);
	static Transform_INTERNAL_get_localToWorldMatrix_m13015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localToWorldMatrix_m13015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t68  Transform_get_localToWorldMatrix_m2522 (Transform_t54 * __this, const MethodInfo* method)
{
	Matrix4x4_t68  V_0 = {0};
	{
		Transform_INTERNAL_get_localToWorldMatrix_m13015(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t68  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m13016 (Transform_t54 * __this, Vector3_t53  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t69  L_3 = Quaternion_Euler_m2382(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t69  L_5 = Transform_get_localRotation_m2860(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_6 = V_0;
		Quaternion_t69  L_7 = Quaternion_op_Multiply_m2608(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m2602(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t69  L_8 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_9 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_10 = Quaternion_Inverse_m9545(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t69  L_11 = V_0;
		Quaternion_t69  L_12 = Quaternion_op_Multiply_m2608(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t69  L_13 = Transform_get_rotation_m2425(__this, /*hidden argument*/NULL);
		Quaternion_t69  L_14 = Quaternion_op_Multiply_m2608(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t69  L_15 = Quaternion_op_Multiply_m2608(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m2546(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C" void Transform_Rotate_m2937 (Transform_t54 * __this, float ___xAngle, float ___yAngle, float ___zAngle, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		int32_t L_3 = V_0;
		Transform_Rotate_m13017(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Rotate_m13017 (Transform_t54 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, const MethodInfo* method)
{
	{
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		Vector3_t53  L_3 = {0};
		Vector3__ctor_m2335(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___relativeTo;
		Transform_Rotate_m13016(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C" void Transform_LookAt_m2384 (Transform_t54 * __this, Transform_t54 * ___target, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = Vector3_get_up_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t54 * L_1 = ___target;
		Vector3_t53  L_2 = V_0;
		Transform_LookAt_m13018(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m13018 (Transform_t54 * __this, Transform_t54 * ___target, Vector3_t53  ___worldUp, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m2328(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t54 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t53  L_3 = Transform_get_position_m2372(L_2, /*hidden argument*/NULL);
		Vector3_t53  L_4 = ___worldUp;
		Transform_LookAt_m13019(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m13019 (Transform_t54 * __this, Vector3_t53  ___worldPosition, Vector3_t53  ___worldUp, const MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m13020(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" void Transform_LookAt_m2853 (Transform_t54 * __this, Vector3_t53  ___worldPosition, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = Vector3_get_up_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m13020(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m13020 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___worldPosition, Vector3_t53 * ___worldUp, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m13020_ftn) (Transform_t54 *, Vector3_t53 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_LookAt_m13020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m13020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_TransformDirection_m2605 (Transform_t54 * __this, Vector3_t53  ___direction, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_TransformDirection_m13021(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_TransformDirection_m13021 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_TransformDirection_m13021_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_TransformDirection_m13021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m13021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_InverseTransformDirection_m2488 (Transform_t54 * __this, Vector3_t53  ___direction, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_InverseTransformDirection_m13022(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_InverseTransformDirection_m13022 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_InverseTransformDirection_m13022_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_InverseTransformDirection_m13022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformDirection_m13022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_TransformPoint_m2423 (Transform_t54 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_TransformPoint_m13023(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_TransformPoint_m13023 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_TransformPoint_m13023_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_TransformPoint_m13023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m13023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
extern "C" Vector3_t53  Transform_TransformPoint_m2861 (Transform_t54 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t53  L_3 = {0};
		Vector3__ctor_m2335(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t53  L_4 = Transform_TransformPoint_m2423(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t53  Transform_InverseTransformPoint_m2430 (Transform_t54 * __this, Vector3_t53  ___position, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m13024(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t53  Transform_INTERNAL_CALL_InverseTransformPoint_m13024 (Object_t * __this /* static, unused */, Transform_t54 * ___self, Vector3_t53 * ___position, const MethodInfo* method)
{
	typedef Vector3_t53  (*Transform_INTERNAL_CALL_InverseTransformPoint_m13024_ftn) (Transform_t54 *, Vector3_t53 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m13024_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m13024_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" Transform_t54 * Transform_get_root_m3072 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_get_root_m3072_ftn) (Transform_t54 *);
	static Transform_get_root_m3072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_root_m3072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_root()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2369 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2369_ftn) (Transform_t54 *);
	static Transform_get_childCount_m2369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m9481 (Transform_t54 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m9481_ftn) (Transform_t54 *);
	static Transform_SetAsFirstSibling_m9481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m9481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t54 * Transform_Find_m5455 (Transform_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_Find_m5455_ftn) (Transform_t54 *, String_t*);
	static Transform_Find_m5455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m5455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t2781_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m13025 (Transform_t54 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5729);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2781 * L_0 = (Enumerator_t2781 *)il2cpp_codegen_object_new (Enumerator_t2781_il2cpp_TypeInfo_var);
		Enumerator__ctor_m12999(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t54 * Transform_GetChild_m3057 (Transform_t54 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t54 * (*Transform_GetChild_m3057_ftn) (Transform_t54 *, int32_t);
	static Transform_GetChild_m3057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m3057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
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
extern "C" float Time_get_time_m2327 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m2327_ftn) ();
	static Time_get_time_m2327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m2327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C" float Time_get_timeSinceLevelLoad_m2459 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeSinceLevelLoad_m2459_ftn) ();
	static Time_get_timeSinceLevelLoad_m2459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeSinceLevelLoad_m2459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m2359 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m2359_ftn) ();
	static Time_get_deltaTime_m2359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m2359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m9327 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m9327_ftn) ();
	static Time_get_unscaledTime_m9327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m9327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m9343 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m9343_ftn) ();
	static Time_get_unscaledDeltaTime_m9343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m9343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m2603 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m2603_ftn) ();
	static Time_get_timeScale_m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m2644 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m2644_ftn) (float);
	static Time_set_timeScale_m2644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m2644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m2463 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m2463_ftn) ();
	static Time_get_frameCount_m2463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m2463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" float Time_get_realtimeSinceStartup_m2701 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m2701_ftn) ();
	static Time_get_realtimeSinceStartup_m2701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m2701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif



// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m2360 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m2360_ftn) (float, float);
	static Random_Range_m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m2998 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m13026(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m13026 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m13026_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m13026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m13026_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m5549 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Random_get_value_m5549_ftn) ();
	static Random_get_value_m5549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m5549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C" Vector3_t53  Random_get_insideUnitSphere_m3047 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t53  (*Random_get_insideUnitSphere_m3047_ftn) ();
	static Random_get_insideUnitSphere_m3047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_insideUnitSphere_m3047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_insideUnitSphere()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m13027 (YieldInstruction_t2705 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t2705_marshal(const YieldInstruction_t2705& unmarshaled, YieldInstruction_t2705_marshaled& marshaled)
{
}
void YieldInstruction_t2705_marshal_back(const YieldInstruction_t2705_marshaled& marshaled, YieldInstruction_t2705& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t2705_marshal_cleanup(YieldInstruction_t2705_marshaled& marshaled)
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
extern "C" void PlayerPrefsException__ctor_m13028 (PlayerPrefsException_t2784 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m3150(__this, L_0, /*hidden argument*/NULL);
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
extern "C" bool PlayerPrefs_TrySetSetString_m13029 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetSetString_m13029_ftn) (String_t*, String_t*);
	static PlayerPrefs_TrySetSetString_m13029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetSetString_m13029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern TypeInfo* PlayerPrefsException_t2784_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetString_m2648 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t2784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5730);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetSetString_m13029(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t2784 * L_3 = (PlayerPrefsException_t2784 *)il2cpp_codegen_object_new (PlayerPrefsException_t2784_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m13028(L_3, (String_t*) &_stringLiteral3309, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3174 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m3174_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m3174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m3174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m2650 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
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
		String_t* L_3 = PlayerPrefs_GetString_m3174(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m2649 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_HasKey_m2649_ftn) (String_t*);
	static PlayerPrefs_HasKey_m2649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_HasKey_m2649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::HasKey(System.String)");
	return _il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C" void PlayerPrefs_DeleteKey_m2653 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteKey_m2653_ftn) (String_t*);
	static PlayerPrefs_DeleteKey_m2653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteKey_m2653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
	_il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m7613 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_Save_m7613_ftn) ();
	static PlayerPrefs_Save_m7613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_Save_m7613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
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
extern "C" Vector3_t53  Particle_get_position_m2587 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m2565 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
extern "C" Vector3_t53  Particle_get_velocity_m2611 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2613 (Particle_t187 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C" void Particle_set_lifetime_m2464 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Lifetime_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C" void Particle_set_startLifetime_m2588 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartLifetime_10 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2559 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2569 (Particle_t187 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_4 = ((float)((float)L_0*(float)(0.0174532924f)));
		return;
	}
}
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::get_color()
extern "C" Color32_t89  Particle_get_color_m2586 (Particle_t187 * __this, const MethodInfo* method)
{
	{
		Color32_t89  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem/Particle::set_color(UnityEngine.Color32)
extern "C" void Particle_set_color_m2568 (Particle_t187 * __this, Color32_t89  ___value, const MethodInfo* method)
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
#include "mscorlib_System_Collections_Generic_List_1_gen_95.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_95MethodDeclarations.h"
struct GameObject_t49;
struct ParticleSystem_t189;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2363_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2363(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2363_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t189_m2574(__this, method) (( ParticleSystem_t189 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2363_gshared)(__this, method)


// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
extern "C" bool ParticleSystem_get_isStopped_m2593 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef bool (*ParticleSystem_get_isStopped_m2593_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_isStopped_m2593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isStopped_m2593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isStopped()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.ParticleSystem::get_isPaused()
extern "C" bool ParticleSystem_get_isPaused_m2592 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef bool (*ParticleSystem_get_isPaused_m2592_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_isPaused_m2592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPaused_m2592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPaused()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m2631 (ParticleSystem_t189 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_set_startSize_m2631_ftn) (ParticleSystem_t189 *, float);
	static ParticleSystem_set_startSize_m2631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSize_m2631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem::get_simulationSpace()
extern "C" int32_t ParticleSystem_get_simulationSpace_m2571 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystem_get_simulationSpace_m2571_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_get_simulationSpace_m2571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_simulationSpace_m2571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_simulationSpace()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
extern "C" void ParticleSystem_set_simulationSpace_m2606 (ParticleSystem_t189 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_set_simulationSpace_m2606_ftn) (ParticleSystem_t189 *, int32_t);
	static ParticleSystem_set_simulationSpace_m2606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_simulationSpace_m2606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C" void ParticleSystem_SetParticles_m2566 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, int32_t ___size, const MethodInfo* method)
{
	typedef void (*ParticleSystem_SetParticles_m2566_ftn) (ParticleSystem_t189 *, ParticleU5BU5D_t186*, int32_t);
	static ParticleSystem_SetParticles_m2566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_SetParticles_m2566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)");
	_il2cpp_icall_func(__this, ___particles, ___size);
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C" int32_t ParticleSystem_GetParticles_m2564 (ParticleSystem_t189 * __this, ParticleU5BU5D_t186* ___particles, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystem_GetParticles_m2564_ftn) (ParticleSystem_t189 *, ParticleU5BU5D_t186*);
	static ParticleSystem_GetParticles_m2564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticles_m2564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])");
	return _il2cpp_icall_func(__this, ___particles);
}
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m13030 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Play_m13030_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Play_m13030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Play_m13030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m13031 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Stop_m13031_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Stop_m13031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Stop_m13031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Internal_Clear()
extern "C" void ParticleSystem_Internal_Clear_m13032 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Clear_m13032_ftn) (ParticleSystem_t189 *);
	static ParticleSystem_Internal_Clear_m13032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Clear_m13032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Clear()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m2594 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Play_m13033(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m13033 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t2927* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t2927* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t2927* L_1 = ParticleSystem_GetParticleSystems_m13037(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t2927* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t2927* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Play_m13030(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t2927* L_9 = V_2;
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
		ParticleSystem_Internal_Play_m13030(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m2591 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Stop_m13034(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m13034 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t2927* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t2927* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t2927* L_1 = ParticleSystem_GetParticleSystems_m13037(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t2927* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t2927* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Stop_m13031(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t2927* L_9 = V_2;
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
		ParticleSystem_Internal_Stop_m13031(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C" void ParticleSystem_Clear_m2570 (ParticleSystem_t189 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Clear_m13035(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" void ParticleSystem_Clear_m13035 (ParticleSystem_t189 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t2927* V_0 = {0};
	ParticleSystem_t189 * V_1 = {0};
	ParticleSystemU5BU5D_t2927* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t2927* L_1 = ParticleSystem_GetParticleSystems_m13037(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t2927* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t2927* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t189 **)(ParticleSystem_t189 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t189 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Clear_m13032(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t2927* L_9 = V_2;
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
		ParticleSystem_Internal_Clear_m13032(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C" void ParticleSystem_Emit_m2563 (ParticleSystem_t189 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		ParticleSystem_INTERNAL_CALL_Emit_m13036(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m13036 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___self, int32_t ___count, const MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m13036_ftn) (ParticleSystem_t189 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m13036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m13036_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern TypeInfo* List_1_t2928_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m13716_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m13717_MethodInfo_var;
extern "C" ParticleSystemU5BU5D_t2927* ParticleSystem_GetParticleSystems_m13037 (Object_t * __this /* static, unused */, ParticleSystem_t189 * ___root, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5731);
		List_1__ctor_m13716_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485007);
		List_1_ToArray_m13717_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485008);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2928 * V_0 = {0};
	{
		ParticleSystem_t189 * L_0 = ___root;
		bool L_1 = Object_op_Implicit_m2328(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (ParticleSystemU5BU5D_t2927*)NULL;
	}

IL_000d:
	{
		List_1_t2928 * L_2 = (List_1_t2928 *)il2cpp_codegen_object_new (List_1_t2928_il2cpp_TypeInfo_var);
		List_1__ctor_m13716(L_2, /*hidden argument*/List_1__ctor_m13716_MethodInfo_var);
		V_0 = L_2;
		List_1_t2928 * L_3 = V_0;
		ParticleSystem_t189 * L_4 = ___root;
		NullCheck(L_3);
		VirtActionInvoker1< ParticleSystem_t189 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_3, L_4);
		ParticleSystem_t189 * L_5 = ___root;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2334(L_5, /*hidden argument*/NULL);
		List_1_t2928 * L_7 = V_0;
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m13038(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		List_1_t2928 * L_8 = V_0;
		NullCheck(L_8);
		ParticleSystemU5BU5D_t2927* L_9 = List_1_ToArray_m13717(L_8, /*hidden argument*/List_1_ToArray_m13717_MethodInfo_var);
		return L_9;
	}
}
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t54_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisParticleSystem_t189_m2574_MethodInfo_var;
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m13038 (Object_t * __this /* static, unused */, Transform_t54 * ___transform, List_1_t2928 * ___particleSystems, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Transform_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		GameObject_GetComponent_TisParticleSystem_t189_m2574_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
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
			GameObject_t49 * L_5 = Component_get_gameObject_m2365(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			ParticleSystem_t189 * L_6 = GameObject_GetComponent_TisParticleSystem_t189_m2574(L_5, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t189_m2574_MethodInfo_var);
			V_2 = L_6;
			ParticleSystem_t189 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_7, (Object_t563 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0030:
		{
			List_1_t2928 * L_9 = ___particleSystems;
			ParticleSystem_t189 * L_10 = V_2;
			NullCheck(L_9);
			VirtActionInvoker1< ParticleSystem_t189 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_9, L_10);
			Transform_t54 * L_11 = V_0;
			List_1_t2928 * L_12 = ___particleSystems;
			ParticleSystem_GetDirectParticleSystemChildrenRecursive_m13038(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
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
			V_3 = ((Object_t *)IsInst(L_15, IDisposable_t567_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_17);
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
extern "C" int32_t ParticleSystemRenderer_get_renderMode_m2604 (ParticleSystemRenderer_t190 * __this, const MethodInfo* method)
{
	typedef int32_t (*ParticleSystemRenderer_get_renderMode_m2604_ftn) (ParticleSystemRenderer_t190 *);
	static ParticleSystemRenderer_get_renderMode_m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_get_renderMode_m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::get_renderMode()");
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
extern "C" Vector3_t53  Particle_get_position_m13039 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m13040 (Particle_t2789 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t53  Particle_get_velocity_m13041 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m13042 (Particle_t2789 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m13043 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m13044 (Particle_t2789 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m13045 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m13046 (Particle_t2789 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m13047 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m13048 (Particle_t2789 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m13049 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m13050 (Particle_t2789 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m13051 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m13052 (Particle_t2789 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t121  Particle_get_color_m13053 (Particle_t2789 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m13054 (Particle_t2789 * __this, Color_t121  ___value, const MethodInfo* method)
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
extern "C" bool Physics_Internal_Raycast_m13055 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t318 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m13056(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m13056 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m13056_ftn) (Vector3_t53 *, Vector3_t53 *, RaycastHit_t318 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m13056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m13056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m2862 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t53  L_0 = ___origin;
		Vector3_t53  L_1 = ___direction;
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2498(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2498 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___origin;
		Vector3_t53  L_1 = ___direction;
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m13055(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m3073 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t319  L_0 = ___ray;
		RaycastHit_t318 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2475(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2475 (Object_t * __this /* static, unused */, Ray_t319  ___ray, RaycastHit_t318 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Ray_get_origin_m2479((&___ray), /*hidden argument*/NULL);
		Vector3_t53  L_1 = Ray_get_direction_m2481((&___ray), /*hidden argument*/NULL);
		RaycastHit_t318 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m2498(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m2920 (Object_t * __this /* static, unused */, Ray_t319  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Ray_get_origin_m2479((&___ray), /*hidden argument*/NULL);
		Vector3_t53  L_1 = Ray_get_direction_m2481((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t317* L_4 = Physics_RaycastAll_m13057(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_RaycastAll_m13057 (Object_t * __this /* static, unused */, Vector3_t53  ___origin, Vector3_t53  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t317* L_2 = Physics_INTERNAL_CALL_RaycastAll_m13058(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t317* Physics_INTERNAL_CALL_RaycastAll_m13058 (Object_t * __this /* static, unused */, Vector3_t53 * ___origin, Vector3_t53 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t317* (*Physics_INTERNAL_CALL_RaycastAll_m13058_ftn) (Vector3_t53 *, Vector3_t53 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m13058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m13058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" bool Physics_Linecast_m5605 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, RaycastHit_t318 * ___hitInfo, int32_t ___layerMask, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Vector3_t53  L_0 = ___end;
		Vector3_t53  L_1 = ___start;
		Vector3_t53  L_2 = Vector3_op_Subtraction_m2373(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t53  L_3 = ___start;
		Vector3_t53  L_4 = V_0;
		RaycastHit_t318 * L_5 = ___hitInfo;
		float L_6 = Vector3_get_magnitude_m2620((&V_0), /*hidden argument*/NULL);
		int32_t L_7 = ___layerMask;
		bool L_8 = Physics_Raycast_m2498(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
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
extern "C" void Rigidbody_INTERNAL_get_velocity_m13059 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m13059_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_get_velocity_m13059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m13059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m13060 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m13060_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_set_velocity_m13060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m13060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t53  Rigidbody_get_velocity_m3229 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_velocity_m13059(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m3226 (Rigidbody_t100 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m13060(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_angularVelocity_m13061 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_angularVelocity_m13061_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_get_angularVelocity_m13061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_angularVelocity_m13061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m13062 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m13062_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m13062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m13062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" Vector3_t53  Rigidbody_get_angularVelocity_m3230 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_angularVelocity_m13061(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m3227 (Rigidbody_t100 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m13062(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m2959 (Rigidbody_t100 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m2959_ftn) (Rigidbody_t100 *, bool);
	static Rigidbody_set_isKinematic_m2959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m2959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m3267 (Rigidbody_t100 * __this, Vector3_t53  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m13063(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m13063 (Object_t * __this /* static, unused */, Rigidbody_t100 * ___self, Vector3_t53 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m13063_ftn) (Rigidbody_t100 *, Vector3_t53 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m13063_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m13063_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Rigidbody_AddForceAtPosition_m2622 (Rigidbody_t100 * __this, Vector3_t53  ___force, Vector3_t53  ___position, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064 (Object_t * __this /* static, unused */, Rigidbody_t100 * ___self, Vector3_t53 * ___force, Vector3_t53 * ___position, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064_ftn) (Rigidbody_t100 *, Vector3_t53 *, Vector3_t53 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_position_m13065 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_position_m13065_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_get_position_m13065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_position_m13065_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_position_m13066 (Rigidbody_t100 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_position_m13066_ftn) (Rigidbody_t100 *, Vector3_t53 *);
	static Rigidbody_INTERNAL_set_position_m13066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_position_m13066_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" Vector3_t53  Rigidbody_get_position_m3304 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_position_m13065(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C" void Rigidbody_set_position_m3305 (Rigidbody_t100 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_position_m13066(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_get_rotation_m13067 (Rigidbody_t100 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_rotation_m13067_ftn) (Rigidbody_t100 *, Quaternion_t69 *);
	static Rigidbody_INTERNAL_get_rotation_m13067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_rotation_m13067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_set_rotation_m13068 (Rigidbody_t100 * __this, Quaternion_t69 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_rotation_m13068_ftn) (Rigidbody_t100 *, Quaternion_t69 *);
	static Rigidbody_INTERNAL_set_rotation_m13068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_rotation_m13068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C" Quaternion_t69  Rigidbody_get_rotation_m3306 (Rigidbody_t100 * __this, const MethodInfo* method)
{
	Quaternion_t69  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_rotation_m13067(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t69  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_set_rotation_m3307 (Rigidbody_t100 * __this, Quaternion_t69  ___value, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_rotation_m13068(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
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
extern "C" bool Collider_get_enabled_m5517 (Collider_t194 * __this, const MethodInfo* method)
{
	typedef bool (*Collider_get_enabled_m5517_ftn) (Collider_t194 *);
	static Collider_get_enabled_m5517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_enabled_m5517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m2914 (Collider_t194 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m2914_ftn) (Collider_t194 *, bool);
	static Collider_set_enabled_m2914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m2914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t100 * Collider_get_attachedRigidbody_m13069 (Collider_t194 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t100 * (*Collider_get_attachedRigidbody_m13069_ftn) (Collider_t194 *);
	static Collider_get_attachedRigidbody_m13069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m13069_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m13070 (Collider_t194 * __this, Bounds_t56 * ___value, const MethodInfo* method)
{
	typedef void (*Collider_INTERNAL_get_bounds_m13070_ftn) (Collider_t194 *, Bounds_t56 *);
	static Collider_INTERNAL_get_bounds_m13070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_get_bounds_m13070_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t56  Collider_get_bounds_m3029 (Collider_t194 * __this, const MethodInfo* method)
{
	Bounds_t56  V_0 = {0};
	{
		Collider_INTERNAL_get_bounds_m13070(__this, (&V_0), /*hidden argument*/NULL);
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
extern "C" void BoxCollider_INTERNAL_get_center_m13071 (BoxCollider_t1128 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_get_center_m13071_ftn) (BoxCollider_t1128 *, Vector3_t53 *);
	static BoxCollider_INTERNAL_get_center_m13071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_center_m13071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" Vector3_t53  BoxCollider_get_center_m5512 (BoxCollider_t1128 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		BoxCollider_INTERNAL_get_center_m13071(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_get_size_m13072 (BoxCollider_t1128 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_get_size_m13072_ftn) (BoxCollider_t1128 *, Vector3_t53 *);
	static BoxCollider_INTERNAL_get_size_m13072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_size_m13072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" Vector3_t53  BoxCollider_get_size_m5513 (BoxCollider_t1128 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		BoxCollider_INTERNAL_get_size_m13072(__this, (&V_0), /*hidden argument*/NULL);
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
extern "C" void SphereCollider_INTERNAL_get_center_m13073 (SphereCollider_t1129 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*SphereCollider_INTERNAL_get_center_m13073_ftn) (SphereCollider_t1129 *, Vector3_t53 *);
	static SphereCollider_INTERNAL_get_center_m13073_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_INTERNAL_get_center_m13073_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
extern "C" Vector3_t53  SphereCollider_get_center_m5514 (SphereCollider_t1129 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		SphereCollider_INTERNAL_get_center_m13073(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t53  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.SphereCollider::get_radius()
extern "C" float SphereCollider_get_radius_m5515 (SphereCollider_t1129 * __this, const MethodInfo* method)
{
	typedef float (*SphereCollider_get_radius_m5515_ftn) (SphereCollider_t1129 *);
	static SphereCollider_get_radius_m5515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_get_radius_m5515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::get_radius()");
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
extern "C" float CapsuleCollider_get_height_m5511 (CapsuleCollider_t1127 * __this, const MethodInfo* method)
{
	typedef float (*CapsuleCollider_get_height_m5511_ftn) (CapsuleCollider_t1127 *);
	static CapsuleCollider_get_height_m5511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m5511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t53  RaycastHit_get_point_m2476 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t53  RaycastHit_get_normal_m2477 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m2921 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t194 * RaycastHit_get_collider_m2623 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	{
		Collider_t194 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t100 * RaycastHit_get_rigidbody_m2621 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	Rigidbody_t100 * G_B3_0 = {0};
	{
		Collider_t194 * L_0 = RaycastHit_get_collider_m2623(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t194 * L_2 = RaycastHit_get_collider_m2623(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t100 * L_3 = Collider_get_attachedRigidbody_m13069(L_2, /*hidden argument*/NULL);
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
extern "C" Transform_t54 * RaycastHit_get_transform_m2478 (RaycastHit_t318 * __this, const MethodInfo* method)
{
	Rigidbody_t100 * V_0 = {0};
	{
		Rigidbody_t100 * L_0 = RaycastHit_get_rigidbody_m2621(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t100 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody_t100 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_4 = Component_get_transform_m2334(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider_t194 * L_5 = RaycastHit_get_collider_m2623(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_5, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider_t194 * L_7 = RaycastHit_get_collider_m2623(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2334(L_7, /*hidden argument*/NULL);
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
extern "C" Vector3_t53  ControllerColliderHit_get_moveDirection_m3043 (ControllerColliderHit_t557 * __this, const MethodInfo* method)
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
extern "C" int32_t CharacterController_Move_m2943 (CharacterController_t321 * __this, Vector3_t53  ___motion, const MethodInfo* method)
{
	{
		int32_t L_0 = CharacterController_INTERNAL_CALL_Move_m13074(NULL /*static, unused*/, __this, (&___motion), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m13074 (Object_t * __this /* static, unused */, CharacterController_t321 * ___self, Vector3_t53 * ___motion, const MethodInfo* method)
{
	typedef int32_t (*CharacterController_INTERNAL_CALL_Move_m13074_ftn) (CharacterController_t321 *, Vector3_t53 *);
	static CharacterController_INTERNAL_CALL_Move_m13074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_Move_m13074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___motion);
}
// System.Single UnityEngine.CharacterController::get_height()
extern "C" float CharacterController_get_height_m5510 (CharacterController_t321 * __this, const MethodInfo* method)
{
	typedef float (*CharacterController_get_height_m5510_ftn) (CharacterController_t321 *);
	static CharacterController_get_height_m5510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_height_m5510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_height()");
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
#include "mscorlib_System_Collections_Generic_List_1_gen_96.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_96MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t2793_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m13718_MethodInfo_var;
extern "C" void Physics2D__cctor_m13075 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5732);
		Physics2D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		List_1__ctor_m13718_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485009);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t2793 * L_0 = (List_1_t2793 *)il2cpp_codegen_object_new (List_1_t2793_il2cpp_TypeInfo_var);
		List_1__ctor_m13718(L_0, /*hidden argument*/List_1__ctor_m13718_MethodInfo_var);
		((Physics2D_t576_StaticFields*)Physics2D_t576_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern TypeInfo* Physics2D_t576_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m13076 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t575 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t575 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t576_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m13077(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m13077 (Object_t * __this /* static, unused */, Vector2_t97 * ___origin, Vector2_t97 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t575 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m13077_ftn) (Vector2_t97 *, Vector2_t97 *, float, int32_t, float, float, RaycastHit2D_t575 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m13077_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m13077_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t576_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t575  Physics2D_Raycast_m2919 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
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
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t576_il2cpp_TypeInfo_var);
		RaycastHit2D_t575  L_6 = Physics2D_Raycast_m2482(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t576_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t575  Physics2D_Raycast_m2482 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t575  V_0 = {0};
	{
		Vector2_t97  L_0 = ___origin;
		Vector2_t97  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t576_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m13076(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t575  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t576_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t640* Physics2D_RaycastAll_m2918 (Object_t * __this /* static, unused */, Vector2_t97  ___origin, Vector2_t97  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
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
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t576_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t640* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m13078(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t640* Physics2D_INTERNAL_CALL_RaycastAll_m13078 (Object_t * __this /* static, unused */, Vector2_t97 * ___origin, Vector2_t97 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t640* (*Physics2D_INTERNAL_CALL_RaycastAll_m13078_ftn) (Vector2_t97 *, Vector2_t97 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m13078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m13078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
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
extern "C" Vector2_t97  RaycastHit2D_get_point_m2484 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t97  RaycastHit2D_get_normal_m2486 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m9391 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t195 * RaycastHit2D_get_collider_m2483 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	{
		Collider2D_t195 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t324 * RaycastHit2D_get_rigidbody_m2624 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	Rigidbody2D_t324 * G_B3_0 = {0};
	{
		Collider2D_t195 * L_0 = RaycastHit2D_get_collider_m2483(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t195 * L_2 = RaycastHit2D_get_collider_m2483(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t324 * L_3 = Collider2D_get_attachedRigidbody_m13083(L_2, /*hidden argument*/NULL);
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
extern "C" Transform_t54 * RaycastHit2D_get_transform_m2487 (RaycastHit2D_t575 * __this, const MethodInfo* method)
{
	Rigidbody2D_t324 * V_0 = {0};
	{
		Rigidbody2D_t324 * L_0 = RaycastHit2D_get_rigidbody_m2624(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t324 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t324 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_4 = Component_get_transform_m2334(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t195 * L_5 = RaycastHit2D_get_collider_m2483(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_5, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t195 * L_7 = RaycastHit2D_get_collider_m2483(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2334(L_7, /*hidden argument*/NULL);
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
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m13079 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_velocity_m13079_ftn) (Rigidbody2D_t324 *, Vector2_t97 *);
	static Rigidbody2D_INTERNAL_get_velocity_m13079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_velocity_m13079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m13080 (Rigidbody2D_t324 * __this, Vector2_t97 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m13080_ftn) (Rigidbody2D_t324 *, Vector2_t97 *);
	static Rigidbody2D_INTERNAL_set_velocity_m13080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m13080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t97  Rigidbody2D_get_velocity_m2947 (Rigidbody2D_t324 * __this, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_velocity_m13079(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m2952 (Rigidbody2D_t324 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m13080(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C" float Rigidbody2D_get_angularVelocity_m3231 (Rigidbody2D_t324 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_angularVelocity_m3231_ftn) (Rigidbody2D_t324 *);
	static Rigidbody2D_get_angularVelocity_m3231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_angularVelocity_m3231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_angularVelocity()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C" void Rigidbody2D_set_angularVelocity_m3228 (Rigidbody2D_t324 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_angularVelocity_m3228_ftn) (Rigidbody2D_t324 *, float);
	static Rigidbody2D_set_angularVelocity_m3228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_angularVelocity_m3228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C" void Rigidbody2D_set_isKinematic_m2960 (Rigidbody2D_t324 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_isKinematic_m2960_ftn) (Rigidbody2D_t324 *, bool);
	static Rigidbody2D_set_isKinematic_m2960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_isKinematic_m2960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m2950 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForce_m13081(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m13081 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForce_m13081_ftn) (Rigidbody2D_t324 *, Vector2_t97 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForce_m13081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForce_m13081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody2D::AddForceAtPosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForceAtPosition_m2625 (Rigidbody2D_t324 * __this, Vector2_t97  ___force, Vector2_t97  ___position, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082 (Object_t * __this /* static, unused */, Rigidbody2D_t324 * ___self, Vector2_t97 * ___force, Vector2_t97 * ___position, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082_ftn) (Rigidbody2D_t324 *, Vector2_t97 *, Vector2_t97 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t324 * Collider2D_get_attachedRigidbody_m13083 (Collider2D_t195 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t324 * (*Collider2D_get_attachedRigidbody_m13083_ftn) (Collider2D_t195 *);
	static Collider2D_get_attachedRigidbody_m13083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m13083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
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
extern "C" bool NavMeshAgent_SetDestination_m2879 (NavMeshAgent_t297 * __this, Vector3_t53  ___target, const MethodInfo* method)
{
	{
		bool L_0 = NavMeshAgent_INTERNAL_CALL_SetDestination_m13084(NULL /*static, unused*/, __this, (&___target), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m13084 (Object_t * __this /* static, unused */, NavMeshAgent_t297 * ___self, Vector3_t53 * ___target, const MethodInfo* method)
{
	typedef bool (*NavMeshAgent_INTERNAL_CALL_SetDestination_m13084_ftn) (NavMeshAgent_t297 *, Vector3_t53 *);
	static NavMeshAgent_INTERNAL_CALL_SetDestination_m13084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_SetDestination_m13084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___target);
}
// System.Single UnityEngine.NavMeshAgent::get_remainingDistance()
extern "C" float NavMeshAgent_get_remainingDistance_m2872 (NavMeshAgent_t297 * __this, const MethodInfo* method)
{
	typedef float (*NavMeshAgent_get_remainingDistance_m2872_ftn) (NavMeshAgent_t297 *);
	static NavMeshAgent_get_remainingDistance_m2872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m2872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::get_remainingDistance()");
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
extern "C" void AudioConfigurationChangeHandler__ctor_m13085 (AudioConfigurationChangeHandler_t2795 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m13086 (AudioConfigurationChangeHandler_t2795 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m13086((AudioConfigurationChangeHandler_t2795 *)__this->___prev_9,___deviceWasChanged, method);
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
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t2795(Il2CppObject* delegate, bool ___deviceWasChanged)
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
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m13087 (AudioConfigurationChangeHandler_t2795 * __this, bool ___deviceWasChanged, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m13088 (AudioConfigurationChangeHandler_t2795 * __this, Object_t * ___result, const MethodInfo* method)
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
extern TypeInfo* AudioSettings_t2796_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m13089 (AudioSettings_t2796 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t2796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5733);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t2795 * L_0 = ((AudioSettings_t2796_StaticFields*)AudioSettings_t2796_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t2795 * L_1 = ((AudioSettings_t2796_StaticFields*)AudioSettings_t2796_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
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
extern "C" void PCMReaderCallback__ctor_m13090 (PCMReaderCallback_t2798 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m13091 (PCMReaderCallback_t2798 * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m13091((PCMReaderCallback_t2798 *)__this->___prev_9,___data, method);
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
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t2798(Il2CppObject* delegate, SingleU5BU5D_t168* ___data)
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
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m13092 (PCMReaderCallback_t2798 * __this, SingleU5BU5D_t168* ___data, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m13093 (PCMReaderCallback_t2798 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void PCMSetPositionCallback__ctor_m13094 (PCMSetPositionCallback_t2799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m13095 (PCMSetPositionCallback_t2799 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m13095((PCMSetPositionCallback_t2799 *)__this->___prev_9,___position, method);
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
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t2799(Il2CppObject* delegate, int32_t ___position)
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
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m13096 (PCMSetPositionCallback_t2799 * __this, int32_t ___position, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void PCMSetPositionCallback_EndInvoke_m13097 (PCMSetPositionCallback_t2799 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m5478 (AudioClip_t261 * __this, const MethodInfo* method)
{
	typedef float (*AudioClip_get_length_m5478_ftn) (AudioClip_t261 *);
	static AudioClip_get_length_m5478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m5478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m13098 (AudioClip_t261 * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t2798 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t2798 * L_1 = (__this->___m_PCMReaderCallback_2);
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
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m13099 (AudioClip_t261 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t2799 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t2799 * L_1 = (__this->___m_PCMSetPositionCallback_3);
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
extern "C" float AudioSource_get_volume_m5461 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m5461_ftn) (AudioSource_t262 *);
	static AudioSource_get_volume_m5461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m5461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m5462 (AudioSource_t262 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m5462_ftn) (AudioSource_t262 *, float);
	static AudioSource_set_volume_m5462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m5462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t261 * AudioSource_get_clip_m5481 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef AudioClip_t261 * (*AudioSource_get_clip_m5481_ftn) (AudioSource_t262 *);
	static AudioSource_get_clip_m5481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m5481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m3069 (AudioSource_t262 * __this, AudioClip_t261 * ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m3069_ftn) (AudioSource_t262 *, AudioClip_t261 *);
	static AudioSource_set_clip_m3069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m3069_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m13100 (AudioSource_t262 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m13100_ftn) (AudioSource_t262 *, uint64_t);
	static AudioSource_Play_m13100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m13100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m3070 (AudioSource_t262 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m13100(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m5482 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m5482_ftn) (AudioSource_t262 *);
	static AudioSource_Stop_m5482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m5482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m5479 (AudioSource_t262 * __this, const MethodInfo* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m13101(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_Pause_m13101 (Object_t * __this /* static, unused */, AudioSource_t262 * ___self, const MethodInfo* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m13101_ftn) (AudioSource_t262 *);
	static AudioSource_INTERNAL_CALL_Pause_m13101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m13101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m5480 (AudioSource_t262 * __this, const MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m5480_ftn) (AudioSource_t262 *);
	static AudioSource_get_isPlaying_m5480_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m5480_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m13102 (AudioSource_t262 * __this, AudioClip_t261 * ___clip, float ___volumeScale, const MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m13102_ftn) (AudioSource_t262 *, AudioClip_t261 *, float);
	static AudioSource_PlayOneShot_m13102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m13102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m2784 (AudioSource_t262 * __this, AudioClip_t261 * ___clip, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t261 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m13102(__this, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" String_t* WebCamDevice_get_name_m13103 (WebCamDevice_t2800 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m13104 (WebCamDevice_t2800 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t2800_marshal(const WebCamDevice_t2800& unmarshaled, WebCamDevice_t2800_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t2800_marshal_back(const WebCamDevice_t2800_marshaled& marshaled, WebCamDevice_t2800& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t2800_marshal_cleanup(WebCamDevice_t2800_marshaled& marshaled)
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
extern "C" void AnimationEvent__ctor_m13105 (AnimationEvent_t2803 * __this, const MethodInfo* method)
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
		__this->___m_ObjectReferenceParameter_3 = (Object_t563 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t641 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m13106 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m13107 (AnimationEvent_t2803 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m13108 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m13109 (AnimationEvent_t2803 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m13110 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m13111 (AnimationEvent_t2803 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m13112 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m13113 (AnimationEvent_t2803 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t563 * AnimationEvent_get_objectReferenceParameter_m13114 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m13115 (AnimationEvent_t2803 * __this, Object_t563 * ___value, const MethodInfo* method)
{
	{
		Object_t563 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m13116 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m13117 (AnimationEvent_t2803 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m13118 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m13119 (AnimationEvent_t2803 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m13120 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m13121 (AnimationEvent_t2803 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m13122 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m13123 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t641 * AnimationEvent_get_animationState_m13124 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m13122(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2728(NULL /*static, unused*/, (String_t*) &_stringLiteral3310, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t641 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" AnimatorStateInfo_t556  AnimationEvent_get_animatorStateInfo_m13125 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m13123(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2728(NULL /*static, unused*/, (String_t*) &_stringLiteral3311, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t556  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" AnimatorClipInfo_t2804  AnimationEvent_get_animatorClipInfo_m13126 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m13123(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m2728(NULL /*static, unused*/, (String_t*) &_stringLiteral3312, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t2804  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m13127 (AnimationEvent_t2803 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m13116(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m13118(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m13693((&V_1), /*hidden argument*/NULL);
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
extern "C" float AnimationClip_get_length_m2940 (AnimationClip_t296 * __this, const MethodInfo* method)
{
	typedef float (*AnimationClip_get_length_m2940_ftn) (AnimationClip_t296 *);
	static AnimationClip_get_length_m2940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m2940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
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
extern "C" void Keyframe__ctor_m2585 (Keyframe_t580 * __this, float ___time, float ___value, const MethodInfo* method)
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
extern "C" void Keyframe__ctor_m3258 (Keyframe_t580 * __this, float ___time, float ___value, float ___inTangent, float ___outTangent, const MethodInfo* method)
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
extern "C" void Keyframe_set_time_m2507 (Keyframe_t580 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C" void Keyframe_set_value_m2503 (Keyframe_t580 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Value_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C" void Keyframe_set_inTangent_m2504 (Keyframe_t580 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_InTangent_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C" void Keyframe_set_outTangent_m2505 (Keyframe_t580 * __this, float ___value, const MethodInfo* method)
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
extern "C" void AnimationCurve__ctor_m2509 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t579* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t579* L_0 = ___keys;
		AnimationCurve_Init_m13132(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2508 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m13132(__this, (KeyframeU5BU5D_t579*)(KeyframeU5BU5D_t579*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m13128 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m13128_ftn) (AnimationCurve_t98 *);
	static AnimationCurve_Cleanup_m13128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m13128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m13129 (AnimationCurve_t98 * __this, const MethodInfo* method)
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
		AnimationCurve_Cleanup_m13128(__this, /*hidden argument*/NULL);
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
extern "C" float AnimationCurve_Evaluate_m2501 (AnimationCurve_t98 * __this, float ___time, const MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m2501_ftn) (AnimationCurve_t98 *, float);
	static AnimationCurve_Evaluate_m2501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m2501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t579* AnimationCurve_get_keys_m2502 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	{
		KeyframeU5BU5D_t579* L_0 = AnimationCurve_GetKeys_m13131(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_set_keys_m2506 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t579* ___value, const MethodInfo* method)
{
	{
		KeyframeU5BU5D_t579* L_0 = ___value;
		AnimationCurve_SetKeys_m13130(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_SetKeys_m13130 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t579* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_SetKeys_m13130_ftn) (AnimationCurve_t98 *, KeyframeU5BU5D_t579*);
	static AnimationCurve_SetKeys_m13130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_SetKeys_m13130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t579* AnimationCurve_GetKeys_m13131 (AnimationCurve_t98 * __this, const MethodInfo* method)
{
	typedef KeyframeU5BU5D_t579* (*AnimationCurve_GetKeys_m13131_ftn) (AnimationCurve_t98 *);
	static AnimationCurve_GetKeys_m13131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKeys_m13131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKeys()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m13132 (AnimationCurve_t98 * __this, KeyframeU5BU5D_t579* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m13132_ftn) (AnimationCurve_t98 *, KeyframeU5BU5D_t579*);
	static AnimationCurve_Init_m13132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m13132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
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
extern "C" void Enumerator__ctor_m13133 (Enumerator_t2806 * __this, Animation_t298 * ___outer, const MethodInfo* method)
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
extern "C" Object_t * Enumerator_get_Current_m13134 (Enumerator_t2806 * __this, const MethodInfo* method)
{
	{
		Animation_t298 * L_0 = (__this->___m_Outer_0);
		int32_t L_1 = (__this->___m_CurrentIndex_1);
		NullCheck(L_0);
		AnimationState_t641 * L_2 = Animation_GetStateAtIndex_m13141(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m13135 (Enumerator_t2806 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Animation_t298 * L_0 = (__this->___m_Outer_0);
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m13142(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___m_CurrentIndex_1);
		__this->___m_CurrentIndex_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->___m_CurrentIndex_1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C" AnimationClip_t296 * Animation_get_clip_m5497 (Animation_t298 * __this, const MethodInfo* method)
{
	typedef AnimationClip_t296 * (*Animation_get_clip_m5497_ftn) (Animation_t298 *);
	static Animation_get_clip_m5497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_clip_m5497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_clip()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t641 * Animation_get_Item_m2934 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		AnimationState_t641 * L_1 = Animation_GetState_m13140(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" void Animation_CrossFade_m13136 (Animation_t298 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Animation_CrossFade_m13136_ftn) (Animation_t298 *, String_t*, float, int32_t);
	static Animation_CrossFade_m13136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_m13136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation, ___fadeLength, ___mode);
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" void Animation_CrossFade_m2873 (Animation_t298 * __this, String_t* ___animation, const MethodInfo* method)
{
	int32_t V_0 = {0};
	float V_1 = 0.0f;
	{
		V_0 = 0;
		V_1 = (0.3f);
		String_t* L_0 = ___animation;
		float L_1 = V_1;
		int32_t L_2 = V_0;
		Animation_CrossFade_m13136(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" void Animation_AddClip_m2933 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, const MethodInfo* method)
{
	{
		AnimationClip_t296 * L_0 = ___clip;
		String_t* L_1 = ___newName;
		Animation_AddClip_m13138(__this, L_0, L_1, ((int32_t)-2147483648), ((int32_t)2147483647), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" void Animation_AddClip_m13137 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, bool ___addLoopFrame, const MethodInfo* method)
{
	typedef void (*Animation_AddClip_m13137_ftn) (Animation_t298 *, AnimationClip_t296 *, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m13137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m13137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___clip, ___newName, ___firstFrame, ___lastFrame, ___addLoopFrame);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" void Animation_AddClip_m13138 (Animation_t298 * __this, AnimationClip_t296 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		AnimationClip_t296 * L_0 = ___clip;
		String_t* L_1 = ___newName;
		int32_t L_2 = ___firstFrame;
		int32_t L_3 = ___lastFrame;
		bool L_4 = V_0;
		Animation_AddClip_m13137(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern TypeInfo* Enumerator_t2806_il2cpp_TypeInfo_var;
extern "C" Object_t * Animation_GetEnumerator_m13139 (Animation_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5734);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2806 * L_0 = (Enumerator_t2806 *)il2cpp_codegen_object_new (Enumerator_t2806_il2cpp_TypeInfo_var);
		Enumerator__ctor_m13133(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t641 * Animation_GetState_m13140 (Animation_t298 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef AnimationState_t641 * (*Animation_GetState_m13140_ftn) (Animation_t298 *, String_t*);
	static Animation_GetState_m13140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_m13140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t641 * Animation_GetStateAtIndex_m13141 (Animation_t298 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef AnimationState_t641 * (*Animation_GetStateAtIndex_m13141_ftn) (Animation_t298 *, int32_t);
	static Animation_GetStateAtIndex_m13141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m13141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m13142 (Animation_t298 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animation_GetStateCount_m13142_ftn) (Animation_t298 *);
	static Animation_GetStateCount_m13142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m13142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C" void AnimationState_set_wrapMode_m3038 (AnimationState_t641 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_wrapMode_m3038_ftn) (AnimationState_t641 *, int32_t);
	static AnimationState_set_wrapMode_m3038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_wrapMode_m3038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" void AnimationState_set_time_m3039 (AnimationState_t641 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_time_m3039_ftn) (AnimationState_t641 *, float);
	static AnimationState_set_time_m3039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m3039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" void AnimationState_set_speed_m2941 (AnimationState_t641 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_speed_m2941_ftn) (AnimationState_t641 *, float);
	static AnimationState_set_speed_m2941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m2941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AnimationState::get_length()
extern "C" float AnimationState_get_length_m5456 (AnimationState_t641 * __this, const MethodInfo* method)
{
	typedef float (*AnimationState_get_length_m5456_ftn) (AnimationState_t641 *);
	static AnimationState_get_length_m5456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m5456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C" void AnimationState_set_layer_m2935 (AnimationState_t641 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_layer_m2935_ftn) (AnimationState_t641 *, int32_t);
	static AnimationState_set_layer_m2935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_layer_m2935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
extern "C" void AnimationState_AddMixingTransform_m13143 (AnimationState_t641 * __this, Transform_t54 * ___mix, bool ___recursive, const MethodInfo* method)
{
	typedef void (*AnimationState_AddMixingTransform_m13143_ftn) (AnimationState_t641 *, Transform_t54 *, bool);
	static AnimationState_AddMixingTransform_m13143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_AddMixingTransform_m13143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___mix, ___recursive);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform)
extern "C" void AnimationState_AddMixingTransform_m2936 (AnimationState_t641 * __this, Transform_t54 * ___mix, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		Transform_t54 * L_0 = ___mix;
		bool L_1 = V_0;
		AnimationState_AddMixingTransform_m13143(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.AnimationState::get_name()
extern "C" String_t* AnimationState_get_name_m5509 (AnimationState_t641 * __this, const MethodInfo* method)
{
	typedef String_t* (*AnimationState_get_name_m5509_ftn) (AnimationState_t641 *);
	static AnimationState_get_name_m5509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_name_m5509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_name()");
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
extern "C" bool AnimatorStateInfo_IsName_m3078 (AnimatorStateInfo_t556 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m2849 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m13144 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m13145 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m13146 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m2703 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m13147 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m13148 (AnimatorStateInfo_t556 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m13149 (AnimatorStateInfo_t556 * __this, const MethodInfo* method)
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
extern "C" bool AnimatorTransitionInfo_IsName_m13150 (AnimatorTransitionInfo_t2808 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
extern "C" bool AnimatorTransitionInfo_IsUserName_m13151 (AnimatorTransitionInfo_t2808 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m13152 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m13153 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m13154 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m13155 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m13156 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m13157 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m13158 (AnimatorTransitionInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t2808_marshal(const AnimatorTransitionInfo_t2808& unmarshaled, AnimatorTransitionInfo_t2808_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t2808_marshal_back(const AnimatorTransitionInfo_t2808_marshaled& marshaled, AnimatorTransitionInfo_t2808& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t2808_marshal_cleanup(AnimatorTransitionInfo_t2808_marshaled& marshaled)
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
extern "C" float Animator_GetFloat_m3023 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = Animator_GetFloatString_m13165(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C" float Animator_GetFloat_m5476 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		float L_1 = Animator_GetFloatID_m13166(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m3060 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		Animator_SetFloatString_m13163(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloat_m3079 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		float L_2 = ___dampTime;
		float L_3 = ___deltaTime;
		Animator_SetFloatStringDamp_m13173(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C" void Animator_SetFloat_m5477 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		float L_1 = ___value;
		Animator_SetFloatID_m13164(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m3020 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = Animator_GetBoolString_m13168(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m2953 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m13167(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" int32_t Animator_GetInteger_m3022 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_GetIntegerString_m13170(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" void Animator_SetInteger_m3252 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		Animator_SetIntegerString_m13169(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m2697 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m13171(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2700 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m13172(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" void Animator_set_applyRootMotion_m3246 (Animator_t214 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_set_applyRootMotion_m3246_ftn) (Animator_t214 *, bool);
	static Animator_set_applyRootMotion_m3246_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_m3246_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" int32_t Animator_get_layerCount_m3076 (Animator_t214 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animator_get_layerCount_m3076_ftn) (Animator_t214 *);
	static Animator_get_layerCount_m3076_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m3076_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C" float Animator_GetLayerWeight_m3251 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method)
{
	typedef float (*Animator_GetLayerWeight_m3251_ftn) (Animator_t214 *, int32_t);
	static Animator_GetLayerWeight_m3251_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m3251_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" void Animator_SetLayerWeight_m3077 (Animator_t214 * __this, int32_t ___layerIndex, float ___weight, const MethodInfo* method)
{
	typedef void (*Animator_SetLayerWeight_m3077_ftn) (Animator_t214 *, int32_t, float);
	static Animator_SetLayerWeight_m3077_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m3077_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex, ___weight);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t556  Animator_GetCurrentAnimatorStateInfo_m2702 (Animator_t214 * __this, int32_t ___layerIndex, const MethodInfo* method)
{
	typedef AnimatorStateInfo_t556  (*Animator_GetCurrentAnimatorStateInfo_m2702_ftn) (Animator_t214 *, int32_t);
	static Animator_GetCurrentAnimatorStateInfo_m2702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorStateInfo_m2702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
extern "C" void Animator_CrossFade_m5460 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName;
		float L_1 = ___transitionDuration;
		int32_t L_2 = ___layer;
		float L_3 = V_0;
		Animator_CrossFade_m13159(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" void Animator_CrossFade_m5548 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, const MethodInfo* method)
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
		Animator_CrossFade_m13159(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m13159 (Animator_t214 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___transitionDuration;
		int32_t L_3 = ___layer;
		float L_4 = ___normalizedTime;
		Animator_CrossFade_m13160(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m13160 (Animator_t214 * __this, int32_t ___stateNameHash, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_CrossFade_m13160_ftn) (Animator_t214 *, int32_t, float, int32_t, float);
	static Animator_CrossFade_m13160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m13160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___transitionDuration, ___layer, ___normalizedTime);
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
extern "C" void Animator_Play_m5459 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName;
		int32_t L_1 = ___layer;
		float L_2 = V_0;
		Animator_Play_m13161(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m13161 (Animator_t214 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m5475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer;
		float L_3 = ___normalizedTime;
		Animator_Play_m13162(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m13162 (Animator_t214 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_Play_m13162_ftn) (Animator_t214 *, int32_t, int32_t, float);
	static Animator_Play_m13162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m13162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___layer, ___normalizedTime);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t1125 * Animator_get_runtimeAnimatorController_m9546 (Animator_t214 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t1125 * (*Animator_get_runtimeAnimatorController_m9546_ftn) (Animator_t214 *);
	static Animator_get_runtimeAnimatorController_m9546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m9546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C" void Animator_set_runtimeAnimatorController_m5458 (Animator_t214 * __this, RuntimeAnimatorController_t1125 * ___value, const MethodInfo* method)
{
	typedef void (*Animator_set_runtimeAnimatorController_m5458_ftn) (Animator_t214 *, RuntimeAnimatorController_t1125 *);
	static Animator_set_runtimeAnimatorController_m5458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m5458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m5475 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m5475_ftn) (String_t*);
	static Animator_StringToHash_m5475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m5475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m13163 (Animator_t214 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatString_m13163_ftn) (Animator_t214 *, String_t*, float);
	static Animator_SetFloatString_m13163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m13163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" void Animator_SetFloatID_m13164 (Animator_t214 * __this, int32_t ___id, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatID_m13164_ftn) (Animator_t214 *, int32_t, float);
	static Animator_SetFloatID_m13164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m13164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id, ___value);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" float Animator_GetFloatString_m13165 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef float (*Animator_GetFloatString_m13165_ftn) (Animator_t214 *, String_t*);
	static Animator_GetFloatString_m13165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_m13165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" float Animator_GetFloatID_m13166 (Animator_t214 * __this, int32_t ___id, const MethodInfo* method)
{
	typedef float (*Animator_GetFloatID_m13166_ftn) (Animator_t214 *, int32_t);
	static Animator_GetFloatID_m13166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m13166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	return _il2cpp_icall_func(__this, ___id);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m13167 (Animator_t214 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m13167_ftn) (Animator_t214 *, String_t*, bool);
	static Animator_SetBoolString_m13167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m13167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m13168 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Animator_GetBoolString_m13168_ftn) (Animator_t214 *, String_t*);
	static Animator_GetBoolString_m13168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m13168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m13169 (Animator_t214 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetIntegerString_m13169_ftn) (Animator_t214 *, String_t*, int32_t);
	static Animator_SetIntegerString_m13169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m13169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" int32_t Animator_GetIntegerString_m13170 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_GetIntegerString_m13170_ftn) (Animator_t214 *, String_t*);
	static Animator_GetIntegerString_m13170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m13170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m13171 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m13171_ftn) (Animator_t214 *, String_t*);
	static Animator_SetTriggerString_m13171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m13171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m13172 (Animator_t214 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m13172_ftn) (Animator_t214 *, String_t*);
	static Animator_ResetTriggerString_m13172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m13172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloatStringDamp_m13173 (Animator_t214 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatStringDamp_m13173_ftn) (Animator_t214 *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m13173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m13173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
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
void SkeletonBone_t2809_marshal(const SkeletonBone_t2809& unmarshaled, SkeletonBone_t2809_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t2809_marshal_back(const SkeletonBone_t2809_marshaled& marshaled, SkeletonBone_t2809& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t2809_marshal_cleanup(SkeletonBone_t2809_marshaled& marshaled)
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
extern "C" String_t* HumanBone_get_boneName_m13174 (HumanBone_t2811 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m13175 (HumanBone_t2811 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m13176 (HumanBone_t2811 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m13177 (HumanBone_t2811 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t2811_marshal(const HumanBone_t2811& unmarshaled, HumanBone_t2811_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t2811_marshal_back(const HumanBone_t2811_marshaled& marshaled, HumanBone_t2811& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t2811_marshal_cleanup(HumanBone_t2811_marshaled& marshaled)
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
extern "C" void TerrainData_INTERNAL_get_size_m13178 (TerrainData_t569 * __this, Vector3_t53 * ___value, const MethodInfo* method)
{
	typedef void (*TerrainData_INTERNAL_get_size_m13178_ftn) (TerrainData_t569 *, Vector3_t53 *);
	static TerrainData_INTERNAL_get_size_m13178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_INTERNAL_get_size_m13178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::INTERNAL_get_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C" Vector3_t53  TerrainData_get_size_m2388 (TerrainData_t569 * __this, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		TerrainData_INTERNAL_get_size_m13178(__this, (&V_0), /*hidden argument*/NULL);
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
extern "C" TerrainData_t569 * Terrain_get_terrainData_m2387 (Terrain_t58 * __this, const MethodInfo* method)
{
	typedef TerrainData_t569 * (*Terrain_get_terrainData_m2387_ftn) (Terrain_t58 *);
	static Terrain_get_terrainData_m2387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m2387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m2393 (Terrain_t58 * __this, Vector3_t53  ___worldPosition, const MethodInfo* method)
{
	{
		float L_0 = Terrain_INTERNAL_CALL_SampleHeight_m13179(NULL /*static, unused*/, __this, (&___worldPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Terrain::INTERNAL_CALL_SampleHeight(UnityEngine.Terrain,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_SampleHeight_m13179 (Object_t * __this /* static, unused */, Terrain_t58 * ___self, Vector3_t53 * ___worldPosition, const MethodInfo* method)
{
	typedef float (*Terrain_INTERNAL_CALL_SampleHeight_m13179_ftn) (Terrain_t58 *, Vector3_t53 *);
	static Terrain_INTERNAL_CALL_SampleHeight_m13179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_INTERNAL_CALL_SampleHeight_m13179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::INTERNAL_CALL_SampleHeight(UnityEngine.Terrain,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___worldPosition);
}
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t58 * Terrain_get_activeTerrain_m2392 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Terrain_t58 * (*Terrain_get_activeTerrain_m2392_ftn) ();
	static Terrain_get_activeTerrain_m2392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrain_m2392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrain()");
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
extern "C" void TextMesh_set_text_m3284 (TextMesh_t528 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m3284_ftn) (TextMesh_t528 *, String_t*);
	static TextMesh_set_text_m3284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m3284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_font(UnityEngine.Font)
extern "C" void TextMesh_set_font_m3281 (TextMesh_t528 * __this, Font_t529 * ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_font_m3281_ftn) (TextMesh_t528 *, Font_t529 *);
	static TextMesh_set_font_m3281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_font_m3281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_font(UnityEngine.Font)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
extern "C" void TextMesh_set_anchor_m3282 (TextMesh_t528 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_anchor_m3282_ftn) (TextMesh_t528 *, int32_t);
	static TextMesh_set_anchor_m3282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_anchor_m3282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_characterSize(System.Single)
extern "C" void TextMesh_set_characterSize_m3283 (TextMesh_t528 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_characterSize_m3283_ftn) (TextMesh_t528 *, float);
	static TextMesh_set_characterSize_m3283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_characterSize_m3283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_characterSize(System.Single)");
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
extern "C" int32_t CharacterInfo_get_advance_m13180 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m13181 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2641(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m13182 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2781(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m13183 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m13184 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t201 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m5555(L_1, /*hidden argument*/NULL);
		Rect_t201 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2781(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m13185 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t201 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m5555(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m13186 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m13187 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2641(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeftUnFlipped_m13188 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m5555(L_2, /*hidden argument*/NULL);
		Vector2_t97  L_4 = {0};
		Vector2__ctor_m2330(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRightUnFlipped_m13189 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2641(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m5555(L_4, /*hidden argument*/NULL);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2330(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRightUnFlipped_m13190 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2641(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m5555(L_4, /*hidden argument*/NULL);
		Rect_t201 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2781(L_6, /*hidden argument*/NULL);
		Vector2_t97  L_8 = {0};
		Vector2__ctor_m2330(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeftUnFlipped_m13191 (CharacterInfo_t2812 * __this, const MethodInfo* method)
{
	{
		Rect_t201 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m5554(L_0, /*hidden argument*/NULL);
		Rect_t201 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m5555(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2781(L_4, /*hidden argument*/NULL);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2330(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeft_m13192 (CharacterInfo_t2812 * __this, const MethodInfo* method)
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
		Vector2_t97  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m13188(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m13188(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRight_m13193 (CharacterInfo_t2812 * __this, const MethodInfo* method)
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
		Vector2_t97  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m13191(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m13189(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRight_m13194 (CharacterInfo_t2812 * __this, const MethodInfo* method)
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
		Vector2_t97  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m13190(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m13190(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeft_m13195 (CharacterInfo_t2812 * __this, const MethodInfo* method)
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
		Vector2_t97  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m13189(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t97  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m13191(__this, /*hidden argument*/NULL);
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
void CharacterInfo_t2812_marshal(const CharacterInfo_t2812& unmarshaled, CharacterInfo_t2812_marshaled& marshaled)
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
void CharacterInfo_t2812_marshal_back(const CharacterInfo_t2812_marshaled& marshaled, CharacterInfo_t2812& unmarshaled)
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
void CharacterInfo_t2812_marshal_cleanup(CharacterInfo_t2812_marshaled& marshaled)
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
extern "C" void FontTextureRebuildCallback__ctor_m13196 (FontTextureRebuildCallback_t2813 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m13197 (FontTextureRebuildCallback_t2813 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m13197((FontTextureRebuildCallback_t2813 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t2813(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m13198 (FontTextureRebuildCallback_t2813 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m13199 (FontTextureRebuildCallback_t2813 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_10.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_10MethodDeclarations.h"


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t2162_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m9355 (Object_t * __this /* static, unused */, Action_1_t2162 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		Action_1_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3996);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t2162 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t2162 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Combine_m2440(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t2162 *)Castclass(L_2, Action_1_t2162_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t2162_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m13200 (Object_t * __this /* static, unused */, Action_1_t2162 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		Action_1_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3996);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t2162 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t2162 * L_1 = ___value;
		Delegate_t572 * L_2 = Delegate_Remove_m2441(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t2162 *)Castclass(L_2, Action_1_t2162_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t48 * Font_get_material_m3280 (Font_t529 * __this, const MethodInfo* method)
{
	typedef Material_t48 * (*Font_get_material_m3280_ftn) (Font_t529 *);
	static Font_get_material_m3280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m3280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m9470 (Font_t529 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m9470_ftn) (Font_t529 *, uint16_t);
	static Font_HasCharacter_m9470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m9470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m13201 (Object_t * __this /* static, unused */, Font_t529 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t2162 * V_0 = {0};
	{
		Action_1_t2162 * L_0 = ((Font_t529_StaticFields*)Font_t529_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t2162 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t2162 * L_2 = V_0;
		Font_t529 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t529 * >::Invoke(11 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		Font_t529 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t2813 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t529 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t2813 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m9556 (Font_t529 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m9556_ftn) (Font_t529 *);
	static Font_get_dynamic_m9556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m9556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m9558 (Font_t529 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m9558_ftn) (Font_t529 *);
	static Font_get_fontSize_m9558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m9558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
