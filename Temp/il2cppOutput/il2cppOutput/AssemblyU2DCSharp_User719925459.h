#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// User
struct  User_t719925459  : public Il2CppObject
{
public:
	// System.String User::username
	String_t* ___username_0;
	// System.String User::email
	String_t* ___email_1;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(User_t719925459, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier(&___username_0, value);
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(User_t719925459, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier(&___email_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
