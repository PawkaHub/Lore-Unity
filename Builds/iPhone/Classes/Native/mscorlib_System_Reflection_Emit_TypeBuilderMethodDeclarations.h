﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t5086;
// System.Reflection.Assembly
struct Assembly_t1806;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t5096;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1712;
// System.Reflection.Binder
struct Binder_t3929;
// System.Type[]
struct TypeU5BU5D_t580;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3710;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1795;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t5453;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t3935;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3936;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2475;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1794;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1771;
// System.String[]
struct StringU5BU5D_t20;
// System.Exception
struct Exception_t468;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m20578 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1806 * TypeBuilder_get_Assembly_m20579 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m20580 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m20581 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m20582 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m20583 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m20584 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t5096 * TypeBuilder_get_Module_m20585 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m20586 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m20587 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m20588 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1712 * TypeBuilder_GetConstructorImpl_m20589 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, Binder_t3929 * ___binder, int32_t ___callConvention, TypeU5BU5D_t580* ___types, ParameterModifierU5BU5D_t3710* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m20590 (TypeBuilder_t5086 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t21* TypeBuilder_GetCustomAttributes_m20591 (TypeBuilder_t5086 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t21* TypeBuilder_GetCustomAttributes_m20592 (TypeBuilder_t5086 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1795* TypeBuilder_GetConstructors_m20593 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1795* TypeBuilder_GetConstructorsInternal_m20594 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m20595 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m20596 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.TypeBuilder::GetEvents(System.Reflection.BindingFlags)
extern "C" EventInfoU5BU5D_t5453* TypeBuilder_GetEvents_m20597 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m20598 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t3935* TypeBuilder_GetFields_m20599 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t580* TypeBuilder_GetInterfaces_m20600 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Reflection.Emit.TypeBuilder::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
extern "C" MemberInfoU5BU5D_t3936* TypeBuilder_GetMember_m20601 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___type, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t2475* TypeBuilder_GetMethodsByName_m20602 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2475* TypeBuilder_GetMethods_m20603 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m20604 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t3929 * ___binder, int32_t ___callConvention, TypeU5BU5D_t580* ___types, ParameterModifierU5BU5D_t3710* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetNestedTypes(System.Reflection.BindingFlags)
extern "C" TypeU5BU5D_t580* TypeBuilder_GetNestedTypes_m20605 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1794* TypeBuilder_GetProperties_m20606 (TypeBuilder_t5086 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m20607 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t3929 * ___binder, Type_t * ___returnType, TypeU5BU5D_t580* ___types, ParameterModifierU5BU5D_t3710* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m20608 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m20609 (TypeBuilder_t5086 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t3929 * ___binder, Object_t * ___target, ObjectU5BU5D_t21* ___args, ParameterModifierU5BU5D_t3710* ___modifiers, CultureInfo_t1771 * ___culture, StringU5BU5D_t20* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m20610 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m20611 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m20612 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m20613 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m20614 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m20615 (TypeBuilder_t5086 * __this, TypeU5BU5D_t580* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4920  TypeBuilder_get_TypeHandle_m20616 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m20617 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m20618 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t468 * TypeBuilder_not_supported_m20619 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m20620 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m20621 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m20622 (TypeBuilder_t5086 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m20623 (TypeBuilder_t5086 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m20624 (TypeBuilder_t5086 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t580* TypeBuilder_GetGenericArguments_m20625 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m20626 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m20627 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m20628 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m20629 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m20630 (TypeBuilder_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
