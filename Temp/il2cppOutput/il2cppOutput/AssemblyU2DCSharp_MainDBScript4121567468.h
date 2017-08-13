#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t209723739;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainDBScript
struct  MainDBScript_t4121567468  : public MonoBehaviour_t1158329972
{
public:
	// Firebase.Database.DatabaseReference MainDBScript::reference
	DatabaseReference_t1167676104 * ___reference_2;

public:
	inline static int32_t get_offset_of_reference_2() { return static_cast<int32_t>(offsetof(MainDBScript_t4121567468, ___reference_2)); }
	inline DatabaseReference_t1167676104 * get_reference_2() const { return ___reference_2; }
	inline DatabaseReference_t1167676104 ** get_address_of_reference_2() { return &___reference_2; }
	inline void set_reference_2(DatabaseReference_t1167676104 * value)
	{
		___reference_2 = value;
		Il2CppCodeGenWriteBarrier(&___reference_2, value);
	}
};

struct MainDBScript_t4121567468_StaticFields
{
public:
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>> MainDBScript::<>f__am$cache0
	Action_1_t209723739 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(MainDBScript_t4121567468_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Action_1_t209723739 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Action_1_t209723739 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Action_1_t209723739 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
