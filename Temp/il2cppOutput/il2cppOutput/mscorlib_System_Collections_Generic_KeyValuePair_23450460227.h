﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,System.Nullable`1<System.Boolean>>
struct  KeyValuePair_2_t3450460227 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Path_t2568473163 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Nullable_1_t2088641033  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3450460227, ___key_0)); }
	inline Path_t2568473163 * get_key_0() const { return ___key_0; }
	inline Path_t2568473163 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Path_t2568473163 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3450460227, ___value_1)); }
	inline Nullable_1_t2088641033  get_value_1() const { return ___value_1; }
	inline Nullable_1_t2088641033 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Nullable_1_t2088641033  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
