#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonAnimatorView/ParameterType
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType.h"
// PhotonAnimatorView/SynchronizeType
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeType.h"
// PhotonAnimatorView/SynchronizedParameter
struct  SynchronizedParameter_t477  : public Object_t
{
	// PhotonAnimatorView/ParameterType PhotonAnimatorView/SynchronizedParameter::Type
	int32_t ___Type_0;
	// PhotonAnimatorView/SynchronizeType PhotonAnimatorView/SynchronizedParameter::SynchronizeType
	int32_t ___SynchronizeType_1;
	// System.String PhotonAnimatorView/SynchronizedParameter::Name
	String_t* ___Name_2;
};
