﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_SHA256582564463.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.SHA256
struct SHA256_t582564463;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Cng
struct  SHA256Cng_t2720259249  : public SHA256_t582564463
{
public:
	// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256Cng::hash
	SHA256_t582564463 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA256Cng_t2720259249, ___hash_5)); }
	inline SHA256_t582564463 * get_hash_5() const { return ___hash_5; }
	inline SHA256_t582564463 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA256_t582564463 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier(&___hash_5, value);
	}
};

struct SHA256Cng_t2720259249_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Cng::Empty
	ByteU5BU5D_t3397334013* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA256Cng_t2720259249_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t3397334013* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t3397334013* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
