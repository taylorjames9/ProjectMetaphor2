﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct  TlsServerFinished_t1739223742  : public HandshakeMessage_t3938752374
{
public:

public:
};

struct TlsServerFinished_t1739223742_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::Ssl3Marker
	ByteU5BU5D_t3397334013* ___Ssl3Marker_11;

public:
	inline static int32_t get_offset_of_Ssl3Marker_11() { return static_cast<int32_t>(offsetof(TlsServerFinished_t1739223742_StaticFields, ___Ssl3Marker_11)); }
	inline ByteU5BU5D_t3397334013* get_Ssl3Marker_11() const { return ___Ssl3Marker_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_Ssl3Marker_11() { return &___Ssl3Marker_11; }
	inline void set_Ssl3Marker_11(ByteU5BU5D_t3397334013* value)
	{
		___Ssl3Marker_11 = value;
		Il2CppCodeGenWriteBarrier(&___Ssl3Marker_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
