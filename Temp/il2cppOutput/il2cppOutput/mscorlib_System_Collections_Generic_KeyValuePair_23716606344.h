﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.FirebaseApp,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct  KeyValuePair_2_t3716606344 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	FirebaseApp_t210707726 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	X509CertificateCollection_t1197680765 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716606344, ___key_0)); }
	inline FirebaseApp_t210707726 * get_key_0() const { return ___key_0; }
	inline FirebaseApp_t210707726 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(FirebaseApp_t210707726 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716606344, ___value_1)); }
	inline X509CertificateCollection_t1197680765 * get_value_1() const { return ___value_1; }
	inline X509CertificateCollection_t1197680765 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(X509CertificateCollection_t1197680765 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
