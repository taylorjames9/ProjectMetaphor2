﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.Net.NetworkInformation.GatewayIPAddressInformation>
struct List_1_t3817562797;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct  GatewayIPAddressInformationCollection_t3537717171  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::list
	List_1_t3817562797 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GatewayIPAddressInformationCollection_t3537717171, ___list_0)); }
	inline List_1_t3817562797 * get_list_0() const { return ___list_0; }
	inline List_1_t3817562797 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3817562797 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
