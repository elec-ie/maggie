#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4;
struct Exception_t;
struct FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4;
IL2CPP_EXTERN_C const RuntimeMethod* TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t2A9C2A017FBA5FACDB71BAA91E084385EB479C81 
{
};
struct TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472  : public TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AddDuplicateBehavior_t2189810CDF717740BBD6AA846F007062D9B3D6F1 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4  : public Exception_t
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_gshared (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
inline void TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4 (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeMath_1_t374542BEE524710C9BA480A81AC2EE178825C8EA*, const RuntimeMethod*))TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNodeError__ctor_m8D8D65F500D5C59D4B65893B1EC96FD19B2A9AF7 (DuplicateNodeError_t4A9B34F399C5EBE08FEA96DF411E61062A9521F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral789F6EB390935724E847FEF78009D7D062260AE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FloatMath_Compare_m7C257C05C46C30E54D9386E55477F117E4222143 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_b;
		int32_t L_1;
		L_1 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&___0_a), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatMath_AreEqual_mE57C66C6A7E55F50E5A0FDF707ACFCF7918894DC (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return (bool)((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_MinValue_mAF23F78D3EC9CA8EC8E71B9EA37E803EAF5E14D9 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (-(std::numeric_limits<float>::max)());
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_Zero_mD441F84DD7AF38A937EFBAEA4CAC4C8A96680F32 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_NegativeInfinity_m083E0731CB0E24D1C412EC9177814768465A5443 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (-std::numeric_limits<float>::infinity());
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_PositiveInfinity_m4E4516F4842EA2772F5960A3F1D0BA787DC73AE2 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	{
		return (std::numeric_limits<float>::infinity());
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Add_mB1E5237E0C236D82848AEC5A5849B2D79AEE5440 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Subtract_mA1DB886FE613CDA53601612D96DA919245723163 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Multiply_m4149E71D41BEBDFFF7A9E630306C8686B8D49616 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_DistanceSquaredBetweenPoints_m483A8B0B756B27B3FA12A23FF1448FAC51FF7D3B (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_a, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(15, __this);
		V_0 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_a;
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_2 = 0;
		goto IL_0034;
	}

IL_000f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_a;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___1_b;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = VirtualFuncInvoker2< float, float, float >::Invoke(19, __this, L_5, L_9);
		V_3 = L_10;
		float L_11 = V_3;
		float L_12 = V_3;
		float L_13;
		L_13 = VirtualFuncInvoker2< float, float, float >::Invoke(20, __this, L_11, L_12);
		V_4 = L_13;
		float L_14 = V_0;
		float L_15 = V_4;
		float L_16;
		L_16 = VirtualFuncInvoker2< float, float, float >::Invoke(18, __this, L_14, L_15);
		V_0 = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0034:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000f;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatMath__ctor_mDAFB21A490BF4EF49B26DD79212810D4A6A4B071 (FloatMath_t1BDE422EA353FD3D0A987EFE5267722060210472* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4(__this, TypeMath_1__ctor_mA445FFD5A52D2BDB507C64E5B51667EC0A8A83C4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
