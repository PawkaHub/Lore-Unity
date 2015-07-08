#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>
struct IDictionary_2_t7290;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t7133;
// System.Func`1<System.Boolean>
struct Func_1_t325;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Boolean>
struct  ThreadLocal_1_t1864  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Boolean>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::valueFactory
	Func_1_t325 * ___valueFactory_5;
};
struct ThreadLocal_1_t1864_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Boolean>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::CS$<>9__CachedAnonymousMethodDelegate1
	Func_1_t325 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
};
struct ThreadLocal_1_t1864_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Boolean>::threadLocalData
	Object_t* ___threadLocalData_1;
};
