﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.Serialization.XmlMapping[]
struct XmlMappingU5BU5D_t3375978586;
// System.Xml.Serialization.XmlSerializer/SerializerData[]
struct SerializerDataU5BU5D_t1495946221;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializer/GenerationBatch
struct  GenerationBatch_t285680286  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.Serialization.XmlSerializer/GenerationBatch::Done
	bool ___Done_0;
	// System.Xml.Serialization.XmlMapping[] System.Xml.Serialization.XmlSerializer/GenerationBatch::Maps
	XmlMappingU5BU5D_t3375978586* ___Maps_1;
	// System.Xml.Serialization.XmlSerializer/SerializerData[] System.Xml.Serialization.XmlSerializer/GenerationBatch::Datas
	SerializerDataU5BU5D_t1495946221* ___Datas_2;

public:
	inline static int32_t get_offset_of_Done_0() { return static_cast<int32_t>(offsetof(GenerationBatch_t285680286, ___Done_0)); }
	inline bool get_Done_0() const { return ___Done_0; }
	inline bool* get_address_of_Done_0() { return &___Done_0; }
	inline void set_Done_0(bool value)
	{
		___Done_0 = value;
	}

	inline static int32_t get_offset_of_Maps_1() { return static_cast<int32_t>(offsetof(GenerationBatch_t285680286, ___Maps_1)); }
	inline XmlMappingU5BU5D_t3375978586* get_Maps_1() const { return ___Maps_1; }
	inline XmlMappingU5BU5D_t3375978586** get_address_of_Maps_1() { return &___Maps_1; }
	inline void set_Maps_1(XmlMappingU5BU5D_t3375978586* value)
	{
		___Maps_1 = value;
		Il2CppCodeGenWriteBarrier(&___Maps_1, value);
	}

	inline static int32_t get_offset_of_Datas_2() { return static_cast<int32_t>(offsetof(GenerationBatch_t285680286, ___Datas_2)); }
	inline SerializerDataU5BU5D_t1495946221* get_Datas_2() const { return ___Datas_2; }
	inline SerializerDataU5BU5D_t1495946221** get_address_of_Datas_2() { return &___Datas_2; }
	inline void set_Datas_2(SerializerDataU5BU5D_t1495946221* value)
	{
		___Datas_2 = value;
		Il2CppCodeGenWriteBarrier(&___Datas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
