#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
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
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_36.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_105.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_106.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Object
#include "mscorlib_System_Object.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_105MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_106MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m3649 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m5450(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t588_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t4787_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t4788_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m18011_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m18012_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m18013_MethodInfo_var;
extern "C" void TextGenerator__ctor_m5450 (TextGenerator_t586 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		List_1_t4787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8723);
		List_1_t4788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8724);
		List_1__ctor_m18011_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485396);
		List_1__ctor_m18012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485397);
		List_1__ctor_m18013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485398);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t588 * L_1 = (List_1_t588 *)il2cpp_codegen_object_new (List_1_t588_il2cpp_TypeInfo_var);
		List_1__ctor_m18011(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m18011_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t4787 * L_3 = (List_1_t4787 *)il2cpp_codegen_object_new (List_1_t4787_il2cpp_TypeInfo_var);
		List_1__ctor_m18012(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m18012_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t4788 * L_4 = (List_1_t4788 *)il2cpp_codegen_object_new (List_1_t4788_il2cpp_TypeInfo_var);
		List_1__ctor_m18013(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m18013_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m17500(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m17499 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m17501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m17500 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m17500_ftn) (TextGenerator_t586 *);
	static TextGenerator_Init_m17500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m17500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m17501 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m17501_ftn) (TextGenerator_t586 *);
	static TextGenerator_Dispose_cpp_m17501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m17501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m17502 (TextGenerator_t586 * __this, String_t* ___str, Font_t556 * ___font, Color_t121  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t97  ___extents, Vector2_t97  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t556 * L_1 = ___font;
		Color_t121  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m17503(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m17503 (TextGenerator_t586 * __this, String_t* ___str, Font_t556 * ___font, Color_t121  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t556 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504 (Object_t * __this /* static, unused */, TextGenerator_t586 * ___self, String_t* ___str, Font_t556 * ___font, Color_t121 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504_ftn) (TextGenerator_t586 *, String_t*, Font_t556 *, Color_t121 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t201  TextGenerator_get_rectExtents_m3699 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef Rect_t201  (*TextGenerator_get_rectExtents_m3699_ftn) (TextGenerator_t586 *);
	static TextGenerator_get_rectExtents_m3699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m3699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m17505 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m17505_ftn) (TextGenerator_t586 *);
	static TextGenerator_get_vertexCount_m17505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m17505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m17506 (TextGenerator_t586 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m17506_ftn) (TextGenerator_t586 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m17506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m17506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t584* TextGenerator_GetVerticesArray_m17507 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t584* (*TextGenerator_GetVerticesArray_m17507_ftn) (TextGenerator_t586 *);
	static TextGenerator_GetVerticesArray_m17507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m17507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m17508 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m17508_ftn) (TextGenerator_t586 *);
	static TextGenerator_get_characterCount_m17508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m17508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m3675 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3041(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m17505(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m3377(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m3008(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m17509 (TextGenerator_t586 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m17509_ftn) (TextGenerator_t586 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m17509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m17509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t4901* TextGenerator_GetCharactersArray_m17510 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t4901* (*TextGenerator_GetCharactersArray_m17510_ftn) (TextGenerator_t586 *);
	static TextGenerator_GetCharactersArray_m17510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m17510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m3673 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m3673_ftn) (TextGenerator_t586 *);
	static TextGenerator_get_lineCount_m3673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m3673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m17511 (TextGenerator_t586 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m17511_ftn) (TextGenerator_t586 *, Object_t *);
	static TextGenerator_GetLinesInternal_m17511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m17511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t4902* TextGenerator_GetLinesArray_m17512 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t4902* (*TextGenerator_GetLinesArray_m17512_ftn) (TextGenerator_t586 *);
	static TextGenerator_GetLinesArray_m17512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m17512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m3724 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m3724_ftn) (TextGenerator_t586 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m3724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m3724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m17513 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t800  TextGenerator_ValidatedSettings_m17514 (TextGenerator_t586 * __this, TextGenerationSettings_t800  ___settings, const MethodInfo* method)
{
	{
		Font_t556 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t556 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m5454(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t800  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m2940(NULL /*static, unused*/, (String_t*) &_stringLiteral4221, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m2940(NULL /*static, unused*/, (String_t*) &_stringLiteral4222, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t800  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m5453 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m17515 (TextGenerator_t586 * __this, List_1_t4787 * ___characters, const MethodInfo* method)
{
	{
		List_1_t4787 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m17509(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m17516 (TextGenerator_t586 * __this, List_1_t4788 * ___lines, const MethodInfo* method)
{
	{
		List_1_t4788 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m17511(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m17517 (TextGenerator_t586 * __this, List_1_t588 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t588 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m17506(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m5458 (TextGenerator_t586 * __this, String_t* ___str, TextGenerationSettings_t800  ___settings, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t800  L_1 = ___settings;
		TextGenerator_Populate_m3698(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t201  L_2 = TextGenerator_get_rectExtents_m3699(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2900((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m5459 (TextGenerator_t586 * __this, String_t* ___str, TextGenerationSettings_t800  ___settings, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t800  L_1 = ___settings;
		TextGenerator_Populate_m3698(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t201  L_2 = TextGenerator_get_rectExtents_m3699(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m3040((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m3698 (TextGenerator_t586 * __this, String_t* ___str, TextGenerationSettings_t800  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m2603(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t800  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m17922((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t800  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m17518(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m17518 (TextGenerator_t586 * __this, String_t* ___str, TextGenerationSettings_t800  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t800  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t800  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t800  L_2 = ___settings;
		TextGenerationSettings_t800  L_3 = TextGenerator_ValidatedSettings_m17514(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t556 * L_5 = ((&V_0)->___font_0);
		Color_t121  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t97  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t97  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m17502(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m5457 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t588 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m17517(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t588 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m3676 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t4787 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m17515(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t4787 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m3671 (TextGenerator_t586 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t4788 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m17516(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t4788 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m5307 (WillRenderCanvases_t1245 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m17519 (WillRenderCanvases_t1245 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m17519((WillRenderCanvases_t1245 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t1245(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m17520 (WillRenderCanvases_t1245 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m17521 (WillRenderCanvases_t1245 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t213_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t1245_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m5308 (Object_t * __this /* static, unused */, WillRenderCanvases_t1245 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		WillRenderCanvases_t1245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2116);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1245 * L_0 = ((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t1245 * L_1 = ___value;
		Delegate_t651 * L_2 = Delegate_Combine_m2699(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t1245 *)Castclass(L_2, WillRenderCanvases_t1245_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t213_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t1245_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m17522 (Object_t * __this /* static, unused */, WillRenderCanvases_t1245 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		WillRenderCanvases_t1245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2116);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1245 * L_0 = ((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t1245 * L_1 = ___value;
		Delegate_t651 * L_2 = Delegate_Remove_m2700(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t1245 *)Castclass(L_2, WillRenderCanvases_t1245_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m3670 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m3670_ftn) (Canvas_t213 *);
	static Canvas_get_renderMode_m3670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m3670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m5470 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m5470_ftn) (Canvas_t213 *);
	static Canvas_get_isRootCanvas_m5470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m5470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t384 * Canvas_get_worldCamera_m2950 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef Camera_t384 * (*Canvas_get_worldCamera_m2950_ftn) (Canvas_t213 *);
	static Canvas_get_worldCamera_m2950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
extern "C" void Canvas_set_worldCamera_m2951 (Canvas_t213 * __this, Camera_t384 * ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_worldCamera_m2951_ftn) (Canvas_t213 *, Camera_t384 *);
	static Canvas_set_worldCamera_m2951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_worldCamera_m2951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m5455 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m5455_ftn) (Canvas_t213 *);
	static Canvas_get_scaleFactor_m5455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m5455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m5473 (Canvas_t213 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m5473_ftn) (Canvas_t213 *, float);
	static Canvas_set_scaleFactor_m5473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m5473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m5372 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m5372_ftn) (Canvas_t213 *);
	static Canvas_get_referencePixelsPerUnit_m5372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m5372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m5474 (Canvas_t213 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m5474_ftn) (Canvas_t213 *, float);
	static Canvas_set_referencePixelsPerUnit_m5474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m5474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m5340 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m5340_ftn) (Canvas_t213 *);
	static Canvas_get_pixelPerfect_m5340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m5340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m5352 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m5352_ftn) (Canvas_t213 *);
	static Canvas_get_renderOrder_m5352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m5352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m5351 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m5351_ftn) (Canvas_t213 *);
	static Canvas_get_sortingOrder_m5351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m5351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m5355 (Canvas_t213 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m5355_ftn) (Canvas_t213 *);
	static Canvas_get_cachedSortingLayerValue_m5355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m5355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t48 * Canvas_GetDefaultCanvasMaterial_m5328 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t48 * (*Canvas_GetDefaultCanvasMaterial_m5328_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m5328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m5328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t48 * Canvas_GetDefaultCanvasTextMaterial_m5451 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t48 * (*Canvas_GetDefaultCanvasTextMaterial_m5451_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m5451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m5451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t213_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m17523 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1245 * L_0 = ((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t1245 * L_1 = ((Canvas_t213_StaticFields*)Canvas_t213_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m5418 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m17523(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"



// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m5440 (CanvasGroup_t211 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m5440_ftn) (CanvasGroup_t211 *);
	static CanvasGroup_get_interactable_m5440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m5440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m17524 (CanvasGroup_t211 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m17524_ftn) (CanvasGroup_t211 *);
	static CanvasGroup_get_blocksRaycasts_m17524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m17524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m5339 (CanvasGroup_t211 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m5339_ftn) (CanvasGroup_t211 *);
	static CanvasGroup_get_ignoreParentGroups_m5339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m5339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m17525 (CanvasGroup_t211 * __this, Vector2_t97  ___sp, Camera_t384 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m17524(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t585_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m17526 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t585  V_0 = {0};
	{
		Color32_t89  L_0 = {0};
		Color32__ctor_m5314(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t585_StaticFields*)UIVertex_t585_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t1235  L_1 = {0};
		Vector4__ctor_m5338(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t585_StaticFields*)UIVertex_t585_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t585_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t53  L_2 = Vector3_get_zero_m2626(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t53  L_3 = Vector3_get_back_m3351(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t1235  L_4 = ((UIVertex_t585_StaticFields*)UIVertex_t585_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t89  L_5 = ((UIVertex_t585_StaticFields*)UIVertex_t585_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t97  L_6 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t97  L_7 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t585  L_8 = V_0;
		((UIVertex_t585_StaticFields*)UIVertex_t585_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
#include "mscorlib_ArrayTypes.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m5345 (CanvasRenderer_t587 * __this, Color_t121  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m17527(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m17527 (Object_t * __this /* static, unused */, CanvasRenderer_t587 * ___self, Color_t121 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m17527_ftn) (CanvasRenderer_t587 *, Color_t121 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m17527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m17527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t121  CanvasRenderer_GetColor_m5343 (CanvasRenderer_t587 * __this, const MethodInfo* method)
{
	typedef Color_t121  (*CanvasRenderer_GetColor_m5343_ftn) (CanvasRenderer_t587 *);
	static CanvasRenderer_GetColor_m5343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m5343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m5503 (CanvasRenderer_t587 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m5503_ftn) (CanvasRenderer_t587 *, bool);
	static CanvasRenderer_set_isMask_m5503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m5503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m3705 (CanvasRenderer_t587 * __this, Material_t48 * ___material, Texture_t802 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m3705_ftn) (CanvasRenderer_t587 *, Material_t48 *, Texture_t802 *);
	static CanvasRenderer_SetMaterial_m3705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m3705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t792_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m5334 (CanvasRenderer_t587 * __this, List_1_t588 * ___vertices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		UInt16_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3764);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t588 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t21* L_2 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(UInt16_t792_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4223, L_2, /*hidden argument*/NULL);
		Debug_LogWarning_m3028(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		List_1_t588 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		List_1_t588 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m17528(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m17528 (CanvasRenderer_t587 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m17528_ftn) (CanvasRenderer_t587 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m17528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m17528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t792_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m3659 (CanvasRenderer_t587 * __this, UIVertexU5BU5D_t584* ___vertices, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		UInt16_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3764);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t21* L_1 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(UInt16_t792_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4223, L_1, /*hidden argument*/NULL);
		Debug_LogWarning_m3028(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t584* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m17529(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m17529 (CanvasRenderer_t587 * __this, UIVertexU5BU5D_t584* ___vertices, int32_t ___size, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m17529_ftn) (CanvasRenderer_t587 *, UIVertexU5BU5D_t584*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m17529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m17529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m5332 (CanvasRenderer_t587 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m5332_ftn) (CanvasRenderer_t587 *);
	static CanvasRenderer_Clear_m5332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m5332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m5329 (CanvasRenderer_t587 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m5329_ftn) (CanvasRenderer_t587 *);
	static CanvasRenderer_get_absoluteDepth_m5329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m5329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t92_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m17530 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t92_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t790_StaticFields*)RectTransformUtility_t790_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t92*)SZArrayNew(Vector3U5BU5D_t92_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m3679 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Vector2_t97  ___screenPoint, Camera_t384 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = ___rect;
		Camera_t384 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Vector2_t97 * ___screenPoint, Camera_t384 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531_ftn) (RectTransform_t259 *, Vector2_t97 *, Camera_t384 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" Vector2_t97  RectTransformUtility_PixelAdjustPoint_m5341 (Object_t * __this /* static, unused */, Vector2_t97  ___point, Transform_t54 * ___elementTransform, Canvas_t213 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	{
		Vector2_t97  L_0 = ___point;
		Transform_t54 * L_1 = ___elementTransform;
		Canvas_t213 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m17532(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m17532 (Object_t * __this /* static, unused */, Vector2_t97  ___point, Transform_t54 * ___elementTransform, Canvas_t213 * ___canvas, Vector2_t97 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t54 * L_0 = ___elementTransform;
		Canvas_t213 * L_1 = ___canvas;
		Vector2_t97 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533 (Object_t * __this /* static, unused */, Vector2_t97 * ___point, Transform_t54 * ___elementTransform, Canvas_t213 * ___canvas, Vector2_t97 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533_ftn) (Vector2_t97 *, Transform_t54 *, Canvas_t213 *, Vector2_t97 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t201  RectTransformUtility_PixelAdjustRect_m5342 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rectTransform, Canvas_t213 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t201  (*RectTransformUtility_PixelAdjustRect_m5342_ftn) (RectTransform_t259 *, Canvas_t213 *);
	static RectTransformUtility_PixelAdjustRect_m5342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m5342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m17534 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Vector2_t97  ___screenPoint, Camera_t384 * ___cam, Vector3_t53 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t319  V_0 = {0};
	Plane_t78  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t53 * L_0 = ___worldPoint;
		Vector2_t97  L_1 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_2 = Vector2_op_Implicit_m2744(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t384 * L_3 = ___cam;
		Vector2_t97  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		Ray_t319  L_5 = RectTransformUtility_ScreenPointToRay_m17535(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t259 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t69  L_7 = Transform_get_rotation_m2684(L_6, /*hidden argument*/NULL);
		Vector3_t53  L_8 = Vector3_get_back_m3351(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_9 = Quaternion_op_Multiply_m2642(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t259 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t53  L_11 = Transform_get_position_m2631(L_10, /*hidden argument*/NULL);
		Plane__ctor_m3135((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t319  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2877((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t53 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t53  L_16 = Ray_GetPoint_m2878((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m3621 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Vector2_t97  ___screenPoint, Camera_t384 * ___cam, Vector2_t97 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	{
		Vector2_t97 * L_0 = ___localPoint;
		Vector2_t97  L_1 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t259 * L_2 = ___rect;
		Vector2_t97  L_3 = ___screenPoint;
		Camera_t384 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m17534(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t97 * L_6 = ___localPoint;
		RectTransform_t259 * L_7 = ___rect;
		Vector3_t53  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t53  L_9 = Transform_InverseTransformPoint_m2689(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t97  L_10 = Vector2_op_Implicit_m2739(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t319  RectTransformUtility_ScreenPointToRay_m17535 (Object_t * __this /* static, unused */, Camera_t384 * ___cam, Vector2_t97  ___screenPos, const MethodInfo* method)
{
	Vector3_t53  V_0 = {0};
	{
		Camera_t384 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t384 * L_2 = ___cam;
		Vector2_t97  L_3 = ___screenPos;
		Vector3_t53  L_4 = Vector2_op_Implicit_m2744(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t319  L_5 = Camera_ScreenPointToRay_m3137(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t97  L_6 = ___screenPos;
		Vector3_t53  L_7 = Vector2_op_Implicit_m2744(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t53 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t53  L_10 = V_0;
		Vector3_t53  L_11 = Vector3_get_forward_m2752(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t319  L_12 = {0};
		Ray__ctor_m17087(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m5413 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t259 * V_1 = {0};
	Vector2_t97  V_2 = {0};
	Vector2_t97  V_3 = {0};
	Vector2_t97  V_4 = {0};
	Vector2_t97  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2636(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t259 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_5 = Transform_GetChild_m3373(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t259 *)IsInst(L_5, RectTransform_t259_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_6, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t259 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m5413(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t259 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2628(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t259 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t97  L_15 = RectTransform_get_pivot_m3712(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m5382((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m5387((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t259 * L_19 = ___rect;
		Vector2_t97  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m3717(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t259 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t97  L_23 = RectTransform_get_anchoredPosition_m3710(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m5382((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m5387((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t259 * L_27 = ___rect;
		Vector2_t97  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m3715(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t259 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t97  L_30 = RectTransform_get_anchorMin_m3707(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t259 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t97  L_32 = RectTransform_get_anchorMax_m3709(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m5382((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m5382((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m5387((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m5387((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t259 * L_40 = ___rect;
		Vector2_t97  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m3713(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t259 * L_42 = ___rect;
		Vector2_t97  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m3714(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t790_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m5412 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		RectTransformUtility_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t259 * V_1 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2636(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t259 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_5 = Transform_GetChild_m3373(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t259 *)IsInst(L_5, RectTransform_t259_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_6, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t259 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m5412(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t259 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2628(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t259 * L_13 = ___rect;
		RectTransform_t259 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t97  L_15 = RectTransform_get_pivot_m3712(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		Vector2_t97  L_16 = RectTransformUtility_GetTransposed_m17536(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m3717(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t259 * L_17 = ___rect;
		RectTransform_t259 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t97  L_19 = RectTransform_get_sizeDelta_m3711(L_18, /*hidden argument*/NULL);
		Vector2_t97  L_20 = RectTransformUtility_GetTransposed_m17536(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m3716(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t259 * L_22 = ___rect;
		RectTransform_t259 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t97  L_24 = RectTransform_get_anchoredPosition_m3710(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t790_il2cpp_TypeInfo_var);
		Vector2_t97  L_25 = RectTransformUtility_GetTransposed_m17536(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m3715(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t259 * L_26 = ___rect;
		RectTransform_t259 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t97  L_28 = RectTransform_get_anchorMin_m3707(L_27, /*hidden argument*/NULL);
		Vector2_t97  L_29 = RectTransformUtility_GetTransposed_m17536(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m3713(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t259 * L_30 = ___rect;
		RectTransform_t259 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t97  L_32 = RectTransform_get_anchorMax_m3709(L_31, /*hidden argument*/NULL);
		Vector2_t97  L_33 = RectTransformUtility_GetTransposed_m17536(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m3714(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t97  RectTransformUtility_GetTransposed_m17536 (Object_t * __this /* static, unused */, Vector2_t97  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t97  L_2 = {0};
		Vector2__ctor_m2589(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m17537 (Request_t4790 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m17538 (Request_t4790 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m17539 (Request_t4790 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m17540 (Request_t4790 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m17541 (Request_t4790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m129(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m17538(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m18014(L_5, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m17539(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m18014(L_10, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t21* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m17540(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4224, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m17542 (ResponseBase_t4791 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m17543 (ResponseBase_t4791 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m105(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral4225, /*hidden argument*/NULL);
		FormatException_t4176 * L_6 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m17544 (ResponseBase_t4791 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m18015(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m105(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4225, /*hidden argument*/NULL);
		FormatException_t4176 * L_7 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m17545 (ResponseBase_t4791 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m18016(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m105(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4225, /*hidden argument*/NULL);
		FormatException_t4176 * L_7 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m17546 (ResponseBase_t4791 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m18017(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m105(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4225, /*hidden argument*/NULL);
		FormatException_t4176 * L_7 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m17547 (ResponseBase_t4791 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m18018(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m105(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4225, /*hidden argument*/NULL);
		FormatException_t4176 * L_7 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m17548 (Response_t4792 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m17542(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m17549 (Response_t4792 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m17550 (Response_t4792 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m17551 (Response_t4792 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m17552 (Response_t4792 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m17553 (Response_t4792 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m129(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		bool L_3 = Response_get_success_m17549(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m17551(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4226, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m17554 (Response_t4792 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m17547(__this, (String_t*) &_stringLiteral1363, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m17550(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral4227, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m17552(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m17549(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m17551(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4228, L_9, /*hidden argument*/NULL);
		FormatException_t4176 * L_11 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m17555 (BasicResponse_t4793 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m17548(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m17556 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m17537(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m17557 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m17558 (CreateMatchRequest_t4795 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m17559 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m17560 (CreateMatchRequest_t4795 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m17561 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m17562 (CreateMatchRequest_t4795 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m17563 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m17564 (CreateMatchRequest_t4795 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t4794 * CreateMatchRequest_get_matchAttributes_m17565 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4794 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t2022_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m17566 (CreateMatchRequest_t4795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		UInt32_t2022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3765);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t21* G_B2_1 = {0};
	ObjectU5BU5D_t21* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t21* G_B1_1 = {0};
	ObjectU5BU5D_t21* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t21* G_B3_2 = {0};
	ObjectU5BU5D_t21* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t21* G_B5_1 = {0};
	ObjectU5BU5D_t21* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t21* G_B4_1 = {0};
	ObjectU5BU5D_t21* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t21* G_B6_2 = {0};
	ObjectU5BU5D_t21* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m17541(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m17557(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t21* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m17559(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t2022_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m17561(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t21* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m17563(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m2603(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral4229;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral4229;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral2876;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral2875;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t21* L_16 = G_B3_3;
		Dictionary_2_t4794 * L_17 = CreateMatchRequest_get_matchAttributes_m17565(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t4794 * L_18 = CreateMatchRequest_get_matchAttributes_m17565(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m17192(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m17567 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m17555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m17568 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m17569 (CreateMatchResponse_t4796 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m17570 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m17571 (CreateMatchResponse_t4796 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m17572 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m17573 (CreateMatchResponse_t4796 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m17574 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m17575 (CreateMatchResponse_t4796 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m17576 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m17577 (CreateMatchResponse_t4796 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m17578 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m17579 (CreateMatchResponse_t4796 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m17580 (CreateMatchResponse_t4796 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m17553(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m17568(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t21* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m17570(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m17572(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m18014(L_11, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t21* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m17576(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t4810_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m18014(L_16, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t21* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m17578(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4230, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m17581 (CreateMatchResponse_t4796 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m17554(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral3269, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m17569(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m17544(__this, (String_t*) &_stringLiteral4231, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m17571(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m17546(__this, (String_t*) &_stringLiteral4232, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m17573(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral4233, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m17575(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m17545(__this, (String_t*) &_stringLiteral4234, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m17577(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m17547(__this, (String_t*) &_stringLiteral4235, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m17579(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4236, L_22, /*hidden argument*/NULL);
		FormatException_t4176 * L_24 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m17582 (JoinMatchRequest_t4797 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m17537(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m17583 (JoinMatchRequest_t4797 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m17584 (JoinMatchRequest_t4797 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m17585 (JoinMatchRequest_t4797 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m17586 (JoinMatchRequest_t4797 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m17587 (JoinMatchRequest_t4797 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t21* G_B2_1 = {0};
	ObjectU5BU5D_t21* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t21* G_B1_1 = {0};
	ObjectU5BU5D_t21* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t21* G_B3_2 = {0};
	ObjectU5BU5D_t21* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m17541(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m17583(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m18014(L_5, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m17585(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m2603(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral4237;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral4237;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral2876;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral2875;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m17192(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m17588 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m17555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m17589 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m17590 (JoinMatchResponse_t4798 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m17591 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m17592 (JoinMatchResponse_t4798 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m17593 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m17594 (JoinMatchResponse_t4798 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m17595 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m17596 (JoinMatchResponse_t4798 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m17597 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m17598 (JoinMatchResponse_t4798 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m17599 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m17600 (JoinMatchResponse_t4798 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m17601 (JoinMatchResponse_t4798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m17553(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m17589(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t21* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m17591(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m17593(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m18014(L_11, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t21* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m17597(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t4810_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m18014(L_16, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t21* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m17599(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4230, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m17602 (JoinMatchResponse_t4798 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m17554(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral3269, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m17590(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m17544(__this, (String_t*) &_stringLiteral4231, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m17592(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m17546(__this, (String_t*) &_stringLiteral4232, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m17594(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral4233, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m17596(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m17545(__this, (String_t*) &_stringLiteral4234, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m17598(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m17547(__this, (String_t*) &_stringLiteral4235, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m17600(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4236, L_22, /*hidden argument*/NULL);
		FormatException_t4176 * L_24 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m17603 (DestroyMatchRequest_t4799 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m17537(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m17604 (DestroyMatchRequest_t4799 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m17605 (DestroyMatchRequest_t4799 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m17606 (DestroyMatchRequest_t4799 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m17541(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m17604(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m18014(L_5, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4238, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m17607 (DropConnectionRequest_t4800 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m17537(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m17608 (DropConnectionRequest_t4800 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m17609 (DropConnectionRequest_t4800 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m17610 (DropConnectionRequest_t4800 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m17611 (DropConnectionRequest_t4800 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m17612 (DropConnectionRequest_t4800 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m17541(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m17608(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m18014(L_5, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m17610(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t4810_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m18014(L_10, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4239, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m17613 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m17537(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m17614 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m17615 (ListMatchRequest_t4801 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m17616 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m17617 (ListMatchRequest_t4801 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m17618 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m17619 (ListMatchRequest_t4801 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t4794 * ListMatchRequest_get_matchAttributeFilterLessThan_m17620 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4794 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t4794 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m17621 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4794 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m17622 (ListMatchRequest_t4801 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t21* G_B2_1 = {0};
	ObjectU5BU5D_t21* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t21* G_B1_1 = {0};
	ObjectU5BU5D_t21* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t21* G_B3_2 = {0};
	ObjectU5BU5D_t21* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t21* G_B5_1 = {0};
	ObjectU5BU5D_t21* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t21* G_B4_1 = {0};
	ObjectU5BU5D_t21* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t21* G_B6_2 = {0};
	ObjectU5BU5D_t21* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m17541(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m17614(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m17616(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t21* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m17618(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t21* L_12 = L_10;
		Dictionary_2_t4794 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m17620(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral4240;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral4240;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t4794 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m17620(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t21* L_18 = G_B3_3;
		Dictionary_2_t4794 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m17621(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t4794 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m17621(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m17192(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m17623 (MatchDirectConnectInfo_t4802 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m17542(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m17624 (MatchDirectConnectInfo_t4802 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m17625 (MatchDirectConnectInfo_t4802 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m17626 (MatchDirectConnectInfo_t4802 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m17627 (MatchDirectConnectInfo_t4802 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m17628 (MatchDirectConnectInfo_t4802 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m17629 (MatchDirectConnectInfo_t4802 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m17630 (MatchDirectConnectInfo_t4802 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m129(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m17624(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t4810_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m17626(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m17628(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4241, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m17631 (MatchDirectConnectInfo_t4802 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m17545(__this, (String_t*) &_stringLiteral4234, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m17625(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral4242, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m17627(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral4243, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m17629(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4236, L_12, /*hidden argument*/NULL);
		FormatException_t4176 * L_14 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_107.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_107MethodDeclarations.h"
struct ResponseBase_t4791;
struct List_1_t4803;
struct String_t;
struct Object_t;
struct IDictionary_2_t1810;
struct ResponseBase_t4791;
struct List_1_t2;
struct String_t;
struct Object_t;
struct IDictionary_2_t1810;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t2 * ResponseBase_ParseJSONList_TisObject_t_m18020_gshared (ResponseBase_t4791 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m18020(__this, p0, p1, p2, method) (( List_1_t2 * (*) (ResponseBase_t4791 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m18020_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t4802_m18019(__this, p0, p1, p2, method) (( List_1_t4803 * (*) (ResponseBase_t4791 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m18020_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m17632 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m17542(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m17633 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m17634 (MatchDesc_t4804 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m17635 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m17636 (MatchDesc_t4804 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m17637 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m17638 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m17639 (MatchDesc_t4804 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m17640 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m17641 (MatchDesc_t4804 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m17642 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m17643 (MatchDesc_t4804 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t4794 * MatchDesc_get_matchAttributes_m17644 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4794 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m17645 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t4803 * MatchDesc_get_directConnectInfos_m17646 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	{
		List_1_t4803 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m17647 (MatchDesc_t4804 * __this, List_1_t4803 * ___value, const MethodInfo* method)
{
	{
		List_1_t4803 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDesc_ToString_m17648 (MatchDesc_t4804 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t21* G_B2_1 = {0};
	ObjectU5BU5D_t21* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t21* G_B1_1 = {0};
	ObjectU5BU5D_t21* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t21* G_B3_2 = {0};
	ObjectU5BU5D_t21* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m129(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m17633(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m18014(L_5, (String_t*) &_stringLiteral969, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m17635(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t21* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m17637(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t21* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m17638(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t21* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m17640(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t21* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m17642(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t21* L_25 = L_21;
		Dictionary_2_t4794 * L_26 = MatchDesc_get_matchAttributes_m17644(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral4244;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral4244;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t4794 * L_27 = MatchDesc_get_matchAttributes_m17644(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t21* L_31 = G_B3_3;
		List_1_t4803 * L_32 = MatchDesc_get_directConnectInfos_m17646(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m17192(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t4802_m18019_MethodInfo_var;
extern "C" void MatchDesc_Parse_m17649 (MatchDesc_t4804 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t4802_m18019_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485399);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m17546(__this, (String_t*) &_stringLiteral4232, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m17634(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m17543(__this, (String_t*) &_stringLiteral1528, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m17636(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m17544(__this, (String_t*) &_stringLiteral4245, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m17639(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m17544(__this, (String_t*) &_stringLiteral4246, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m17641(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m17547(__this, (String_t*) &_stringLiteral4247, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m17643(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t4803 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t4802_m18019(__this, (String_t*) &_stringLiteral4248, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t4802_m18019_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m17647(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4236, L_21, /*hidden argument*/NULL);
		FormatException_t4176 * L_23 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_108.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_108MethodDeclarations.h"
struct ResponseBase_t4791;
struct List_1_t4805;
struct String_t;
struct Object_t;
struct IDictionary_2_t1810;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t4804_m18021(__this, p0, p1, p2, method) (( List_1_t4805 * (*) (ResponseBase_t4791 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m18020_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m17650 (ListMatchResponse_t4806 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m17555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t4805 * ListMatchResponse_get_matches_m17651 (ListMatchResponse_t4806 * __this, const MethodInfo* method)
{
	{
		List_1_t4805 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m17652 (ListMatchResponse_t4806 * __this, List_1_t4805 * ___value, const MethodInfo* method)
{
	{
		List_1_t4805 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m17653 (ListMatchResponse_t4806 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m17553(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		List_1_t4805 * L_3 = ListMatchResponse_get_matches_m17651(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4249, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t4176_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t4804_m18021_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m17654 (ListMatchResponse_t4806 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t4176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6776);
		ResponseBase_ParseJSONList_TisMatchDesc_t4804_m18021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485400);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m17554(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t4805 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t4804_m18021(__this, (String_t*) &_stringLiteral4250, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t4804_m18021_MethodInfo_var);
		ListMatchResponse_set_matches_m17652(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4236, L_7, /*hidden argument*/NULL);
		FormatException_t4176 * L_9 = (FormatException_t4176 *)il2cpp_codegen_object_new (FormatException_t4176_il2cpp_TypeInfo_var);
		FormatException__ctor_m13236(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m17655 (NetworkAccessToken_t4811 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m17656 (NetworkAccessToken_t4811 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m9056(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_43.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_43MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t81_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t4812_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m18022_MethodInfo_var;
extern "C" void Utility__cctor_m17657 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		Dictionary_2_t4812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8733);
		Dictionary_2__ctor_m18022_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485401);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t81 * L_1 = (Random_t81 *)il2cpp_codegen_object_new (Random_t81_il2cpp_TypeInfo_var);
		Random__ctor_m11398(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t4812 * L_2 = (Dictionary_2_t4812 *)il2cpp_codegen_object_new (Dictionary_2_t4812_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m18022(L_2, /*hidden argument*/Dictionary_2__ctor_m18022_MethodInfo_var);
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m17658 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m16572(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m92(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m17659 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m17660 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t4811_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t4811 * Utility_GetAccessTokenForNetwork_m17661 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		NetworkAccessToken_t4811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8731);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t4811 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		Dictionary_2_t4812 * L_0 = ((Utility_t4813_StaticFields*)Utility_t4813_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t4811 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t4811 * L_3 = (NetworkAccessToken_t4811 *)il2cpp_codegen_object_new (NetworkAccessToken_t4811_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m17655(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t4811 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
struct NetworkMatch_t4814;
struct IEnumerator_t74;
struct WWW_t1483;
struct ResponseDelegate_1_t4903;
struct NetworkMatch_t4814;
struct IEnumerator_t74;
struct WWW_t1483;
struct ResponseDelegate_1_t4918;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared (NetworkMatch_t4814 * __this, WWW_t1483 * p0, ResponseDelegate_1_t4918 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m18024(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t4814 *, WWW_t1483 *, ResponseDelegate_1_t4918 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t4796_m18023(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t4814 *, WWW_t1483 *, ResponseDelegate_1_t4903 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared)(__this, p0, p1, method)
struct NetworkMatch_t4814;
struct IEnumerator_t74;
struct WWW_t1483;
struct ResponseDelegate_1_t4904;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t4798_m18025(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t4814 *, WWW_t1483 *, ResponseDelegate_1_t4904 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared)(__this, p0, p1, method)
struct NetworkMatch_t4814;
struct IEnumerator_t74;
struct WWW_t1483;
struct ResponseDelegate_1_t4905;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t4814 *, WWW_t1483 *, ResponseDelegate_1_t4905 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared)(__this, p0, p1, method)
struct NetworkMatch_t4814;
struct IEnumerator_t74;
struct WWW_t1483;
struct ResponseDelegate_1_t4906;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t4806_m18027(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t4814 *, WWW_t1483 *, ResponseDelegate_1_t4906 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m18024_gshared)(__this, p0, p1, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch__ctor_m17662 (NetworkMatch_t4814 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t32 * L_0 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m9048(L_0, (String_t*) &_stringLiteral4251, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m2585(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m2909(NULL /*static, unused*/, (String_t*) &_stringLiteral4252, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m18028(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral4253, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m17665(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t32 * NetworkMatch_get_baseUri_m17663 (NetworkMatch_t4814 * __this, const MethodInfo* method)
{
	{
		Uri_t32 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m17664 (NetworkMatch_t4814 * __this, Uri_t32 * ___value, const MethodInfo* method)
{
	{
		Uri_t32 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m17665 (NetworkMatch_t4814 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		Utility_SetAppID_m17659(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t4795_il2cpp_TypeInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_CreateMatch_m17666 (NetworkMatch_t4814 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t4903 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t4795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8734);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t4795 * V_0 = {0};
	{
		CreateMatchRequest_t4795 * L_0 = (CreateMatchRequest_t4795 *)il2cpp_codegen_object_new (CreateMatchRequest_t4795_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m17556(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t4795 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m17558(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t4795 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m17560(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t4795 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m17562(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t4795 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m17564(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t4795 * L_9 = V_0;
		ResponseDelegate_1_t4903 * L_10 = ___callback;
		Coroutine_t589 * L_11 = NetworkMatch_CreateMatch_m17667(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1483_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t4796_m18023_MethodInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_CreateMatch_m17667 (NetworkMatch_t4814 * __this, CreateMatchRequest_t4795 * ___req, ResponseDelegate_1_t4903 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WWWForm_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8736);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		WWW_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2875);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t4796_m18023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485402);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t32 * V_0 = {0};
	WWWForm_t4742 * V_1 = {0};
	WWW_t1483 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t32 * L_0 = NetworkMatch_get_baseUri_m17663(__this, /*hidden argument*/NULL);
		Uri_t32 * L_1 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m8893(L_1, L_0, (String_t*) &_stringLiteral4254, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t32 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral4255, L_2, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t4742 * L_4 = (WWWForm_t4742 *)il2cpp_codegen_object_new (WWWForm_t4742_il2cpp_TypeInfo_var);
		WWWForm__ctor_m17177(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t4742 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m17658(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m17178(L_5, (String_t*) &_stringLiteral4256, L_9, /*hidden argument*/NULL);
		WWWForm_t4742 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m17660(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m17178(L_10, (String_t*) &_stringLiteral4257, L_14, /*hidden argument*/NULL);
		WWWForm_t4742 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m17180(L_15, (String_t*) &_stringLiteral4233, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m17180(L_16, (String_t*) &_stringLiteral4258, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_17 = V_1;
		CreateMatchRequest_t4795 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m17557(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m17178(L_17, (String_t*) &_stringLiteral1528, L_19, /*hidden argument*/NULL);
		WWWForm_t4742 * L_20 = V_1;
		CreateMatchRequest_t4795 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m17559(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m18029((&V_3), /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m17178(L_20, (String_t*) &_stringLiteral3181, L_23, /*hidden argument*/NULL);
		WWWForm_t4742 * L_24 = V_1;
		CreateMatchRequest_t4795 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m17561(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m7651((&V_4), /*hidden argument*/NULL);
		NullCheck(L_24);
		WWWForm_AddField_m17178(L_24, (String_t*) &_stringLiteral4259, L_27, /*hidden argument*/NULL);
		WWWForm_t4742 * L_28 = V_1;
		CreateMatchRequest_t4795 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m17563(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		WWWForm_AddField_m17178(L_28, (String_t*) &_stringLiteral1952, L_30, /*hidden argument*/NULL);
		WWWForm_t4742 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t1444 * L_32 = WWWForm_get_headers_m17181(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_32, (String_t*) &_stringLiteral4260, (String_t*) &_stringLiteral1575);
		Uri_t32 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_33);
		WWWForm_t4742 * L_35 = V_1;
		WWW_t1483 * L_36 = (WWW_t1483 *)il2cpp_codegen_object_new (WWW_t1483_il2cpp_TypeInfo_var);
		WWW__ctor_m17160(L_36, L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		WWW_t1483 * L_37 = V_2;
		ResponseDelegate_1_t4903 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t4796_m18023(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t4796_m18023_MethodInfo_var);
		Coroutine_t589 * L_40 = MonoBehaviour_StartCoroutine_m2719(__this, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t4797_il2cpp_TypeInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_JoinMatch_m17668 (NetworkMatch_t4814 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t4904 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t4797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8737);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t4797 * V_0 = {0};
	{
		JoinMatchRequest_t4797 * L_0 = (JoinMatchRequest_t4797 *)il2cpp_codegen_object_new (JoinMatchRequest_t4797_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m17582(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t4797 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m17584(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t4797 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m17586(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t4797 * L_5 = V_0;
		ResponseDelegate_1_t4904 * L_6 = ___callback;
		Coroutine_t589 * L_7 = NetworkMatch_JoinMatch_m17669(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1483_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t4798_m18025_MethodInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_JoinMatch_m17669 (NetworkMatch_t4814 * __this, JoinMatchRequest_t4797 * ___req, ResponseDelegate_1_t4904 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WWWForm_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8736);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		WWW_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2875);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t4798_m18025_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485403);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t32 * V_0 = {0};
	WWWForm_t4742 * V_1 = {0};
	WWW_t1483 * V_2 = {0};
	{
		Uri_t32 * L_0 = NetworkMatch_get_baseUri_m17663(__this, /*hidden argument*/NULL);
		Uri_t32 * L_1 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m8893(L_1, L_0, (String_t*) &_stringLiteral4261, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t32 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral4262, L_2, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t4742 * L_4 = (WWWForm_t4742 *)il2cpp_codegen_object_new (WWWForm_t4742_il2cpp_TypeInfo_var);
		WWWForm__ctor_m17177(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t4742 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m17658(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m17178(L_5, (String_t*) &_stringLiteral4256, L_9, /*hidden argument*/NULL);
		WWWForm_t4742 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m17660(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m17178(L_10, (String_t*) &_stringLiteral4257, L_14, /*hidden argument*/NULL);
		WWWForm_t4742 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m17180(L_15, (String_t*) &_stringLiteral4233, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m17180(L_16, (String_t*) &_stringLiteral4258, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_17 = V_1;
		JoinMatchRequest_t4797 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m17583(L_18, /*hidden argument*/NULL);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m17178(L_17, (String_t*) &_stringLiteral4232, L_22, /*hidden argument*/NULL);
		WWWForm_t4742 * L_23 = V_1;
		JoinMatchRequest_t4797 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m17585(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m17178(L_23, (String_t*) &_stringLiteral1952, L_25, /*hidden argument*/NULL);
		WWWForm_t4742 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t1444 * L_27 = WWWForm_get_headers_m17181(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral4260, (String_t*) &_stringLiteral1575);
		Uri_t32 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t4742 * L_30 = V_1;
		WWW_t1483 * L_31 = (WWW_t1483 *)il2cpp_codegen_object_new (WWW_t1483_il2cpp_TypeInfo_var);
		WWW__ctor_m17160(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t1483 * L_32 = V_2;
		ResponseDelegate_1_t4904 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t4798_m18025(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t4798_m18025_MethodInfo_var);
		Coroutine_t589 * L_35 = MonoBehaviour_StartCoroutine_m2719(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t4799_il2cpp_TypeInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_DestroyMatch_m17670 (NetworkMatch_t4814 * __this, uint64_t ___netId, ResponseDelegate_1_t4905 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t4799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8739);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t4799 * V_0 = {0};
	{
		DestroyMatchRequest_t4799 * L_0 = (DestroyMatchRequest_t4799 *)il2cpp_codegen_object_new (DestroyMatchRequest_t4799_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m17603(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t4799 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m17605(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t4799 * L_3 = V_0;
		ResponseDelegate_1_t4905 * L_4 = ___callback;
		Coroutine_t589 * L_5 = NetworkMatch_DestroyMatch_m17671(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1483_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_DestroyMatch_m17671 (NetworkMatch_t4814 * __this, DestroyMatchRequest_t4799 * ___req, ResponseDelegate_1_t4905 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WWWForm_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8736);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		WWW_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2875);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485404);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t32 * V_0 = {0};
	WWWForm_t4742 * V_1 = {0};
	WWW_t1483 * V_2 = {0};
	{
		Uri_t32 * L_0 = NetworkMatch_get_baseUri_m17663(__this, /*hidden argument*/NULL);
		Uri_t32 * L_1 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m8893(L_1, L_0, (String_t*) &_stringLiteral4263, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t32 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral4264, L_3, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4742 * L_5 = (WWWForm_t4742 *)il2cpp_codegen_object_new (WWWForm_t4742_il2cpp_TypeInfo_var);
		WWWForm__ctor_m17177(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t4742 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_7 = Utility_GetSourceID_m17658(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m17178(L_6, (String_t*) &_stringLiteral4256, L_10, /*hidden argument*/NULL);
		WWWForm_t4742 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m17660(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m17178(L_11, (String_t*) &_stringLiteral4257, L_15, /*hidden argument*/NULL);
		WWWForm_t4742 * L_16 = V_1;
		DestroyMatchRequest_t4799 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m17604(L_17, /*hidden argument*/NULL);
		NetworkAccessToken_t4811 * L_19 = Utility_GetAccessTokenForNetwork_m17661(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m17656(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		WWWForm_AddField_m17178(L_16, (String_t*) &_stringLiteral4233, L_20, /*hidden argument*/NULL);
		WWWForm_t4742 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m17180(L_21, (String_t*) &_stringLiteral4258, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_22 = V_1;
		DestroyMatchRequest_t4799 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m17604(L_23, /*hidden argument*/NULL);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m17178(L_22, (String_t*) &_stringLiteral4232, L_27, /*hidden argument*/NULL);
		WWWForm_t4742 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t1444 * L_29 = WWWForm_get_headers_m17181(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral4260, (String_t*) &_stringLiteral1575);
		Uri_t32 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t4742 * L_32 = V_1;
		WWW_t1483 * L_33 = (WWW_t1483 *)il2cpp_codegen_object_new (WWW_t1483_il2cpp_TypeInfo_var);
		WWW__ctor_m17160(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t1483 * L_34 = V_2;
		ResponseDelegate_1_t4905 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var);
		Coroutine_t589 * L_37 = MonoBehaviour_StartCoroutine_m2719(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t4800_il2cpp_TypeInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_DropConnection_m17672 (NetworkMatch_t4814 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t4905 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t4800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8741);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t4800 * V_0 = {0};
	{
		DropConnectionRequest_t4800 * L_0 = (DropConnectionRequest_t4800 *)il2cpp_codegen_object_new (DropConnectionRequest_t4800_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m17607(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t4800 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m17609(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t4800 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m17611(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t4800 * L_5 = V_0;
		ResponseDelegate_1_t4905 * L_6 = ___callback;
		Coroutine_t589 * L_7 = NetworkMatch_DropConnection_m17673(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1483_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_DropConnection_m17673 (NetworkMatch_t4814 * __this, DropConnectionRequest_t4800 * ___req, ResponseDelegate_1_t4905 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WWWForm_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8736);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		WWW_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2875);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485404);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t32 * V_0 = {0};
	WWWForm_t4742 * V_1 = {0};
	WWW_t1483 * V_2 = {0};
	{
		Uri_t32 * L_0 = NetworkMatch_get_baseUri_m17663(__this, /*hidden argument*/NULL);
		Uri_t32 * L_1 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m8893(L_1, L_0, (String_t*) &_stringLiteral4265, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t32 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral4266, L_2, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t4742 * L_4 = (WWWForm_t4742 *)il2cpp_codegen_object_new (WWWForm_t4742_il2cpp_TypeInfo_var);
		WWWForm__ctor_m17177(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t4742 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m17658(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m17178(L_5, (String_t*) &_stringLiteral4256, L_9, /*hidden argument*/NULL);
		WWWForm_t4742 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m17660(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m17178(L_10, (String_t*) &_stringLiteral4257, L_14, /*hidden argument*/NULL);
		WWWForm_t4742 * L_15 = V_1;
		DropConnectionRequest_t4800 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m17608(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t4811 * L_18 = Utility_GetAccessTokenForNetwork_m17661(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m17656(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m17178(L_15, (String_t*) &_stringLiteral4233, L_19, /*hidden argument*/NULL);
		WWWForm_t4742 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m17180(L_20, (String_t*) &_stringLiteral4258, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_21 = V_1;
		DropConnectionRequest_t4800 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m17608(L_22, /*hidden argument*/NULL);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(NetworkID_t4809_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m17178(L_21, (String_t*) &_stringLiteral4232, L_26, /*hidden argument*/NULL);
		WWWForm_t4742 * L_27 = V_1;
		DropConnectionRequest_t4800 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m17610(L_28, /*hidden argument*/NULL);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(NodeID_t4810_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m17178(L_27, (String_t*) &_stringLiteral4234, L_32, /*hidden argument*/NULL);
		WWWForm_t4742 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t1444 * L_34 = WWWForm_get_headers_m17181(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral4260, (String_t*) &_stringLiteral1575);
		Uri_t32 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t4742 * L_37 = V_1;
		WWW_t1483 * L_38 = (WWW_t1483 *)il2cpp_codegen_object_new (WWW_t1483_il2cpp_TypeInfo_var);
		WWW__ctor_m17160(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t1483 * L_39 = V_2;
		ResponseDelegate_1_t4905 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t4793_m18026_MethodInfo_var);
		Coroutine_t589 * L_42 = MonoBehaviour_StartCoroutine_m2719(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t4801_il2cpp_TypeInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_ListMatches_m17674 (NetworkMatch_t4814 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t4906 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t4801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8742);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t4801 * V_0 = {0};
	{
		ListMatchRequest_t4801 * L_0 = (ListMatchRequest_t4801 *)il2cpp_codegen_object_new (ListMatchRequest_t4801_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m17613(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t4801 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m17617(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t4801 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m17615(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t4801 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m17619(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t4801 * L_7 = V_0;
		ResponseDelegate_1_t4906 * L_8 = ___callback;
		Coroutine_t589 * L_9 = NetworkMatch_ListMatches_m17675(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t4813_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1483_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t4806_m18027_MethodInfo_var;
extern "C" Coroutine_t589 * NetworkMatch_ListMatches_m17675 (NetworkMatch_t4814 * __this, ListMatchRequest_t4801 * ___req, ResponseDelegate_1_t4906 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WWWForm_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8736);
		Utility_t4813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8732);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		WWW_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2875);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t4806_m18027_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485405);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t32 * V_0 = {0};
	WWWForm_t4742 * V_1 = {0};
	WWW_t1483 * V_2 = {0};
	{
		Uri_t32 * L_0 = NetworkMatch_get_baseUri_m17663(__this, /*hidden argument*/NULL);
		Uri_t32 * L_1 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m8893(L_1, L_0, (String_t*) &_stringLiteral4267, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t32 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral4268, L_2, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t4742 * L_4 = (WWWForm_t4742 *)il2cpp_codegen_object_new (WWWForm_t4742_il2cpp_TypeInfo_var);
		WWWForm__ctor_m17177(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t4742 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t4813_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m17658(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t4808_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m17178(L_5, (String_t*) &_stringLiteral4256, L_9, /*hidden argument*/NULL);
		WWWForm_t4742 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m17660(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t4807_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m17178(L_10, (String_t*) &_stringLiteral4257, L_14, /*hidden argument*/NULL);
		WWWForm_t4742 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m17180(L_15, (String_t*) &_stringLiteral4233, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m17180(L_16, (String_t*) &_stringLiteral4258, 0, /*hidden argument*/NULL);
		WWWForm_t4742 * L_17 = V_1;
		ListMatchRequest_t4801 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m17614(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m17180(L_17, (String_t*) &_stringLiteral4269, L_19, /*hidden argument*/NULL);
		WWWForm_t4742 * L_20 = V_1;
		ListMatchRequest_t4801 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m17616(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m17180(L_20, (String_t*) &_stringLiteral4270, L_22, /*hidden argument*/NULL);
		WWWForm_t4742 * L_23 = V_1;
		ListMatchRequest_t4801 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m17618(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m17178(L_23, (String_t*) &_stringLiteral4271, L_25, /*hidden argument*/NULL);
		WWWForm_t4742 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t1444 * L_27 = WWWForm_get_headers_m17181(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral4260, (String_t*) &_stringLiteral1575);
		Uri_t32 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t4742 * L_30 = V_1;
		WWW_t1483 * L_31 = (WWW_t1483 *)il2cpp_codegen_object_new (WWW_t1483_il2cpp_TypeInfo_var);
		WWW__ctor_m17160(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t1483 * L_32 = V_2;
		ResponseDelegate_1_t4906 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t4806_m18027(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t4806_m18027_MethodInfo_var);
		Coroutine_t589 * L_35 = MonoBehaviour_StartCoroutine_m2719(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t2_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m84_MethodInfo_var;
extern "C" void JsonArray__ctor_m17676 (JsonArray_t4815 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		List_1__ctor_m84_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t2_il2cpp_TypeInfo_var);
		List_1__ctor_m84(__this, /*hidden argument*/List_1__ctor_m84_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m17677 (JsonArray_t4815 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m17699(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" void JsonObject__ctor_m17678 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t2085_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m9190_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m17679 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3886);
		Dictionary_2_GetEnumerator_m9190_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484857);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t2085  L_1 = Dictionary_2_GetEnumerator_m9190(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m9190_MethodInfo_var);
		Enumerator_t2085  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t2085_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m17680 (JsonObject_t4816 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::ContainsKey(System.String)
extern "C" bool JsonObject_ContainsKey_m17681 (JsonObject_t4816 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m18030_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m17682 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m18030_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485406);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t4919 * L_1 = Dictionary_2_get_Keys_m18030(L_0, /*hidden argument*/Dictionary_2_get_Keys_m18030_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern "C" bool JsonObject_Remove_m17683 (JsonObject_t4816 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m17684 (JsonObject_t4816 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m18031_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m17685 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m18031_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485407);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t4920 * L_1 = Dictionary_2_get_Values_m18031(L_0, /*hidden argument*/Dictionary_2_get_Values_m18031_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m17686 (JsonObject_t4816 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m17687 (JsonObject_t4816 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m8940_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m8941_MethodInfo_var;
extern "C" void JsonObject_Add_m17688 (JsonObject_t4816 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m8940_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484577);
		KeyValuePair_2_get_Value_m8941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484578);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m8940((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m8941((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m8941_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m17689 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m8940_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m8941_MethodInfo_var;
extern "C" bool JsonObject_Contains_m17690 (JsonObject_t4816 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m8940_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484577);
		KeyValuePair_2_get_Value_m8941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484578);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m8940((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t468 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m8940((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m8941((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m8941_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1975_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void JsonObject_CopyTo_m17691 (JsonObject_t4816 * __this, KeyValuePair_2U5BU5D_t1988* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		IEnumerator_1_t1975_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3742);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t1962  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t1988* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(12 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t1962  L_5 = (KeyValuePair_2_t1962 )InterfaceFuncInvoker0< KeyValuePair_2_t1962  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1975_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t1988* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t1962  L_9 = V_1;
			*((KeyValuePair_2_t1962 *)(KeyValuePair_2_t1962 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m17692 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m17693 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m8940_MethodInfo_var;
extern "C" bool JsonObject_Remove_m17694 (JsonObject_t4816 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m8940_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484577);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m8940((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t2085_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m9190_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m17695 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3886);
		Dictionary_2_GetEnumerator_m9190_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484857);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t2085  L_1 = Dictionary_2_GetEnumerator_m9190(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m9190_MethodInfo_var);
		Enumerator_t2085  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t2085_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m17696 (JsonObject_t4816 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m17699(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m17697 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t583* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t583* L_2 = String_ToCharArray_m8923(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t583* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m17702(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_SerializeObject_m17698 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m13233(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t696 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m17710(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t696 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m17699 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m17716(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m17698(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonObject_t4816_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m17700 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonObject_t4816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8744);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t4816 * L_0 = (JsonObject_t4816 *)il2cpp_codegen_object_new (JsonObject_t4816_il2cpp_TypeInfo_var);
		JsonObject__ctor_m17678(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t583* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t583* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m17708(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t583* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t583* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t583* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m17703(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t583* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t583* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m17702(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonArray_t4815_il2cpp_TypeInfo_var;
extern "C" JsonArray_t4815 * SimpleJson_ParseArray_m17701 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonArray_t4815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8745);
		s_Il2CppMethodIntialized = true;
	}
	JsonArray_t4815 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t4815 * L_0 = (JsonArray_t4815 *)il2cpp_codegen_object_new (JsonArray_t4815_il2cpp_TypeInfo_var);
		JsonArray__ctor_m17676(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t583* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t583* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m17708(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t4815 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t583* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t583* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t583* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m17702(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t4815 *)NULL;
	}

IL_0063:
	{
		JsonArray_t4815 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t4815 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseValue_m17702 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t583* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m17708(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t583* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m17703(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t583* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m17705(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t583* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m17700(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t583* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t4815 * L_19 = SimpleJson_ParseArray_m17701(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t583* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = 1;
		Object_t * L_23 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t583* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = 0;
		Object_t * L_27 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t583* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t2012_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ParseString_m17703 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CultureInfo_t2012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3737);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m13233(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t583* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m17707(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t583* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t583* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t583* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t583* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t583* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t696 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m3688(L_28, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t696 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m3688(L_30, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t696 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m3688(L_32, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t696 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m3688(L_34, 8, /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t696 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m3688(L_36, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t696 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m3688(L_38, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t696 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m3688(L_40, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t696 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m3688(L_42, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t583* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t583* L_48 = ___json;
		int32_t* L_49 = ___index;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m11383(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_51 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_52 = UInt32_TryParse_m18032(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t583* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t583* L_63 = ___json;
		int32_t* L_64 = ___index;
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_65 = String_CreateString_m11383(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m2603(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral1484, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t583* L_67 = ___json;
		int32_t* L_68 = ___index;
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_69 = String_CreateString_m11383(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_70 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_71 = UInt32_TryParse_m18032(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t696 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m3688(L_74, (((uint16_t)L_75)), /*hidden argument*/NULL);
		StringBuilder_t696 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m3688(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t696 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m17704(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_Append_m3049(L_82, L_84, /*hidden argument*/NULL);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t696 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m3688(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t696 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t583_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m17704 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CharU5BU5D_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t1703 * L_2 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m9088(L_2, (String_t*) &_stringLiteral4276, (String_t*) &_stringLiteral4277, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_5 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m9088(L_5, (String_t*) &_stringLiteral4276, (String_t*) &_stringLiteral4278, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m3695(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t583* L_10 = ((CharU5BU5D_t583*)SZArrayNew(CharU5BU5D_t583_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t583* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_14 = String_CreateString_m11386(L_14, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t2012_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseNumber_m17705 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CultureInfo_t2012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3737);
		Double_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t583* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m17707(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t583* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m17706(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t583* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_10 = String_CreateString_m11383(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m15425(L_11, (String_t*) &_stringLiteral78, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m15425(L_13, (String_t*) &_stringLiteral4279, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t583* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m11383(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_20 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m18033(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t769_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t583* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_29 = String_CreateString_m11383(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_30 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m15347(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(Int64_t776_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m17706 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t583* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral4280);
		int32_t L_4 = String_IndexOf_m3553((String_t*) &_stringLiteral4280, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t583* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m17707 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, const MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t583* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral4281);
		int32_t L_3 = String_IndexOf_m3553((String_t*) &_stringLiteral4281, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t583* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m17708 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t583* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m17709(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m17709 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t583* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m17707(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t583* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t583* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t583* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t583* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t583* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t583* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t583* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t583* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t583* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t583* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t583* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t583* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t583* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t583* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t583* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t583* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1756_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonSerializerStrategy_t4817_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeValue_m17710 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t696 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		IDictionary_2_t1756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3720);
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		IJsonSerializerStrategy_t4817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8746);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t696 * G_B13_0 = {0};
	StringBuilder_t696 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t696 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t696 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m17713(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t1810_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(7 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t696 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m17711(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t1756_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t1756_il2cpp_TypeInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(7 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t1756_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t696 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m17711(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, IEnumerable_t746_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t696 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m17712(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m17715(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t696 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m17714(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, Boolean_t30_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t696 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, Boolean_t30_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral1335;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral1131;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m3049(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t696 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m3049(L_38, (String_t*) &_stringLiteral530, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t4817_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t696 * L_45 = ___builder;
		SimpleJson_SerializeValue_m17710(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeObject_m17711 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t696 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t696 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3049(L_0, (String_t*) &_stringLiteral1413, /*hidden argument*/NULL);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t696 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m3049(L_10, (String_t*) &_stringLiteral1298, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t696 * L_14 = ___builder;
		SimpleJson_SerializeString_m17713(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t696 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m17710(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t696 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3049(L_19, (String_t*) &_stringLiteral622, /*hidden argument*/NULL);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t696 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m17710(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t696 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m3049(L_28, (String_t*) &_stringLiteral2051, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeArray_m17712 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t696 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t696 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3049(L_0, (String_t*) &_stringLiteral1016, /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t696 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m3049(L_6, (String_t*) &_stringLiteral1298, /*hidden argument*/NULL);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t696 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m17710(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t646_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_006e:
	{
		StringBuilder_t696 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m3049(L_16, (String_t*) &_stringLiteral565, /*hidden argument*/NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m17713 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t696 * ___builder, const MethodInfo* method)
{
	CharU5BU5D_t583* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t696 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3049(L_0, (String_t*) &_stringLiteral671, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t583* L_2 = String_ToCharArray_m8923(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t583* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t696 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m3049(L_7, (String_t*) &_stringLiteral1154, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t696 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3049(L_9, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t696 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m3049(L_11, (String_t*) &_stringLiteral1480, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t696 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3049(L_13, (String_t*) &_stringLiteral1481, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t696 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m3049(L_15, (String_t*) &_stringLiteral1155, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t696 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m3049(L_17, (String_t*) &_stringLiteral1482, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t696 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3049(L_19, (String_t*) &_stringLiteral1483, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t696 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m3688(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t583* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t696 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m3049(L_25, (String_t*) &_stringLiteral671, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t2012_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t2023_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t2022_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t2021_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t662_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeNumber_m17714 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t696 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		CultureInfo_t2012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3737);
		UInt64_t2023_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3766);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UInt32_t2022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3765);
		Decimal_t2021_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3763);
		Single_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t2021  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, Int64_t776_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t696 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, Int64_t776_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_3 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m13255((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3049(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, UInt64_t2023_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t696 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, UInt64_t2023_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_8 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m13258((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m3049(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, Int32_t29_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t696 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, Int32_t29_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_13 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m13193((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m3049(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, UInt32_t2022_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t696 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, UInt32_t2022_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_18 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m13266((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m3049(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, Decimal_t2021_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t696 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t2021 *)((Decimal_t2021 *)UnBox (L_22, Decimal_t2021_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_23 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m13257((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m3049(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, Single_t662_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t696 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, Single_t662_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_28 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m18034((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m3049(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t696 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_32 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m18035(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t2012 * L_34 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m13262((&V_6), (String_t*) &_stringLiteral2171, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m3049(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern TypeInfo* SByte_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t27_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t792_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t2022_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t2023_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t662_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t2021_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_IsNumeric_m17715 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3762);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Int16_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		UInt16_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3764);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UInt32_t2022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3765);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		UInt64_t2023_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3766);
		Single_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Double_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		Decimal_t2021_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3763);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, SByte_t36_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, Byte_t26_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Int16_t27_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, UInt16_t792_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, Int32_t29_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, UInt32_t2022_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, Int64_t776_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, UInt64_t2023_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, Single_t662_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, Double_t769_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t2021_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t4819_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m17716 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t4819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8747);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t4819_StaticFields*)SimpleJson_t4819_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t4818 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m17717(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t4818 * L_3 = L_2;
		((SimpleJson_t4819_StaticFields*)SimpleJson_t4819_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t4819_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var;
extern "C" PocoJsonSerializerStrategy_t4818 * SimpleJson_get_PocoJsonSerializerStrategy_m17717 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t4819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8747);
		PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8748);
		s_Il2CppMethodIntialized = true;
	}
	PocoJsonSerializerStrategy_t4818 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t4818 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t4818 * L_0 = ((SimpleJson_t4819_StaticFields*)SimpleJson_t4819_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t4818 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t4818 * L_2 = (PocoJsonSerializerStrategy_t4818 *)il2cpp_codegen_object_new (PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m17718(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t4818 * L_3 = L_2;
		((SimpleJson_t4819_StaticFields*)SimpleJson_t4819_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// System.Type
#include "mscorlib_System_Type.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t4921_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t4922_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t4923_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t4924_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t4925_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t4926_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m18036_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m18037_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m18038_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m18039_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m18040_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m18041_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m17718 (PocoJsonSerializerStrategy_t4818 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t4921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8755);
		ThreadSafeDictionary_2_t4922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8756);
		ThreadSafeDictionaryValueFactory_2_t4923_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8757);
		ThreadSafeDictionary_2_t4924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8758);
		ThreadSafeDictionaryValueFactory_2_t4925_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8759);
		ThreadSafeDictionary_2_t4926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8760);
		ThreadSafeDictionaryValueFactory_2__ctor_m18036_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485408);
		ThreadSafeDictionary_2__ctor_m18037_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485409);
		ThreadSafeDictionaryValueFactory_2__ctor_m18038_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485410);
		ThreadSafeDictionary_2__ctor_m18039_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485411);
		ThreadSafeDictionaryValueFactory_2__ctor_m18040_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485412);
		ThreadSafeDictionary_2__ctor_m18041_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t4921 * L_1 = (ThreadSafeDictionaryValueFactory_2_t4921 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t4921_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m18036(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m18036_MethodInfo_var);
		ThreadSafeDictionary_2_t4922 * L_2 = (ThreadSafeDictionary_2_t4922 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t4922_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m18037(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m18037_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t4923 * L_4 = (ThreadSafeDictionaryValueFactory_2_t4923 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t4923_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m18038(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m18038_MethodInfo_var);
		ThreadSafeDictionary_2_t4924 * L_5 = (ThreadSafeDictionary_2_t4924 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t4924_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m18039(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m18039_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t4925 * L_7 = (ThreadSafeDictionaryValueFactory_2_t4925 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t4925_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m18040(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m18040_MethodInfo_var);
		ThreadSafeDictionary_2_t4926 * L_8 = (ThreadSafeDictionary_2_t4926 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t4926_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m18041(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m18041_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t29_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m17719 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_0_0_0_var = il2cpp_codegen_type_from_index(14);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8748);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t636* L_0 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Int32_t29_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t20* L_2 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4282);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral4282;
		StringU5BU5D_t20* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4283);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral4283;
		StringU5BU5D_t20* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4284);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral4284;
		((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m17720 (PocoJsonSerializerStrategy_t4818 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t4825 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m17721 (PocoJsonSerializerStrategy_t4818 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8748);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t636* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var);
		TypeU5BU5D_t636* L_3 = ((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var);
		TypeU5BU5D_t636* L_4 = ((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		ConstructorDelegate_t4825 * L_5 = ReflectionUtils_GetContructor_m17757(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t4927_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1957_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4928_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t4907_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t4909_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4929_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m18042_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m17722 (PocoJsonSerializerStrategy_t4818 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t4927_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8762);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		IEnumerable_1_t1957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4948);
		IEnumerator_1_t4928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8763);
		IDictionary_2_t4907_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8750);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		IEnumerable_1_t4909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8764);
		IEnumerator_1_t4929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8765);
		Dictionary_2__ctor_m18042_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485414);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t4927 * L_0 = (Dictionary_2_t4927 *)il2cpp_codegen_object_new (Dictionary_2_t4927_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m18042(L_0, /*hidden argument*/Dictionary_2__ctor_m18042_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m17753(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t1957_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t4928_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m17755(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			GetDelegate_t4823 * L_19 = ReflectionUtils_GetGetMethod_m17760(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t4823 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t4907_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m17754(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t4909_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t4929_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			GetDelegate_t4823 * L_38 = ReflectionUtils_GetGetMethod_m17761(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t4823 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t4907_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t4930_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1957_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4928_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t4908_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t4909_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4929_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m18043_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m18044_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m17723 (PocoJsonSerializerStrategy_t4818 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t4930_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8766);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		IEnumerable_1_t1957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4948);
		IEnumerator_1_t4928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8763);
		IDictionary_2_t4908_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8752);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		IEnumerable_1_t4909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8764);
		IEnumerator_1_t4929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8765);
		Dictionary_2__ctor_m18043_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485415);
		KeyValuePair_2__ctor_m18044_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485416);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t4930 * L_0 = (Dictionary_2_t4930 *)il2cpp_codegen_object_new (Dictionary_2_t4930_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m18043(L_0, /*hidden argument*/Dictionary_2__ctor_m18043_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m17753(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t1957_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t4928_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m17756(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			SetDelegate_t4824 * L_21 = ReflectionUtils_GetSetMethod_m17764(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t4931  L_22 = {0};
			KeyValuePair_2__ctor_m18044(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m18044_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t4931  >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t4908_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m17754(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t4909_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t4929_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
			SetDelegate_t4824 * L_45 = ReflectionUtils_GetSetMethod_m17765(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t4931  L_46 = {0};
			KeyValuePair_2__ctor_m18044(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m18044_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t4931  >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t4908_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m17724 (PocoJsonSerializerStrategy_t4818 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t2012_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t769_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m17725 (PocoJsonSerializerStrategy_t4818 * __this, Enum_t44 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t2012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3737);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		Double_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t44 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_1 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m18035(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t769_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t2012_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t4932_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t1979_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t44_il2cpp_TypeInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m17726 (PocoJsonSerializerStrategy_t4818 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8748);
		CultureInfo_t2012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3737);
		DateTimeOffset_t4932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8767);
		Guid_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3811);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Enum_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t44 * V_1 = {0};
	DateTime_t1953  V_2 = {0};
	DateTime_t1953  V_3 = {0};
	DateTimeOffset_t4932  V_4 = {0};
	DateTimeOffset_t4932  V_5 = {0};
	Guid_t1979  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t1953_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t1953 *)((DateTime_t1953 *)UnBox (L_2, DateTime_t1953_il2cpp_TypeInfo_var))));
		DateTime_t1953  L_3 = DateTime_ToUniversalTime_m13240((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var);
		StringU5BU5D_t20* L_4 = ((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_6 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m13201((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t4932_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t4932 *)((DateTimeOffset_t4932 *)UnBox (L_10, DateTimeOffset_t4932_il2cpp_TypeInfo_var))));
		DateTimeOffset_t4932  L_11 = DateTimeOffset_ToUniversalTime_m18045((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var);
		StringU5BU5D_t20* L_12 = ((PocoJsonSerializerStrategy_t4818_StaticFields*)PocoJsonSerializerStrategy_t4818_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2012_il2cpp_TypeInfo_var);
		CultureInfo_t2012 * L_14 = CultureInfo_get_InvariantCulture_m8934(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m18046((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t1979_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t1979 *)((Guid_t1979 *)UnBox (L_18, Guid_t1979_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m18047((&V_6), (String_t*) &_stringLiteral2871, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t32 *)IsInst(L_20, Uri_t32_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t44 *)IsInst(L_24, Enum_t44_il2cpp_TypeInfo_var));
		Enum_t44 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t44 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t44 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t4816_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t4821_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t4934_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4935_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m18048_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m18049_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m17727 (PocoJsonSerializerStrategy_t4818 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		JsonObject_t4816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8744);
		IDictionary_2_t4821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8768);
		IEnumerable_1_t4934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8769);
		IEnumerator_1_t4935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8771);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		KeyValuePair_2_get_Value_m18048_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485417);
		KeyValuePair_2_get_Key_m18049_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485418);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t4933  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*) &_stringLiteral2168, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3130(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t4816 * L_7 = (JsonObject_t4816 *)il2cpp_codegen_object_new (JsonObject_t4816_il2cpp_TypeInfo_var);
		JsonObject__ctor_m17678(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t4821_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t4934_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t4933  L_14 = (KeyValuePair_2_t4933 )InterfaceFuncInvoker0< KeyValuePair_2_t4933  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t4935_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t4823 * L_15 = KeyValuePair_2_get_Value_m18048((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m18048_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m18049((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m18049_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t4823 * L_19 = KeyValuePair_2_get_Value_m18048((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m18048_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object) */, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m17728 (GetDelegate_t4823 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m17729 (GetDelegate_t4823 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m17729((GetDelegate_t4823 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t4823(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m17730 (GetDelegate_t4823 * __this, Object_t * ___source, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m17731 (GetDelegate_t4823 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m17732 (SetDelegate_t4824 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m17733 (SetDelegate_t4824 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m17733((SetDelegate_t4824 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t4824(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m17734 (SetDelegate_t4824 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m17735 (SetDelegate_t4824 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m17736 (ConstructorDelegate_t4825 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m17737 (ConstructorDelegate_t4825 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m17737((ConstructorDelegate_t4825 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t4825(Il2CppObject* delegate, ObjectU5BU5D_t21* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m17738 (ConstructorDelegate_t4825 * __this, ObjectU5BU5D_t21* ___args, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m17739 (ConstructorDelegate_t4825 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m17740 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m17741 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t1960 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t21* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m18050(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m17742 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m17743 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_2 = ((ReflectionUtils_t4831_StaticFields*)ReflectionUtils_t4831_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t21* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m17744 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m17745 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m17746 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m17747 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t21* L_2 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t21* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m17748 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m17749 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m17750 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t4831_StaticFields*)ReflectionUtils_t4831_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m17751 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t2035* L_1 = (ConstructorInfoU5BU5D_t2035*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t2035* >::Invoke(84 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1959_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4936_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1960 * ReflectionUtils_GetConstructorInfo_m17752 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t636* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		IEnumerable_1_t1959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4949);
		IEnumerator_1_t4936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8772);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t1960 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t635* V_5 = {0};
	ParameterInfo_t762 * V_6 = {0};
	ParameterInfoU5BU5D_t635* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t1960 * V_9 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m17751(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t1959_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t1960 * L_5 = (ConstructorInfo_t1960 *)InterfaceFuncInvoker0< ConstructorInfo_t1960 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t4936_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t1960 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t635* L_7 = (ParameterInfoU5BU5D_t635*)VirtFuncInvoker0< ParameterInfoU5BU5D_t635* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t636* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t635* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t1960 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t635* L_11 = (ParameterInfoU5BU5D_t635*)VirtFuncInvoker0< ParameterInfoU5BU5D_t635* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t635* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t762 **)(ParameterInfo_t762 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t762 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t636* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t635* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t1960 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t1960 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t1960 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m17753 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t2034* L_1 = (PropertyInfoU5BU5D_t2034*)VirtFuncInvoker1< PropertyInfoU5BU5D_t2034*, int32_t >::Invoke(64 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m17754 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t4173* L_1 = (FieldInfoU5BU5D_t4173*)VirtFuncInvoker1< FieldInfoU5BU5D_t4173*, int32_t >::Invoke(51 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m17755 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m17756 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t4825 * ReflectionUtils_GetContructor_m17757 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t636* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t636* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		ConstructorDelegate_t4825 * L_2 = ReflectionUtils_GetConstructorByReflection_m17759(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t4825_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m17741_MethodInfo_var;
extern "C" ConstructorDelegate_t4825 * ReflectionUtils_GetConstructorByReflection_m17758 (Object_t * __this /* static, unused */, ConstructorInfo_t1960 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8773);
		ConstructorDelegate_t4825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8749);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m17741_MethodInfo_var = il2cpp_codegen_method_info_from_index(1771);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m17740(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * L_1 = V_0;
		ConstructorInfo_t1960 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m17741_MethodInfo_var };
		ConstructorDelegate_t4825 * L_5 = (ConstructorDelegate_t4825 *)il2cpp_codegen_object_new (ConstructorDelegate_t4825_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m17736(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t4825 * ReflectionUtils_GetConstructorByReflection_m17759 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t636* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t1960 * V_0 = {0};
	ConstructorDelegate_t4825 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t636* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		ConstructorInfo_t1960 * L_2 = ReflectionUtils_GetConstructorInfo_m17752(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t1960 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t4825 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t1960 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		ConstructorDelegate_t4825 * L_5 = ReflectionUtils_GetConstructorByReflection_m17758(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t4823 * ReflectionUtils_GetGetMethod_m17760 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		GetDelegate_t4823 * L_1 = ReflectionUtils_GetGetMethodByReflection_m17762(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t4823 * ReflectionUtils_GetGetMethod_m17761 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		GetDelegate_t4823 * L_1 = ReflectionUtils_GetGetMethodByReflection_m17763(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t4823_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m17743_MethodInfo_var;
extern "C" GetDelegate_t4823 * ReflectionUtils_GetGetMethodByReflection_m17762 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8774);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		GetDelegate_t4823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8751);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m17743_MethodInfo_var = il2cpp_codegen_method_info_from_index(1772);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m17742(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m17755(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m17743_MethodInfo_var };
		GetDelegate_t4823 * L_6 = (GetDelegate_t4823 *)il2cpp_codegen_object_new (GetDelegate_t4823_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m17728(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t4823_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m17745_MethodInfo_var;
extern "C" GetDelegate_t4823 * ReflectionUtils_GetGetMethodByReflection_m17763 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8775);
		GetDelegate_t4823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8751);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m17745_MethodInfo_var = il2cpp_codegen_method_info_from_index(1773);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m17744(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m17745_MethodInfo_var };
		GetDelegate_t4823 * L_5 = (GetDelegate_t4823 *)il2cpp_codegen_object_new (GetDelegate_t4823_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m17728(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t4824 * ReflectionUtils_GetSetMethod_m17764 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		SetDelegate_t4824 * L_1 = ReflectionUtils_GetSetMethodByReflection_m17766(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t4824 * ReflectionUtils_GetSetMethod_m17765 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		SetDelegate_t4824 * L_1 = ReflectionUtils_GetSetMethodByReflection_m17767(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t4831_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t4824_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m17747_MethodInfo_var;
extern "C" SetDelegate_t4824 * ReflectionUtils_GetSetMethodByReflection_m17766 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8776);
		ReflectionUtils_t4831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8761);
		SetDelegate_t4824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8754);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m17747_MethodInfo_var = il2cpp_codegen_method_info_from_index(1774);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m17746(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t4831_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m17756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m17747_MethodInfo_var };
		SetDelegate_t4824 * L_6 = (SetDelegate_t4824 *)il2cpp_codegen_object_new (SetDelegate_t4824_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m17732(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t4824_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m17749_MethodInfo_var;
extern "C" SetDelegate_t4824 * ReflectionUtils_GetSetMethodByReflection_m17767 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8777);
		SetDelegate_t4824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8754);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m17749_MethodInfo_var = il2cpp_codegen_method_info_from_index(1775);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m17748(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m17749_MethodInfo_var };
		SetDelegate_t4824 * L_5 = (SetDelegate_t4824 *)il2cpp_codegen_object_new (SetDelegate_t4824_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m17732(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m17768 (WrapperlessIcall_t4832 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m17769 (IL2CPPStructAlignmentAttribute_t4833 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_109.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_109MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t4834_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t4837_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t4836_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m17770 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t4834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8778);
		AttributeHelperEngine_t4837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8779);
		ExecuteInEditModeU5BU5D_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8780);
		RequireComponentU5BU5D_t4836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8781);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t4837_StaticFields*)AttributeHelperEngine_t4837_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t4834*)SZArrayNew(DisallowMultipleComponentU5BU5D_t4834_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t4837_StaticFields*)AttributeHelperEngine_t4837_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t4835*)SZArrayNew(ExecuteInEditModeU5BU5D_t4835_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t4837_StaticFields*)AttributeHelperEngine_t4837_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t4836*)SZArrayNew(RequireComponentU5BU5D_t4836_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t47_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t1286_0_0_0_var;
extern TypeInfo* Stack_1_t4937_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m18051_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m18052_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m18053_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m17771 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t47_0_0_0_var = il2cpp_codegen_type_from_index(295);
		DisallowMultipleComponent_t1286_0_0_0_var = il2cpp_codegen_type_from_index(2226);
		Stack_1_t4937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8782);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Stack_1__ctor_m18051_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485424);
		Stack_1_Push_m18052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485425);
		Stack_1_Pop_m18053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485426);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t4937 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t21* V_2 = {0};
	{
		Stack_1_t4937 * L_0 = (Stack_1_t4937 *)il2cpp_codegen_object_new (Stack_1_t4937_il2cpp_TypeInfo_var);
		Stack_1__ctor_m18051(L_0, /*hidden argument*/Stack_1__ctor_m18051_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t4937 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m18052(L_1, L_2, /*hidden argument*/Stack_1_Push_m18052_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t47_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t4937 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m18053(L_8, /*hidden argument*/Stack_1_Pop_m18053_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t1286_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t21* L_12 = (ObjectU5BU5D_t21*)VirtFuncInvoker2< ObjectU5BU5D_t21*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t21* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t4937 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t816_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t47_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t816_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t4938_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m18054_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m18055_MethodInfo_var;
extern "C" TypeU5BU5D_t636* AttributeHelperEngine_GetRequiredComponents_m17772 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t816_0_0_0_var = il2cpp_codegen_type_from_index(532);
		MonoBehaviour_t47_0_0_0_var = il2cpp_codegen_type_from_index(295);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		RequireComponent_t816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		List_1_t4938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8783);
		List_1__ctor_m18054_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485427);
		List_1_ToArray_m18055_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485428);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t4938 * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t816 * V_3 = {0};
	TypeU5BU5D_t636* V_4 = {0};
	{
		V_0 = (List_1_t4938 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t816_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)VirtFuncInvoker2< ObjectU5BU5D_t21*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t21* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t816 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t816_il2cpp_TypeInfo_var));
		List_1_t4938 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t21* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t47_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t636* L_11 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 3));
		RequireComponent_t816 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t636* L_14 = L_11;
		RequireComponent_t816 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t636* L_17 = L_14;
		RequireComponent_t816 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t636* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t4938 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t4938 * L_22 = (List_1_t4938 *)il2cpp_codegen_object_new (List_1_t4938_il2cpp_TypeInfo_var);
		List_1__ctor_m18054(L_22, /*hidden argument*/List_1__ctor_m18054_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t816 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t4938 * L_25 = V_0;
		RequireComponent_t816 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t816 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t4938 * L_30 = V_0;
		RequireComponent_t816 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t816 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t4938 * L_35 = V_0;
		RequireComponent_t816 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t21* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t47_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t4938 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t636*)NULL;
	}

IL_00f7:
	{
		List_1_t4938 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t636* L_48 = List_1_ToArray_m18055(L_47, /*hidden argument*/List_1_ToArray_m18055_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t812_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t47_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m17773 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t812_0_0_0_var = il2cpp_codegen_type_from_index(528);
		MonoBehaviour_t47_0_0_0_var = il2cpp_codegen_type_from_index(295);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t812_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)VirtFuncInvoker2< ObjectU5BU5D_t21*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t21* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t47_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern "C" void DisallowMultipleComponent__ctor_m5572 (DisallowMultipleComponent_t1286 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" void RequireComponent__ctor_m3782 (RequireComponent_t816 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m3783 (AddComponentMenu_t817 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern "C" void AddComponentMenu__ctor_m3884 (AddComponentMenu_t817 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m3778 (ExecuteInEditMode_t812 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern "C" void HideInInspector__ctor_m3780 (HideInInspector_t814 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m17774 (SetupCoroutine_t4838 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m17775 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t21*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t21* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3130(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t21* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t4167 *, Object_t *, ObjectU5BU5D_t21*, ParameterModifierU5BU5D_t3948*, CultureInfo_t2012 *, StringU5BU5D_t20* >::Invoke(87 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t4167 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t3948*)(ParameterModifierU5BU5D_t3948*)NULL, (CultureInfo_t2012 *)NULL, (StringU5BU5D_t20*)(StringU5BU5D_t20*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m17776 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t21*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t21* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t21* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t4167 *, Object_t *, ObjectU5BU5D_t21*, ParameterModifierU5BU5D_t3948*, CultureInfo_t2012 *, StringU5BU5D_t20* >::Invoke(87 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t4167 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t3948*)(ParameterModifierU5BU5D_t3948*)NULL, (CultureInfo_t2012 *)NULL, (StringU5BU5D_t20*)(StringU5BU5D_t20*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m17777 (WritableAttribute_t4839 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m17778 (AssemblyIsEditorAssembly_t4840 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t4853_il2cpp_TypeInfo_var;
extern "C" UserProfile_t4853 * GcUserProfileData_ToUserProfile_m17779 (GcUserProfileData_t4841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t4853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8670);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t90 * L_3 = (__this->___image_3);
		UserProfile_t4853 * L_4 = (UserProfile_t4853 *)il2cpp_codegen_object_new (UserProfile_t4853_il2cpp_TypeInfo_var);
		UserProfile__ctor_m17799(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m17780 (GcUserProfileData_t4841 * __this, UserProfileU5BU5D_t4689** ___array, int32_t ___number, const MethodInfo* method)
{
	{
		UserProfileU5BU5D_t4689** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t4689**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t4689**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t4689** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t4853 * L_5 = GcUserProfileData_ToUserProfile_m17779(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t4689**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t4689**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t4689**)L_3)), L_5);
		*((UserProfile_t4853 **)(UserProfile_t4853 **)SZArrayLdElema((*((UserProfileU5BU5D_t4689**)L_3)), L_4)) = (UserProfile_t4853 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral4285, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t4855_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t4855 * GcAchievementDescriptionData_ToAchievementDescription_m17781 (GcAchievementDescriptionData_t4842 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t4855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8667);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t90 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t90 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t90 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t90 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t4855 * L_7 = (AchievementDescription_t4855 *)il2cpp_codegen_object_new (AchievementDescription_t4855_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m17819(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t4854_il2cpp_TypeInfo_var;
extern "C" Achievement_t4854 * GcAchievementData_ToAchievement_m17782 (GcAchievementData_t4843 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t4854_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8673);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t1953  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m18056((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t1953  L_5 = DateTime_AddSeconds_m10518((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t4854 * L_6 = (Achievement_t4854 *)il2cpp_codegen_object_new (Achievement_t4854_il2cpp_TypeInfo_var);
		Achievement__ctor_m17808(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t4843_marshal(const GcAchievementData_t4843& unmarshaled, GcAchievementData_t4843_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t4843_marshal_back(const GcAchievementData_t4843_marshaled& marshaled, GcAchievementData_t4843& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t4843_marshal_cleanup(GcAchievementData_t4843_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t4856_il2cpp_TypeInfo_var;
extern "C" Score_t4856 * GcScoreData_ToScore_m17783 (GcScoreData_t4844 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t4856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8675);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t1953  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m18056((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t1953  L_5 = DateTime_AddSeconds_m10518((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t4856 * L_8 = (Score_t4856 *)il2cpp_codegen_object_new (Score_t4856_il2cpp_TypeInfo_var);
		Score__ctor_m17830(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t4844_marshal(const GcScoreData_t4844& unmarshaled, GcScoreData_t4844_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t4844_marshal_back(const GcScoreData_t4844_marshaled& marshaled, GcScoreData_t4844& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t4844_marshal_cleanup(GcScoreData_t4844_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"



// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m17784 (Resolution_t4845 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m17785 (Resolution_t4845 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m17786 (Resolution_t4845 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m17787 (Resolution_t4845 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m17788 (Resolution_t4845 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m17789 (Resolution_t4845 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m17790 (Resolution_t4845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t21* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m17192(NULL /*static, unused*/, (String_t*) &_stringLiteral4286, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjects.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjectsMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46MethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void UnityEngine.GUIStateObjects::.cctor()
extern TypeInfo* Dictionary_2_t4850_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStateObjects_t4851_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m18057_MethodInfo_var;
extern "C" void GUIStateObjects__cctor_m17791 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t4850_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8784);
		GUIStateObjects_t4851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8697);
		Dictionary_2__ctor_m18057_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485429);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t4850 * L_0 = (Dictionary_2_t4850 *)il2cpp_codegen_object_new (Dictionary_2_t4850_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m18057(L_0, /*hidden argument*/Dictionary_2__ctor_m18057_MethodInfo_var);
		((GUIStateObjects_t4851_StaticFields*)GUIStateObjects_t4851_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern TypeInfo* GUIStateObjects_t4851_il2cpp_TypeInfo_var;
extern "C" Object_t * GUIStateObjects_GetStateObject_m17792 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStateObjects_t4851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8697);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStateObjects_t4851_il2cpp_TypeInfo_var);
		Dictionary_2_t4850 * L_0 = ((GUIStateObjects_t4851_StaticFields*)GUIStateObjects_t4851_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0;
		int32_t L_1 = ___controlID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3130(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = ___t;
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0031;
		}
	}

IL_001e:
	{
		Type_t * L_6 = ___t;
		Object_t * L_7 = Activator_CreateInstance_m3547(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStateObjects_t4851_il2cpp_TypeInfo_var);
		Dictionary_2_t4850 * L_8 = ((GUIStateObjects_t4851_StaticFields*)GUIStateObjects_t4851_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0;
		int32_t L_9 = ___controlID;
		Object_t * L_10 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1) */, L_8, L_9, L_10);
	}

IL_0031:
	{
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"



// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t4689_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m17793 (LocalUser_t4690 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t4689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8669);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m17798(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t4852*)((UserProfileU5BU5D_t4689*)SZArrayNew(UserProfileU5BU5D_t4689_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m17794 (LocalUser_t4690 * __this, IUserProfileU5BU5D_t4852* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t4852* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m17795 (LocalUser_t4690 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m17796 (LocalUser_t4690 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m17797 (LocalUser_t4690 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t90_il2cpp_TypeInfo_var;
extern "C" void UserProfile__ctor_m17798 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral4287;
		__this->___m_ID_1 = (String_t*) &_stringLiteral1130;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t90 * L_0 = (Texture2D_t90 *)il2cpp_codegen_object_new (Texture2D_t90_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7791(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m17799 (UserProfile_t4853 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t90 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t90 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t4864_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m17800 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		UserState_t4864_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8785);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t21* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t4864_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2662(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m17801 (UserProfile_t4853 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m17802 (UserProfile_t4853 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m17803 (UserProfile_t4853 * __this, Texture2D_t90 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t90 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m17804 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m17805 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m17806 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m17807 (UserProfile_t4853 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m17808 (Achievement_t4854 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t1953  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t1953  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m17809 (Achievement_t4854 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1953_il2cpp_TypeInfo_var);
		DateTime_t1953  L_2 = ((DateTime_t1953_StaticFields*)DateTime_t1953_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m17810 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		Achievement__ctor_m17809(__this, (String_t*) &_stringLiteral1666, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m17811 (Achievement_t4854 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Double_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t769_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t21* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t21* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_18 = L_17;
		DateTime_t1953  L_19 = (DateTime_t1953 )VirtFuncInvoker0< DateTime_t1953  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t1953  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t1953_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2662(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m17812 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m17813 (Achievement_t4854 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m17814 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m17815 (Achievement_t4854 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m17816 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m17817 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t1953  Achievement_get_lastReportedDate_m17818 (Achievement_t4854 * __this, const MethodInfo* method)
{
	{
		DateTime_t1953  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m17819 (AchievementDescription_t4855 * __this, String_t* ___id, String_t* ___title, Texture2D_t90 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t90 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m17820 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t21* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t21* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t21* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral4288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral4288;
		ObjectU5BU5D_t21* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2662(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m17821 (AchievementDescription_t4855 * __this, Texture2D_t90 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t90 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m17822 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m17823 (AchievementDescription_t4855 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m17824 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m17825 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m17826 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m17827 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m17828 (AchievementDescription_t4855 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score__ctor_m17829 (Score_t4856 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1953_il2cpp_TypeInfo_var);
		DateTime_t1953  L_2 = DateTime_get_Now_m8898(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m17830(__this, L_0, L_1, (String_t*) &_stringLiteral1130, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m17830 (Score_t4856 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t1953  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t1953  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m17831 (Score_t4856 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral4289);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral4289;
		ObjectU5BU5D_t21* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4290);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral4290;
		ObjectU5BU5D_t21* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t776_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t21* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral4291);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral4291;
		ObjectU5BU5D_t21* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t21* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral4292);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral4292;
		ObjectU5BU5D_t21* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t21* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral4293);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral4293;
		ObjectU5BU5D_t21* L_17 = L_16;
		DateTime_t1953  L_18 = (__this->___m_Date_0);
		DateTime_t1953  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t1953_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2662(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m17832 (Score_t4856 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m17833 (Score_t4856 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m17834 (Score_t4856 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m17835 (Score_t4856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t4856_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t4913_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m17836 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t4856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8675);
		ScoreU5BU5D_t4913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8674);
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, (String_t*) &_stringLiteral4294);
		Range_t4859  L_0 = {0};
		Range__ctor_m17857(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t4859  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t4856 * L_1 = (Score_t4856 *)il2cpp_codegen_object_new (Score_t4856_il2cpp_TypeInfo_var);
		Score__ctor_m17829(L_1, (String_t*) &_stringLiteral4294, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t4858*)((ScoreU5BU5D_t4913*)SZArrayNew(ScoreU5BU5D_t4913_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral4294;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t2022_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t4865_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t4866_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m17837 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UInt32_t2022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3765);
		UserScope_t4865_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8786);
		TimeScope_t4866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8787);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Range_t4859  V_0 = {0};
	Range_t4859  V_1 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral4295);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral4295;
		ObjectU5BU5D_t21* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t21* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4296);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral4296;
		ObjectU5BU5D_t21* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral4297);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral4297;
		ObjectU5BU5D_t21* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t21* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral4298);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral4298;
		ObjectU5BU5D_t21* L_12 = L_11;
		Range_t4859  L_13 = (Range_t4859 )VirtFuncInvoker0< Range_t4859  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t21* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral1298);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral1298;
		ObjectU5BU5D_t21* L_18 = L_17;
		Range_t4859  L_19 = (Range_t4859 )VirtFuncInvoker0< Range_t4859  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t21* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral4299);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral4299;
		ObjectU5BU5D_t21* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t2022_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t21* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral4300);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral4300;
		ObjectU5BU5D_t21* L_29 = L_28;
		IScoreU5BU5D_t4858* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t21* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral4301);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral4301;
		ObjectU5BU5D_t21* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t4865_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t21* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral4302);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral4302;
		ObjectU5BU5D_t21* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t4866_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t21* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral4303);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral4303;
		ObjectU5BU5D_t21* L_44 = L_43;
		StringU5BU5D_t20* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m2662(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m17838 (Leaderboard_t4693 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m17839 (Leaderboard_t4693 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m17840 (Leaderboard_t4693 * __this, IScoreU5BU5D_t4858* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t4858* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m17841 (Leaderboard_t4693 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t20* Leaderboard_GetUserFilter_m17842 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t20* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m17843 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m17844 (Leaderboard_t4693 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m17845 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m17846 (Leaderboard_t4693 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t4859  Leaderboard_get_range_m17847 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	{
		Range_t4859  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m17848 (Leaderboard_t4693 * __this, Range_t4859  ___value, const MethodInfo* method)
{
	{
		Range_t4859  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m17849 (Leaderboard_t4693 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m17850 (Leaderboard_t4693 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m17851 (HitInfo_t4860 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m3147(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m17852 (Object_t * __this /* static, unused */, HitInfo_t4860  ___lhs, HitInfo_t4860  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t49 * L_0 = ((&___lhs)->___target_0);
		GameObject_t49 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m2636(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t384 * L_3 = ((&___lhs)->___camera_1);
		Camera_t384 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m2636(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m17853 (Object_t * __this /* static, unused */, HitInfo_t4860  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t49 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t384 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_2, (Object_t642 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
struct Component_t490;
struct GUILayer_t1699;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t490;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2584_gshared (Component_t490 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2584(__this, method) (( Object_t * (*) (Component_t490 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2584_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t1699_m18058(__this, method) (( GUILayer_t1699 * (*) (Component_t490 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2584_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t4861_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t4860_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t4863_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m17854 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t4861_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8788);
		HitInfo_t4860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8789);
		SendMouseEvents_t4863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8790);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t4860  V_0 = {0};
	HitInfo_t4860  V_1 = {0};
	HitInfo_t4860  V_2 = {0};
	HitInfo_t4860  V_3 = {0};
	HitInfo_t4860  V_4 = {0};
	HitInfo_t4860  V_5 = {0};
	HitInfo_t4860  V_6 = {0};
	HitInfo_t4860  V_7 = {0};
	HitInfo_t4860  V_8 = {0};
	{
		HitInfoU5BU5D_t4861* L_0 = ((HitInfoU5BU5D_t4861*)SZArrayNew(HitInfoU5BU5D_t4861_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t4860  L_1 = V_0;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t4861* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t4860  L_3 = V_1;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t4861* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t4860  L_5 = V_2;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t4861* L_6 = ((HitInfoU5BU5D_t4861*)SZArrayNew(HitInfoU5BU5D_t4861_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t4860  L_7 = V_3;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t4861* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t4860  L_9 = V_4;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t4861* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t4860  L_11 = V_5;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t4861* L_12 = ((HitInfoU5BU5D_t4861*)SZArrayNew(HitInfoU5BU5D_t4861_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t4860  L_13 = V_6;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t4861* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t4860  L_15 = V_7;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t4861* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t4860  L_17 = V_8;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t643_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t4863_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t4862_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t4860_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t1699_m18058_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m17855 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		SendMouseEvents_t4863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8790);
		CameraU5BU5D_t4862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8791);
		HitInfo_t4860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8789);
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Component_GetComponent_TisGUILayer_t1699_m18058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485430);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t384 * V_3 = {0};
	CameraU5BU5D_t4862* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t201  V_6 = {0};
	GUILayer_t1699 * V_7 = {0};
	GUIElement_t4702 * V_8 = {0};
	Ray_t319  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t49 * V_12 = {0};
	GameObject_t49 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t4860  V_15 = {0};
	Vector3_t53  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t643_il2cpp_TypeInfo_var);
		Vector3_t53  L_0 = Input_get_mousePosition_m3136(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m17226(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		CameraU5BU5D_t4862* L_2 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		CameraU5BU5D_t4862* L_3 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t4862*)SZArrayNew(CameraU5BU5D_t4862_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		CameraU5BU5D_t4862* L_6 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m17227(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_7 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t4860  L_9 = V_15;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_12 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		CameraU5BU5D_t4862* L_14 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t4862* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t384 **)(Camera_t384 **)SZArrayLdElema(L_15, L_17));
		Camera_t384 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m2636(NULL /*static, unused*/, L_18, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t384 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t4700 * L_22 = Camera_get_targetTexture_m17215(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_22, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t384 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t201  L_25 = Camera_get_pixelRect_m17214(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t53  L_26 = V_0;
		bool L_27 = Rect_Contains_m17023((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t384 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t1699 * L_29 = Component_GetComponent_TisGUILayer_t1699_m18058(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t1699_m18058_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t1699 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m2587(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t1699 * L_32 = V_7;
		Vector3_t53  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t4702 * L_34 = GUILayer_HitTest_m16685(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t4702 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m2587(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_37 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t4702 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t49 * L_39 = Component_get_gameObject_m2624(L_38, /*hidden argument*/NULL);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t4861* L_40 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t384 * L_41 = V_3;
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_42 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t49 *)NULL;
		HitInfoU5BU5D_t4861* L_43 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t384 *)NULL;
	}

IL_0141:
	{
		Camera_t384 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m17212(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t384 * L_46 = V_3;
		Vector3_t53  L_47 = V_0;
		NullCheck(L_46);
		Ray_t319  L_48 = Camera_ScreenPointToRay_m3137(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t53  L_49 = Ray_get_direction_m2740((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m5290(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t384 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m5295(L_53, /*hidden argument*/NULL);
		Camera_t384 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m5296(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t384 * L_59 = V_3;
		Ray_t319  L_60 = V_9;
		float L_61 = V_11;
		Camera_t384 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m5300(L_62, /*hidden argument*/NULL);
		Camera_t384 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m17212(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t49 * L_66 = Camera_RaycastTry_m17231(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t49 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_67, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_69 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t49 * L_70 = V_12;
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t4861* L_71 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t384 * L_72 = V_3;
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t384 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m17220(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t384 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m17220(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_77 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t49 *)NULL;
		HitInfoU5BU5D_t4861* L_78 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t384 *)NULL;
	}

IL_0226:
	{
		Camera_t384 * L_79 = V_3;
		Ray_t319  L_80 = V_9;
		float L_81 = V_11;
		Camera_t384 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m5300(L_82, /*hidden argument*/NULL);
		Camera_t384 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m17212(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t49 * L_86 = Camera_RaycastTry2D_m17233(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t49 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_87, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_89 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t49 * L_90 = V_13;
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t4861* L_91 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t384 * L_92 = V_3;
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t384 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m17220(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t384 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m17220(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_97 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t49 *)NULL;
		HitInfoU5BU5D_t4861* L_98 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t384 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t4862* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_103 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m17856(NULL /*static, unused*/, L_102, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_107 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t643_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t4863_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t4860_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SendEvents_m17856 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t4860  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		SendMouseEvents_t4863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8790);
		HitInfo_t4860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8789);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t4860  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t643_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m3133(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m2637(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t4860  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_5 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t4860  L_7 = ___hit;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t4861* L_8 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m17851(((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral4304, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_11 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t4860  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_15 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m17852(NULL /*static, unused*/, L_14, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_18 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m17851(((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral4305, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_20 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m17851(((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral4306, /*hidden argument*/NULL);
		HitInfoU5BU5D_t4861* L_22 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t4860_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t4860  L_24 = V_2;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_25 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_28 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m17851(((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral4307, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t4860  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_31 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m17852(NULL /*static, unused*/, L_30, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t4860  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m17851((&___hit), (String_t*) &_stringLiteral4308, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_36 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, (*(HitInfo_t4860 *)((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_39 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m17851(((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral4309, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t4860  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m17853(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m17851((&___hit), (String_t*) &_stringLiteral4310, /*hidden argument*/NULL);
		HitInfo_SendMessage_m17851((&___hit), (String_t*) &_stringLiteral4308, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t4863_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t4861* L_43 = ((SendMouseEvents_t4863_StaticFields*)SendMouseEvents_t4863_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t4860  L_45 = ___hit;
		*((HitInfo_t4860 *)(HitInfo_t4860 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m17857 (Range_t4859 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m7797 (PropertyAttribute_t1506 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m5578 (TooltipAttribute_t1289 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7797(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m5576 (SpaceAttribute_t1287 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7797(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m3886 (RangeAttribute_t837 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7797(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.MultilineAttribute
#include "UnityEngine_UnityEngine_MultilineAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.MultilineAttribute
#include "UnityEngine_UnityEngine_MultilineAttributeMethodDeclarations.h"



// System.Void UnityEngine.MultilineAttribute::.ctor()
extern "C" void MultilineAttribute__ctor_m7958 (MultilineAttribute_t1719 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7797(__this, /*hidden argument*/NULL);
		__this->___lines_0 = 3;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m5581 (TextAreaAttribute_t1290 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m5577 (SelectionBaseAttribute_t1288 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m17858 (SliderState_t4867 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandler.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandlerMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClockMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"


// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m17859 (SliderHandler_t4868 * __this, Rect_t201  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t303 * ___slider, GUIStyle_t303 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method)
{
	{
		Rect_t201  L_0 = ___position;
		__this->___position_0 = L_0;
		float L_1 = ___currentValue;
		__this->___currentValue_1 = L_1;
		float L_2 = ___size;
		__this->___size_2 = L_2;
		float L_3 = ___start;
		__this->___start_3 = L_3;
		float L_4 = ___end;
		__this->___end_4 = L_4;
		GUIStyle_t303 * L_5 = ___slider;
		__this->___slider_5 = L_5;
		GUIStyle_t303 * L_6 = ___thumb;
		__this->___thumb_6 = L_6;
		bool L_7 = ___horiz;
		__this->___horiz_7 = L_7;
		int32_t L_8 = ___id;
		__this->___id_8 = L_8;
		return;
	}
}
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m17860 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		GUIStyle_t303 * L_0 = (__this->___slider_5);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t303 * L_1 = (__this->___thumb_6);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_001d:
	{
		int32_t L_3 = SliderHandler_CurrentEventType_m17865(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4 == 0)
		{
			goto IL_004f;
		}
		if (L_4 == 1)
		{
			goto IL_005d;
		}
		if (L_4 == 2)
		{
			goto IL_006b;
		}
		if (L_4 == 3)
		{
			goto IL_0056;
		}
		if (L_4 == 4)
		{
			goto IL_006b;
		}
		if (L_4 == 5)
		{
			goto IL_006b;
		}
		if (L_4 == 6)
		{
			goto IL_006b;
		}
		if (L_4 == 7)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006b;
	}

IL_004f:
	{
		float L_5 = SliderHandler_OnMouseDown_m17861(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0056:
	{
		float L_6 = SliderHandler_OnMouseDrag_m17862(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_005d:
	{
		float L_7 = SliderHandler_OnMouseUp_m17863(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_0064:
	{
		float L_8 = SliderHandler_OnRepaint_m17864(__this, /*hidden argument*/NULL);
		return L_8;
	}

IL_006b:
	{
		float L_9 = (__this->___currentValue_1);
		return L_9;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern TypeInfo* GUI_t645_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern TypeInfo* SystemClock_t4872_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseDown_m17861 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		SystemClock_t4872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8792);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	DateTime_t1953  V_3 = {0};
	{
		Rect_t201  L_0 = (__this->___position_0);
		V_1 = L_0;
		Event_t590 * L_1 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t97  L_2 = Event_get_mousePosition_m16970(L_1, /*hidden argument*/NULL);
		bool L_3 = Rect_Contains_m3152((&V_1), L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = SliderHandler_IsEmptySlider_m17867(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		float L_5 = (__this->___currentValue_1);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_scrollTroughSide_m16700(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m16824(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Event_t590 * L_7 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Event_Use_m7542(L_7, /*hidden argument*/NULL);
		Rect_t201  L_8 = SliderHandler_ThumbSelectionRect_m17874(__this, /*hidden argument*/NULL);
		V_2 = L_8;
		Event_t590 * L_9 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector2_t97  L_10 = Event_get_mousePosition_m16970(L_9, /*hidden argument*/NULL);
		bool L_11 = Rect_Contains_m3152((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		float L_12 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		SliderHandler_StartDraggingWithValue_m17875(__this, L_12, /*hidden argument*/NULL);
		float L_13 = (__this->___currentValue_1);
		return L_13;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_changed_m16704(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		bool L_14 = SliderHandler_SupportsPageMovements_m17868(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		SliderState_t4867 * L_15 = SliderHandler_SliderState_m17876(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t4872_il2cpp_TypeInfo_var);
		DateTime_t1953  L_16 = SystemClock_get_now_m17909(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_16;
		DateTime_t1953  L_17 = DateTime_AddMilliseconds_m15351((&V_3), (250.0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_m16698(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		int32_t L_18 = SliderHandler_CurrentScrollTroughSide_m17866(__this, /*hidden argument*/NULL);
		GUI_set_scrollTroughSide_m16700(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		float L_19 = SliderHandler_PageMovementValue_m17869(__this, /*hidden argument*/NULL);
		return L_19;
	}

IL_00c7:
	{
		float L_20 = SliderHandler_ValueForCurrentMousePosition_m17872(__this, /*hidden argument*/NULL);
		V_0 = L_20;
		float L_21 = V_0;
		SliderHandler_StartDraggingWithValue_m17875(__this, L_21, /*hidden argument*/NULL);
		float L_22 = V_0;
		float L_23 = SliderHandler_Clamp_m17873(__this, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t645_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseDrag_m17862 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		GUI_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	SliderState_t4867 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_get_hotControl_m3134(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_0017:
	{
		SliderState_t4867 * L_3 = SliderHandler_SliderState_m17876(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		SliderState_t4867 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = (L_4->___isDragging_2);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = (__this->___currentValue_1);
		return L_6;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_changed_m16704(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Event_t590 * L_7 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Event_Use_m7542(L_7, /*hidden argument*/NULL);
		float L_8 = SliderHandler_MousePosition_m17881(__this, /*hidden argument*/NULL);
		SliderState_t4867 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = (L_9->___dragStartPos_0);
		V_1 = ((float)((float)L_8-(float)L_10));
		SliderState_t4867 * L_11 = V_0;
		NullCheck(L_11);
		float L_12 = (L_11->___dragStartValue_1);
		float L_13 = V_1;
		float L_14 = SliderHandler_ValuesPerPixel_m17882(__this, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_12+(float)((float)((float)L_13/(float)L_14))));
		float L_15 = V_2;
		float L_16 = SliderHandler_Clamp_m17873(__this, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseUp_m17863 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_get_hotControl_m3134(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		Event_t590 * L_2 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Event_Use_m7542(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m16824(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		float L_3 = (__this->___currentValue_1);
		return L_3;
	}
}
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern TypeInfo* GUIContent_t566_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SystemClock_t4872_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnRepaint_m17864 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		GUI_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		SystemClock_t4872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8792);
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	DateTime_t1953  V_2 = {0};
	{
		GUIStyle_t303 * L_0 = (__this->___slider_5);
		Rect_t201  L_1 = (__this->___position_0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t566_il2cpp_TypeInfo_var);
		GUIContent_t566 * L_2 = ((GUIContent_t566_StaticFields*)GUIContent_t566_il2cpp_TypeInfo_var->static_fields)->___none_3;
		int32_t L_3 = (__this->___id_8);
		NullCheck(L_0);
		GUIStyle_Draw_m16946(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = SliderHandler_IsEmptySlider_m17867(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		GUIStyle_t303 * L_5 = (__this->___thumb_6);
		Rect_t201  L_6 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t566_il2cpp_TypeInfo_var);
		GUIContent_t566 * L_7 = ((GUIContent_t566_StaticFields*)GUIContent_t566_il2cpp_TypeInfo_var->static_fields)->___none_3;
		int32_t L_8 = (__this->___id_8);
		NullCheck(L_5);
		GUIStyle_Draw_m16946(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		int32_t L_9 = GUIUtility_get_hotControl_m3134(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = (__this->___id_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_007c;
		}
	}
	{
		Rect_t201  L_11 = (__this->___position_0);
		V_0 = L_11;
		Event_t590 * L_12 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector2_t97  L_13 = Event_get_mousePosition_m16970(L_12, /*hidden argument*/NULL);
		bool L_14 = Rect_Contains_m3152((&V_0), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		bool L_15 = SliderHandler_IsEmptySlider_m17867(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		float L_16 = (__this->___currentValue_1);
		return L_16;
	}

IL_0083:
	{
		Rect_t201  L_17 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_1 = L_17;
		Event_t590 * L_18 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector2_t97  L_19 = Event_get_mousePosition_m16970(L_18, /*hidden argument*/NULL);
		bool L_20 = Rect_Contains_m3152((&V_1), L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		int32_t L_21 = GUI_get_scrollTroughSide_m16699(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m16824(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		float L_22 = (__this->___currentValue_1);
		return L_22;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_InternalRepaintEditorWindow_m16733(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t4872_il2cpp_TypeInfo_var);
		DateTime_t1953  L_23 = SystemClock_get_now_m17909(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t1953  L_24 = GUI_get_nextScrollStepTime_m16697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1953_il2cpp_TypeInfo_var);
		bool L_25 = DateTime_op_LessThan_m10485(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		float L_26 = (__this->___currentValue_1);
		return L_26;
	}

IL_00d8:
	{
		int32_t L_27 = SliderHandler_CurrentScrollTroughSide_m17866(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		int32_t L_28 = GUI_get_scrollTroughSide_m16699(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00ef;
		}
	}
	{
		float L_29 = (__this->___currentValue_1);
		return L_29;
	}

IL_00ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t4872_il2cpp_TypeInfo_var);
		DateTime_t1953  L_30 = SystemClock_get_now_m17909(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_30;
		DateTime_t1953  L_31 = DateTime_AddMilliseconds_m15351((&V_2), (30.0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_m16698(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		bool L_32 = SliderHandler_SupportsPageMovements_m17868(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_012e;
		}
	}
	{
		SliderState_t4867 * L_33 = SliderHandler_SliderState_m17876(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		GUI_set_changed_m16704(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_34 = SliderHandler_PageMovementValue_m17869(__this, /*hidden argument*/NULL);
		return L_34;
	}

IL_012e:
	{
		float L_35 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m17865 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	{
		Event_t590 * L_0 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		NullCheck(L_0);
		int32_t L_2 = Event_GetTypeForControl_m16969(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m17866 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t97  V_2 = {0};
	Vector2_t97  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Event_t590 * L_1 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t97  L_2 = Event_get_mousePosition_m16970(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->___x_1);
		G_B3_0 = L_3;
		goto IL_0036;
	}

IL_0023:
	{
		Event_t590 * L_4 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_t97  L_5 = Event_get_mousePosition_m16970(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = ((&V_3)->___y_2);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		bool L_7 = (__this->___horiz_7);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Rect_t201  L_8 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = Rect_get_x_m5336((&V_4), /*hidden argument*/NULL);
		G_B6_0 = L_9;
		goto IL_0065;
	}

IL_0056:
	{
		Rect_t201  L_10 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Rect_get_y_m5337((&V_5), /*hidden argument*/NULL);
		G_B6_0 = L_11;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = (-1);
	}

IL_0074:
	{
		return G_B9_0;
	}
}
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m17867 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		return ((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern TypeInfo* GUI_t645_il2cpp_TypeInfo_var;
extern "C" bool SliderHandler_SupportsPageMovements_m17868 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___size_2);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t645_il2cpp_TypeInfo_var);
		bool L_1 = GUI_get_usePageScrollbars_m16731(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m17869 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___currentValue_1);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		float L_3 = SliderHandler_MousePosition_m17881(__this, /*hidden argument*/NULL);
		float L_4 = SliderHandler_PageUpMovementBound_m17870(__this, /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0048;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = (__this->___size_2);
		int32_t L_7 = V_1;
		V_0 = ((float)((float)L_5+(float)((float)((float)((float)((float)L_6*(float)(((float)L_7))))*(float)(0.9f)))));
		goto IL_005a;
	}

IL_0048:
	{
		float L_8 = V_0;
		float L_9 = (__this->___size_2);
		int32_t L_10 = V_1;
		V_0 = ((float)((float)L_8-(float)((float)((float)((float)((float)L_9*(float)(((float)L_10))))*(float)(0.9f)))));
	}

IL_005a:
	{
		float L_11 = V_0;
		float L_12 = SliderHandler_Clamp_m17873(__this, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m17870 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Rect_t201  L_1 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Rect_get_xMax_m3625((&V_0), /*hidden argument*/NULL);
		Rect_t201  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m5336((&V_1), /*hidden argument*/NULL);
		return ((float)((float)L_2-(float)L_4));
	}

IL_0029:
	{
		Rect_t201  L_5 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_yMax_m3622((&V_2), /*hidden argument*/NULL);
		Rect_t201  L_7 = (__this->___position_0);
		V_3 = L_7;
		float L_8 = Rect_get_y_m5337((&V_3), /*hidden argument*/NULL);
		return ((float)((float)L_6-(float)L_8));
	}
}
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t590 * SliderHandler_CurrentEvent_m17871 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	{
		Event_t590 * L_0 = Event_get_current_m3288(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m17872 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		float L_1 = SliderHandler_MousePosition_m17881(__this, /*hidden argument*/NULL);
		Rect_t201  L_2 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2900((&V_0), /*hidden argument*/NULL);
		float L_4 = SliderHandler_ValuesPerPixel_m17882(__this, /*hidden argument*/NULL);
		float L_5 = (__this->___start_3);
		float L_6 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_1-(float)((float)((float)L_3*(float)(0.5f)))))/(float)L_4))+(float)L_5))-(float)((float)((float)L_6*(float)(0.5f)))));
	}

IL_0042:
	{
		float L_7 = SliderHandler_MousePosition_m17881(__this, /*hidden argument*/NULL);
		Rect_t201  L_8 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		float L_10 = SliderHandler_ValuesPerPixel_m17882(__this, /*hidden argument*/NULL);
		float L_11 = (__this->___start_3);
		float L_12 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_7-(float)((float)((float)L_9*(float)(0.5f)))))/(float)L_10))+(float)L_11))-(float)((float)((float)L_12*(float)(0.5f)))));
	}
}
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_Clamp_m17873 (SliderHandler_t4868 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		float L_1 = SliderHandler_MinValue_m17885(__this, /*hidden argument*/NULL);
		float L_2 = SliderHandler_MaxValue_m17884(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m2639(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t201  SliderHandler_ThumbSelectionRect_m17874 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	int32_t V_1 = 0;
	{
		Rect_t201  L_0 = SliderHandler_ThumbRect_m17877(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = ((int32_t)12);
		float L_1 = Rect_get_width_m2900((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		if ((!(((float)L_1) < ((float)(((float)L_2))))))
		{
			goto IL_003f;
		}
	}
	{
		Rect_t201 * L_3 = (&V_0);
		float L_4 = Rect_get_x_m5336(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		float L_6 = Rect_get_width_m2900((&V_0), /*hidden argument*/NULL);
		Rect_set_x_m3284(L_3, ((float)((float)L_4-(float)((float)((float)((float)((float)(((float)L_5))-(float)L_6))/(float)(2.0f))))), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		Rect_set_width_m3285((&V_0), (((float)L_7)), /*hidden argument*/NULL);
	}

IL_003f:
	{
		float L_8 = Rect_get_height_m3040((&V_0), /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		if ((!(((float)L_8) < ((float)(((float)L_9))))))
		{
			goto IL_0074;
		}
	}
	{
		Rect_t201 * L_10 = (&V_0);
		float L_11 = Rect_get_y_m5337(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		float L_13 = Rect_get_height_m3040((&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3283(L_10, ((float)((float)L_11-(float)((float)((float)((float)((float)(((float)L_12))-(float)L_13))/(float)(2.0f))))), /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		Rect_set_height_m3286((&V_0), (((float)L_14)), /*hidden argument*/NULL);
	}

IL_0074:
	{
		Rect_t201  L_15 = V_0;
		return L_15;
	}
}
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m17875 (SliderHandler_t4868 * __this, float ___dragStartValue, const MethodInfo* method)
{
	SliderState_t4867 * V_0 = {0};
	{
		SliderState_t4867 * L_0 = SliderHandler_SliderState_m17876(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		SliderState_t4867 * L_1 = V_0;
		float L_2 = SliderHandler_MousePosition_m17881(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___dragStartPos_0 = L_2;
		SliderState_t4867 * L_3 = V_0;
		float L_4 = ___dragStartValue;
		NullCheck(L_3);
		L_3->___dragStartValue_1 = L_4;
		SliderState_t4867 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___isDragging_2 = 1;
		return;
	}
}
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern const Il2CppType* SliderState_t4867_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern TypeInfo* SliderState_t4867_il2cpp_TypeInfo_var;
extern "C" SliderState_t4867 * SliderHandler_SliderState_m17876 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SliderState_t4867_0_0_0_var = il2cpp_codegen_type_from_index(8793);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		SliderState_t4867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8793);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(SliderState_t4867_0_0_0_var), /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		Object_t * L_2 = GUIUtility_GetStateObject_m16823(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((SliderState_t4867 *)Castclass(L_2, SliderState_t4867_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t201  SliderHandler_ThumbRect_m17877 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Rect_t201  G_B3_0 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Rect_t201  L_1 = SliderHandler_HorizontalThumbRect_m17879(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Rect_t201  L_2 = SliderHandler_VerticalThumbRect_m17878(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t201  SliderHandler_VerticalThumbRect_m17878 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m17882(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		Rect_t201  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m5336((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_5 = (__this->___slider_5);
		NullCheck(L_5);
		RectOffset_t736 * L_6 = GUIStyle_get_padding_m7875(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_left_m5487(L_6, /*hidden argument*/NULL);
		float L_8 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		float L_9 = (__this->___start_3);
		float L_10 = V_0;
		Rect_t201  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m5337((&V_2), /*hidden argument*/NULL);
		GUIStyle_t303 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t736 * L_14 = GUIStyle_get_padding_m7875(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m5488(L_14, /*hidden argument*/NULL);
		Rect_t201  L_16 = (__this->___position_0);
		V_3 = L_16;
		float L_17 = Rect_get_width_m2900((&V_3), /*hidden argument*/NULL);
		GUIStyle_t303 * L_18 = (__this->___slider_5);
		NullCheck(L_18);
		RectOffset_t736 * L_19 = GUIStyle_get_padding_m7875(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_horizontal_m5482(L_19, /*hidden argument*/NULL);
		float L_21 = (__this->___size_2);
		float L_22 = V_0;
		float L_23 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		Rect_t201  L_24 = {0};
		Rect__ctor_m2597(&L_24, ((float)((float)L_4+(float)(((float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8-(float)L_9))*(float)L_10))+(float)L_12))+(float)(((float)L_15)))), ((float)((float)L_17-(float)(((float)L_20)))), ((float)((float)((float)((float)L_21*(float)L_22))+(float)L_23)), /*hidden argument*/NULL);
		return L_24;
	}

IL_009d:
	{
		Rect_t201  L_25 = (__this->___position_0);
		V_4 = L_25;
		float L_26 = Rect_get_x_m5336((&V_4), /*hidden argument*/NULL);
		GUIStyle_t303 * L_27 = (__this->___slider_5);
		NullCheck(L_27);
		RectOffset_t736 * L_28 = GUIStyle_get_padding_m7875(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = RectOffset_get_left_m5487(L_28, /*hidden argument*/NULL);
		float L_30 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		float L_31 = (__this->___size_2);
		float L_32 = (__this->___start_3);
		float L_33 = V_0;
		Rect_t201  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m5337((&V_5), /*hidden argument*/NULL);
		GUIStyle_t303 * L_36 = (__this->___slider_5);
		NullCheck(L_36);
		RectOffset_t736 * L_37 = GUIStyle_get_padding_m7875(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = RectOffset_get_top_m5488(L_37, /*hidden argument*/NULL);
		Rect_t201  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_width_m2900((&V_6), /*hidden argument*/NULL);
		GUIStyle_t303 * L_41 = (__this->___slider_5);
		NullCheck(L_41);
		RectOffset_t736 * L_42 = GUIStyle_get_padding_m7875(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		int32_t L_43 = RectOffset_get_horizontal_m5482(L_42, /*hidden argument*/NULL);
		float L_44 = (__this->___size_2);
		float L_45 = V_0;
		float L_46 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		Rect_t201  L_47 = {0};
		Rect__ctor_m2597(&L_47, ((float)((float)L_26+(float)(((float)L_29)))), ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))-(float)L_32))*(float)L_33))+(float)L_35))+(float)(((float)L_38)))), ((float)((float)L_40-(float)(((float)L_43)))), ((float)((float)((float)((float)L_44*(float)((-L_45))))+(float)L_46)), /*hidden argument*/NULL);
		return L_47;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t201  SliderHandler_HorizontalThumbRect_m17879 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m17882(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		float L_3 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		float L_4 = (__this->___start_3);
		float L_5 = V_0;
		Rect_t201  L_6 = (__this->___position_0);
		V_1 = L_6;
		float L_7 = Rect_get_x_m5336((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_8 = (__this->___slider_5);
		NullCheck(L_8);
		RectOffset_t736 * L_9 = GUIStyle_get_padding_m7875(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_left_m5487(L_9, /*hidden argument*/NULL);
		Rect_t201  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m5337((&V_2), /*hidden argument*/NULL);
		GUIStyle_t303 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t736 * L_14 = GUIStyle_get_padding_m7875(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m5488(L_14, /*hidden argument*/NULL);
		float L_16 = (__this->___size_2);
		float L_17 = V_0;
		float L_18 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		Rect_t201  L_19 = (__this->___position_0);
		V_3 = L_19;
		float L_20 = Rect_get_height_m3040((&V_3), /*hidden argument*/NULL);
		GUIStyle_t303 * L_21 = (__this->___slider_5);
		NullCheck(L_21);
		RectOffset_t736 * L_22 = GUIStyle_get_padding_m7875(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = RectOffset_get_vertical_m5483(L_22, /*hidden argument*/NULL);
		Rect_t201  L_24 = {0};
		Rect__ctor_m2597(&L_24, ((float)((float)((float)((float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5))+(float)L_7))+(float)(((float)L_10)))), ((float)((float)L_12+(float)(((float)L_15)))), ((float)((float)((float)((float)L_16*(float)L_17))+(float)L_18)), ((float)((float)L_20-(float)(((float)L_23)))), /*hidden argument*/NULL);
		return L_24;
	}

IL_009d:
	{
		float L_25 = SliderHandler_ClampedCurrentValue_m17880(__this, /*hidden argument*/NULL);
		float L_26 = (__this->___size_2);
		float L_27 = (__this->___start_3);
		float L_28 = V_0;
		Rect_t201  L_29 = (__this->___position_0);
		V_4 = L_29;
		float L_30 = Rect_get_x_m5336((&V_4), /*hidden argument*/NULL);
		GUIStyle_t303 * L_31 = (__this->___slider_5);
		NullCheck(L_31);
		RectOffset_t736 * L_32 = GUIStyle_get_padding_m7875(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = RectOffset_get_left_m5487(L_32, /*hidden argument*/NULL);
		Rect_t201  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m5337((&V_5), /*hidden argument*/NULL);
		float L_36 = (__this->___size_2);
		float L_37 = V_0;
		float L_38 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		Rect_t201  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_height_m3040((&V_6), /*hidden argument*/NULL);
		Rect_t201  L_41 = {0};
		Rect__ctor_m2597(&L_41, ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_25+(float)L_26))-(float)L_27))*(float)L_28))+(float)L_30))+(float)(((float)L_33)))), L_35, ((float)((float)((float)((float)L_36*(float)((-L_37))))+(float)L_38)), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m17880 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___currentValue_1);
		float L_1 = SliderHandler_Clamp_m17873(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m17881 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	Rect_t201  V_1 = {0};
	Vector2_t97  V_2 = {0};
	Rect_t201  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Event_t590 * L_1 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t97  L_2 = Event_get_mousePosition_m16970(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___x_1);
		Rect_t201  L_4 = (__this->___position_0);
		V_1 = L_4;
		float L_5 = Rect_get_x_m5336((&V_1), /*hidden argument*/NULL);
		return ((float)((float)L_3-(float)L_5));
	}

IL_002e:
	{
		Event_t590 * L_6 = SliderHandler_CurrentEvent_m17871(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t97  L_7 = Event_get_mousePosition_m16970(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = ((&V_2)->___y_2);
		Rect_t201  L_9 = (__this->___position_0);
		V_3 = L_9;
		float L_10 = Rect_get_y_m5337((&V_3), /*hidden argument*/NULL);
		return ((float)((float)L_8-(float)L_10));
	}
}
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m17882 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		Rect_t201  L_1 = (__this->___position_0);
		V_0 = L_1;
		float L_2 = Rect_get_width_m2900((&V_0), /*hidden argument*/NULL);
		GUIStyle_t303 * L_3 = (__this->___slider_5);
		NullCheck(L_3);
		RectOffset_t736 * L_4 = GUIStyle_get_padding_m7875(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_horizontal_m5482(L_4, /*hidden argument*/NULL);
		float L_6 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		float L_7 = (__this->___end_4);
		float L_8 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)(((float)L_5))))-(float)L_6))/(float)((float)((float)L_7-(float)L_8))));
	}

IL_0041:
	{
		Rect_t201  L_9 = (__this->___position_0);
		V_1 = L_9;
		float L_10 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_11 = (__this->___slider_5);
		NullCheck(L_11);
		RectOffset_t736 * L_12 = GUIStyle_get_padding_m7875(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_vertical_m5483(L_12, /*hidden argument*/NULL);
		float L_14 = SliderHandler_ThumbSize_m17883(__this, /*hidden argument*/NULL);
		float L_15 = (__this->___end_4);
		float L_16 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_10-(float)(((float)L_13))))-(float)L_14))/(float)((float)((float)L_15-(float)L_16))));
	}
}
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m17883 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t303 * L_1 = (__this->___thumb_6);
		NullCheck(L_1);
		float L_2 = GUIStyle_get_fixedWidth_m16935(L_1, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		GUIStyle_t303 * L_3 = (__this->___thumb_6);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedWidth_m16935(L_3, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_0041;
	}

IL_0030:
	{
		GUIStyle_t303 * L_5 = (__this->___thumb_6);
		NullCheck(L_5);
		RectOffset_t736 * L_6 = GUIStyle_get_padding_m7875(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_horizontal_m5482(L_6, /*hidden argument*/NULL);
		G_B4_0 = (((float)L_7));
	}

IL_0041:
	{
		return G_B4_0;
	}

IL_0042:
	{
		GUIStyle_t303 * L_8 = (__this->___thumb_6);
		NullCheck(L_8);
		float L_9 = GUIStyle_get_fixedHeight_m16936(L_8, /*hidden argument*/NULL);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		GUIStyle_t303 * L_10 = (__this->___thumb_6);
		NullCheck(L_10);
		float L_11 = GUIStyle_get_fixedHeight_m16936(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		goto IL_0078;
	}

IL_0067:
	{
		GUIStyle_t303 * L_12 = (__this->___thumb_6);
		NullCheck(L_12);
		RectOffset_t736 * L_13 = GUIStyle_get_padding_m7875(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_vertical_m5483(L_13, /*hidden argument*/NULL);
		G_B8_0 = (((float)L_14));
	}

IL_0078:
	{
		return G_B8_0;
	}
}
// System.Single UnityEngine.SliderHandler::MaxValue()
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_MaxValue_m17884 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m5443(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (__this->___size_2);
		return ((float)((float)L_2-(float)L_3));
	}
}
// System.Single UnityEngine.SliderHandler::MinValue()
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_MinValue_m17885 (SliderHandler_t4868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m3358(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m17886 (StackTraceUtility_t4869 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m17887 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m17888 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t4477_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m17889 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t4477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7599);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t4477 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t4477 * L_0 = (StackTrace_t4477 *)il2cpp_codegen_object_new (StackTrace_t4477_il2cpp_TypeInfo_var);
		StackTrace__ctor_m18059(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t4477 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m17894(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m17890 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3455(L_1, (String_t*) &_stringLiteral4311, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3455(L_3, (String_t*) &_stringLiteral4312, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3455(L_5, (String_t*) &_stringLiteral4313, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3455(L_7, (String_t*) &_stringLiteral4314, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3455(L_9, (String_t*) &_stringLiteral4315, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3455(L_11, (String_t*) &_stringLiteral4316, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m17891 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m17892(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m103(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral148, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t496_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t4477_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m17892 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		Exception_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTrace_t4477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7599);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * V_0 = {0};
	StringBuilder_t696 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t4477 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t725 * L_1 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_1, (String_t*) &_stringLiteral4317, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t496 *)IsInst(L_2, Exception_t496_il2cpp_TypeInfo_var));
		Exception_t496 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t725 * L_4 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_4, (String_t*) &_stringLiteral4318, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t496 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t496 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3041(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t696 * L_10 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m13233(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m3041(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t496 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t496 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m103(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral148, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t496 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t496 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t496 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m2889(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m3041(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m105(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral467, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m105(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t496 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t496 * L_41 = (Exception_t496 *)VirtFuncInvoker0< Exception_t496 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m3030(NULL /*static, unused*/, (String_t*) &_stringLiteral4319, L_42, (String_t*) &_stringLiteral148, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t496 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t496 * L_46 = (Exception_t496 *)VirtFuncInvoker0< Exception_t496 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t496 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t696 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m105(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral148, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3049(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t4477 * L_51 = (StackTrace_t4477 *)il2cpp_codegen_object_new (StackTrace_t4477_il2cpp_TypeInfo_var);
		StackTrace__ctor_m18059(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t696 * L_52 = V_1;
		StackTrace_t4477 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m17894(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3049(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t696 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t583_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m17893 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CharU5BU5D_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t20* V_0 = {0};
	StringBuilder_t696 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t583* L_3 = ((CharU5BU5D_t583*)SZArrayNew(CharU5BU5D_t583_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t20* L_4 = String_Split_m3309(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3041(L_5, /*hidden argument*/NULL);
		StringBuilder_t696 * L_7 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m13233(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t20* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t20* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m2889((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t20* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t20* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m3041(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m3046(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3455(L_24, (String_t*) &_stringLiteral4320, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3455(L_27, (String_t*) &_stringLiteral4321, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t20* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m17890(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t20* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m17890(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m7739(L_38, (String_t*) &_stringLiteral4322, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m3044(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m7739(L_44, (String_t*) &_stringLiteral4323, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m7739(L_46, (String_t*) &_stringLiteral4324, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m7739(L_48, (String_t*) &_stringLiteral4325, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3455(L_51, (String_t*) &_stringLiteral1016, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m7837(L_53, (String_t*) &_stringLiteral565, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3455(L_55, (String_t*) &_stringLiteral4326, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2714(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m7739(L_59, (String_t*) &_stringLiteral4327, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m13197(L_62, (String_t*) &_stringLiteral565, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m2714(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3757(L_73, (String_t*) &_stringLiteral4328, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3757(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m7644(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m13196(L_82, (String_t*) &_stringLiteral4329, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m2714(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m3692(L_88, L_89, (String_t*) &_stringLiteral4330, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m3041(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m3692(L_91, L_93, (String_t*) &_stringLiteral781, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t696 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m105(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral148, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3049(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t20* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t696 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t4869_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m17894 (Object_t * __this /* static, unused */, StackTrace_t4477 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t4869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8794);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t4939 * V_2 = {0};
	MethodBase_t670 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t635* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m13233(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t4477 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t4939 * L_3 = (StackFrame_t4939 *)VirtFuncInvoker1< StackFrame_t4939 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t4939 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t670 * L_5 = (MethodBase_t670 *)VirtFuncInvoker0< MethodBase_t670 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t670 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t670 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3041(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t696 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3049(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t696 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3049(L_17, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t696 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3049(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t696 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3049(L_21, (String_t*) &_stringLiteral622, /*hidden argument*/NULL);
		StringBuilder_t696 * L_22 = V_0;
		MethodBase_t670 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3049(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t696 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3049(L_25, (String_t*) &_stringLiteral2026, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t670 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t635* L_27 = (ParameterInfoU5BU5D_t635*)VirtFuncInvoker0< ParameterInfoU5BU5D_t635* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t696 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3049(L_29, (String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t696 * L_30 = V_0;
		ParameterInfoU5BU5D_t635* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t762 **)(ParameterInfo_t762 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t762 **)(ParameterInfo_t762 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3049(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t635* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t696 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3049(L_39, (String_t*) &_stringLiteral781, /*hidden argument*/NULL);
		StackFrame_t4939 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m2603(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral4331, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m2603(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral4332, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t696 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3049(L_49, (String_t*) &_stringLiteral4330, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3455(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t4869_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m3041(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m3041(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t4869_StaticFields*)StackTraceUtility_t4869_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m3041(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m3044(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t696 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3049(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t696 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3049(L_63, (String_t*) &_stringLiteral622, /*hidden argument*/NULL);
		StringBuilder_t696 * L_64 = V_0;
		StackFrame_t4939 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m2707((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3049(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t696 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3049(L_68, (String_t*) &_stringLiteral781, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t696 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3049(L_69, (String_t*) &_stringLiteral148, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t4477 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t696 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m17895 (UnityException_t1256 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m3464(__this, (String_t*) &_stringLiteral4333, /*hidden argument*/NULL);
		Exception_set_HResult_m18060(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m17896 (UnityException_t1256 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3464(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m18060(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m17897 (UnityException_t1256 * __this, String_t* ___message, Exception_t496 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t496 * L_1 = ___innerException;
		Exception__ctor_m9082(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m18060(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m17898 (UnityException_t1256 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t3296 * L_0 = ___info;
		StreamingContext_t3297  L_1 = ___context;
		Exception__ctor_m10471(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m17899 (SharedBetweenAnimatorsAttribute_t4870 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m17900 (StateMachineBehaviour_t4871 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m3556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m17901 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, AnimatorStateInfo_t627  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m17902 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, AnimatorStateInfo_t627  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m17903 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, AnimatorStateInfo_t627  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m17904 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, AnimatorStateInfo_t627  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m17905 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, AnimatorStateInfo_t627  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m17906 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m17907 (StateMachineBehaviour_t4871 * __this, Animator_t214 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClock.h"
#ifndef _MSC_VER
#else
#endif

// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"


// System.Void UnityEngine.SystemClock::.cctor()
extern TypeInfo* SystemClock_t4872_il2cpp_TypeInfo_var;
extern "C" void SystemClock__cctor_m17908 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemClock_t4872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8792);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t1953  L_0 = {0};
		DateTime__ctor_m18061(&L_0, ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((SystemClock_t4872_StaticFields*)SystemClock_t4872_il2cpp_TypeInfo_var->static_fields)->___s_Epoch_0 = L_0;
		return;
	}
}
// System.DateTime UnityEngine.SystemClock::get_now()
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern "C" DateTime_t1953  SystemClock_get_now_m17909 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1953_il2cpp_TypeInfo_var);
		DateTime_t1953  L_0 = DateTime_get_Now_m8898(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"



// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t566_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t303_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m3661 (TextEditor_t795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		GUIStyle_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t566 * L_0 = (GUIContent_t566 *)il2cpp_codegen_object_new (GUIContent_t566_il2cpp_TypeInfo_var);
		GUIContent__ctor_m16892(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle_t303 * L_1 = GUIStyle_get_none_m3325(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t97  L_2 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m17910 (TextEditor_t795 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m3664 (TextEditor_t795 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m17912(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m17911 (TextEditor_t795 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasFocus_10 = 0;
		Vector2_t97  L_0 = Vector2_get_zero_m3109(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m17912 (TextEditor_t795 * __this, const MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t566 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3663(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3041(L_1, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m17910(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m17913 (TextEditor_t795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t566 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3663(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3041(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t566 * L_13 = (__this->___content_4);
		GUIContent_t566 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m3663(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m3044(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t566 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m3663(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t566 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m3663(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3041(L_22, /*hidden argument*/NULL);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m3044(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m105(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m16895(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t566 * L_28 = (__this->___content_4);
		GUIContent_t566 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m3663(L_29, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m3044(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t566 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m3663(L_33, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t566 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m3663(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m3041(L_37, /*hidden argument*/NULL);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m3044(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m105(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m16895(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m17910(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m17914 (TextEditor_t795 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m17913(__this, /*hidden argument*/NULL);
		GUIContent_t566 * L_0 = (__this->___content_4);
		GUIContent_t566 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m3663(L_1, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m3692(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m16895(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3041(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m17910(__this, /*hidden argument*/NULL);
		TextEditor_UpdateScrollOffset_m17916(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m17915 (TextEditor_t795 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_TextHeightPotentiallyChanged_12);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TextEditor_UpdateScrollOffset_m17916(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 0;
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m17916 (TextEditor_t795 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t201  V_1 = {0};
	Vector2_t97  V_2 = {0};
	Vector2_t97  V_3 = {0};
	Vector2_t97 * G_B17_0 = {0};
	Vector2_t97 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t97 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t303 * L_1 = (__this->___style_5);
		Rect_t201 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m2900(L_2, /*hidden argument*/NULL);
		Rect_t201 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m3040(L_4, /*hidden argument*/NULL);
		Rect_t201  L_6 = {0};
		Rect__ctor_m2597(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t566 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t97  L_9 = GUIStyle_GetCursorPixelPosition_m16951(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t303 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t736 * L_11 = GUIStyle_get_padding_m7875(L_10, /*hidden argument*/NULL);
		Rect_t201  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t201  L_13 = RectOffset_Remove_m16919(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t303 * L_14 = (__this->___style_5);
		GUIContent_t566 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t97  L_16 = GUIStyle_CalcSize_m3155(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t303 * L_18 = (__this->___style_5);
		GUIContent_t566 * L_19 = (__this->___content_4);
		Rect_t201 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m2900(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m7831(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m2589((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t201 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m2900(L_24, /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t97 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t97 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t97 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m2900((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t97 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t97 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m2900((&V_1), /*hidden argument*/NULL);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t97 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t97 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t303 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t736 * L_41 = GUIStyle_get_padding_m7875(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m5487(L_41, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t97 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t97 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t303 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t736 * L_47 = GUIStyle_get_padding_m7875(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m5487(L_47, /*hidden argument*/NULL);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t97 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t97 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t303 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m7862(L_54, /*hidden argument*/NULL);
		Vector2_t97 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t736 * L_60 = GUIStyle_get_padding_m7875(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m5488(L_60, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t97 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t97 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t736 * L_67 = GUIStyle_get_padding_m7875(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m5488(L_67, /*hidden argument*/NULL);
		GUIStyle_t303 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m7862(L_69, /*hidden argument*/NULL);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t97 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t97 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t303 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t736 * L_76 = GUIStyle_get_padding_m7875(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m5488(L_76, /*hidden argument*/NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t97 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t97 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t303 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t736 * L_82 = GUIStyle_get_padding_m7875(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m5488(L_82, /*hidden argument*/NULL);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t97 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t97 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t97 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m3040((&V_1), /*hidden argument*/NULL);
		GUIStyle_t303 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t736 * L_94 = GUIStyle_get_padding_m7875(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m5488(L_94, /*hidden argument*/NULL);
		GUIStyle_t303 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t736 * L_97 = GUIStyle_get_padding_m7875(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m7877(L_97, /*hidden argument*/NULL);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t97 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t97 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t97 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m17917 (TextEditor_t795 * __this, const MethodInfo* method)
{
	{
		GUIContent_t566 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3663(L_0, /*hidden argument*/NULL);
		__this->___oldText_20 = L_1;
		int32_t L_2 = (__this->___pos_1);
		__this->___oldPos_21 = L_2;
		int32_t L_3 = (__this->___selectPos_2);
		__this->___oldSelectPos_22 = L_3;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m3665 (TextEditor_t795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t566 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m3663(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m3044(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t566 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m3663(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m3044(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m16830(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m17918 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3757(L_0, (String_t*) &_stringLiteral2435, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m7644(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m7644(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m3662 (TextEditor_t795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m16829(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m3461(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m17918(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m17914(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::ClampPos()
extern TypeInfo* GUIUtility_t709_il2cpp_TypeInfo_var;
extern "C" void TextEditor_ClampPos_m17919 (TextEditor_t795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasFocus_10);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		int32_t L_2 = GUIUtility_get_keyboardControl_m16827(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		TextEditor_OnLostFocus_m17911(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		bool L_3 = (__this->___m_HasFocus_10);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t709_il2cpp_TypeInfo_var);
		int32_t L_5 = GUIUtility_get_keyboardControl_m16827(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		TextEditor_OnFocus_m3664(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		int32_t L_6 = (__this->___pos_1);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		__this->___pos_1 = 0;
		goto IL_008b;
	}

IL_005a:
	{
		int32_t L_7 = (__this->___pos_1);
		GUIContent_t566 * L_8 = (__this->___content_4);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m3663(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3041(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		GUIContent_t566 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m3663(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3041(L_12, /*hidden argument*/NULL);
		__this->___pos_1 = L_13;
	}

IL_008b:
	{
		int32_t L_14 = (__this->___selectPos_2);
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		__this->___selectPos_2 = 0;
		goto IL_00d4;
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___selectPos_2);
		GUIContent_t566 * L_16 = (__this->___content_4);
		NullCheck(L_16);
		String_t* L_17 = GUIContent_get_text_m3663(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m3041(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)L_18)))
		{
			goto IL_00d4;
		}
	}
	{
		GUIContent_t566 * L_19 = (__this->___content_4);
		NullCheck(L_19);
		String_t* L_20 = GUIContent_get_text_m3663(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m3041(L_20, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_21;
	}

IL_00d4:
	{
		int32_t L_22 = (__this->___m_iAltCursorPos_19);
		GUIContent_t566 * L_23 = (__this->___content_4);
		NullCheck(L_23);
		String_t* L_24 = GUIContent_get_text_m3663(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m3041(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)L_25)))
		{
			goto IL_0105;
		}
	}
	{
		GUIContent_t566 * L_26 = (__this->___content_4);
		NullCheck(L_26);
		String_t* L_27 = GUIContent_get_text_m3663(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3041(L_27, /*hidden argument*/NULL);
		__this->___m_iAltCursorPos_19 = L_28;
	}

IL_0105:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t89_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m17920 (TextGenerationSettings_t800 * __this, Color_t121  ___left, Color_t121  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t89  V_0 = {0};
	Color32_t89  V_1 = {0};
	{
		Color_t121  L_0 = ___left;
		Color32_t89  L_1 = Color32_op_Implicit_m2704(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t121  L_2 = ___right;
		Color32_t89  L_3 = Color32_op_Implicit_m2704(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t89  L_4 = V_0;
		Color32_t89  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t89_il2cpp_TypeInfo_var, &L_5);
		Color32_t89  L_7 = V_1;
		Color32_t89  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t89_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m17921 (TextGenerationSettings_t800 * __this, Vector2_t97  ___left, Vector2_t97  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m5290(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m5290(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t647_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m17922 (TextGenerationSettings_t800 * __this, TextGenerationSettings_t800  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t121  L_0 = (__this->___color_1);
		Color_t121  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m17920(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m5290(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t647_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m5290(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t97  L_35 = (__this->___generationExtents_14);
		Vector2_t97  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m17921(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t97  L_38 = (__this->___pivot_15);
		Vector2_t97  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m17921(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t556 * L_41 = (__this->___font_0);
		Font_t556 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m2636(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t4780_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m17923 (TrackedReference_t4780 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t4780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8795);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m17925(NULL /*static, unused*/, ((TrackedReference_t4780 *)IsInst(L_0, TrackedReference_t4780_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m17924 (TrackedReference_t4780 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m15307(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m17925 (Object_t * __this /* static, unused */, TrackedReference_t4780 * ___x, TrackedReference_t4780 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t4780 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t4780 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t4780 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m15280(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t4780 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m15280(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t4780 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t4780 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m15280(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t4780_marshal(const TrackedReference_t4780& unmarshaled, TrackedReference_t4780_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t4780_marshal_back(const TrackedReference_t4780_marshaled& marshaled, TrackedReference_t4780& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t4780_marshal_cleanup(TrackedReference_t4780_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m17926 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t642 * ArgumentCache_get_unityObjectArgument_m17927 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		Object_t642 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m17928 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m17929 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m17930 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m17931 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m17932 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t789_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m17933 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Regex_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t789_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m14839(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral4334, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m14839(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4335, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m14839(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral4336, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m17934 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m17933(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m17935 (ArgumentCache_t4877 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m17933(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"



// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m17936 (BaseInvokableCall_t4878 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void BaseInvokableCall__ctor_m17937 (BaseInvokableCall_t4878 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*) &_stringLiteral4337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*) &_stringLiteral2247, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m17938 (Object_t * __this /* static, unused */, Delegate_t651 * ___delegate, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t651 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m18062(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t651 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m18063(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t702_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t702_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m17939 (InvokableCall_t4879 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t702_0_0_0_var = il2cpp_codegen_type_from_index(256);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		UnityAction_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m17937(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t702 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(UnityAction_t702_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t651 * L_6 = Delegate_CreateDelegate_m18064(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t651 * L_7 = Delegate_Combine_m2699(NULL /*static, unused*/, L_2, ((UnityAction_t702 *)IsInst(L_6, UnityAction_t702_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t702 *)Castclass(L_7, UnityAction_t702_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t702_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m17940 (InvokableCall_t4879 * __this, UnityAction_t702 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m17936(__this, /*hidden argument*/NULL);
		UnityAction_t702 * L_0 = (__this->___Delegate_0);
		UnityAction_t702 * L_1 = ___action;
		Delegate_t651 * L_2 = Delegate_Combine_m2699(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t702 *)Castclass(L_2, UnityAction_t702_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m17941 (InvokableCall_t4879 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
{
	{
		UnityAction_t702 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m17938(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t702 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Events.UnityAction::Invoke() */, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m17942 (InvokableCall_t4879 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t702 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m18063(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t702 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m18062(L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
