﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Configuration.SectionInformation
struct SectionInformation_t2754609709;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t4214479838;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t2600766927  : public ConfigurationElement_t1776195828
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2754609709 * ___sectionInformation_14;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	Il2CppObject * ___section_handler_15;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_16;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	Il2CppObject * ____configContext_17;

public:
	inline static int32_t get_offset_of_sectionInformation_14() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___sectionInformation_14)); }
	inline SectionInformation_t2754609709 * get_sectionInformation_14() const { return ___sectionInformation_14; }
	inline SectionInformation_t2754609709 ** get_address_of_sectionInformation_14() { return &___sectionInformation_14; }
	inline void set_sectionInformation_14(SectionInformation_t2754609709 * value)
	{
		___sectionInformation_14 = value;
		Il2CppCodeGenWriteBarrier(&___sectionInformation_14, value);
	}

	inline static int32_t get_offset_of_section_handler_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___section_handler_15)); }
	inline Il2CppObject * get_section_handler_15() const { return ___section_handler_15; }
	inline Il2CppObject ** get_address_of_section_handler_15() { return &___section_handler_15; }
	inline void set_section_handler_15(Il2CppObject * value)
	{
		___section_handler_15 = value;
		Il2CppCodeGenWriteBarrier(&___section_handler_15, value);
	}

	inline static int32_t get_offset_of_externalDataXml_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___externalDataXml_16)); }
	inline String_t* get_externalDataXml_16() const { return ___externalDataXml_16; }
	inline String_t** get_address_of_externalDataXml_16() { return &___externalDataXml_16; }
	inline void set_externalDataXml_16(String_t* value)
	{
		___externalDataXml_16 = value;
		Il2CppCodeGenWriteBarrier(&___externalDataXml_16, value);
	}

	inline static int32_t get_offset_of__configContext_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ____configContext_17)); }
	inline Il2CppObject * get__configContext_17() const { return ____configContext_17; }
	inline Il2CppObject ** get_address_of__configContext_17() { return &____configContext_17; }
	inline void set__configContext_17(Il2CppObject * value)
	{
		____configContext_17 = value;
		Il2CppCodeGenWriteBarrier(&____configContext_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
