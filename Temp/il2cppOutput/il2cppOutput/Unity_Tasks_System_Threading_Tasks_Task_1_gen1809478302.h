﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Unity_Tasks_System_Threading_Tasks_Task1843236107.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_t1809478302  : public Task_t1843236107
{
public:
	// T System.Threading.Tasks.Task`1::result
	Il2CppObject * ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t1809478302, ___result_7)); }
	inline Il2CppObject * get_result_7() const { return ___result_7; }
	inline Il2CppObject ** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(Il2CppObject * value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier(&___result_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
