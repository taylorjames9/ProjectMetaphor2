﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t3857790437  : public Il2CppObject
{
public:

public:
};

struct SynchronizationContext_t3857790437_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t3857790437 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t3857790437_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t3857790437 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t3857790437 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentContext_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
