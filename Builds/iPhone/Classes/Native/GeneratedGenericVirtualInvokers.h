#pragma once
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, data.methodInfo);
	}
};
