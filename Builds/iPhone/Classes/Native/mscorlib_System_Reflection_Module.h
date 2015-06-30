﻿#pragma once
#include <stdint.h>
// System.Reflection.TypeFilter
struct TypeFilter_t4031;
// System.Reflection.Assembly
struct Assembly_t1601;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Module
struct  Module_t4006  : public Object_t
{
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t1601 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;
};
struct Module_t4006_StaticFields{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t4031 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t4031 * ___FilterTypeNameIgnoreCase_2;
};
