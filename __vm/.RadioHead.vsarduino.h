/* 
	Editor: http://www.visualmicro.com
			visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
			all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: M5Stack-Core-ESP32, Platform=esp32, Package=esspressif
*/

#if defined(_VMICRO_INTELLISENSE)

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __ESP32_ESp32__
#define __ESP32_ESP32__
#define ESP_PLATFORM
#define HAVE_CONFIG_H
#define F_CPU 240000000L
#define ARDUINO 10805
#define ARDUINO_ARCH_ESP32
#define ESP32
#define CORE_DEBUG_LEVEL 0
#define __cplusplus 201103L
#undef __cplusplus
#define __cplusplus 201103L
#define __STDC__
#define __ARM__
#define __arm__
#define __inline__
#define __asm__(x)
#define __asm__
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __volatile__


#define __ASM
#define __INLINE
#define __attribute__(noinline)

//#define _STD_BEGIN
//#define EMIT
#define WARNING
#define _Lockit
#define __CLR_OR_THIS_CALL
#define C4005
//
//typedef int uint8_t;
//#define __ARMCC_VERSION 400678
//#define PROGMEM
//#define string_literal
//
//#define prog_void
//#define PGM_VOID_P int
//

typedef int _read;
typedef int _seek;
typedef int _write;
typedef int _close;
typedef int __cleanup;

//#define inline 

#define __builtin_clz
#define __builtin_clzl
#define __builtin_clzll
#define __builtin_labs
#define __builtin_va_list
typedef int __gnuc_va_list;

#define __ATOMIC_ACQ_REL

#define __CHAR_BIT__
#define _EXFUN()

typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}


typedef long __INTPTR_TYPE__ ;
typedef long __UINTPTR_TYPE__ ;
typedef long __SIZE_TYPE__ 	;
typedef long __PTRDIFF_TYPE__;




#include <arduino.h>
#include <pins_arduino.h> 

//#include "..\generic\Common.h"
//#include "..\generic\pins_arduino.h"

//#undef F
//#define F(string_literal) ((const PROGMEM char *)(string_literal))
//#undef PSTR
//#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
//current vc++ does not understand this syntax so use older arduino example for intellisense
//todo:move to the new clang/gcc project types.
#define interrupts() sei()
#define noInterrupts() cli()

#include "RadioHead.ino"
#include "examples\ask\ask_receiver\ask_receiver.pde"
#include "examples\ask\ask_reliable_datagram_client\ask_reliable_datagram_client.pde"
#include "examples\ask\ask_reliable_datagram_server\ask_reliable_datagram_server.pde"
#include "examples\ask\ask_transmitter\ask_transmitter.pde"
#include "examples\cc110\cc110_client\cc110_client.pde"
#include "examples\cc110\cc110_server\cc110_server.pde"
#include "examples\mrf89\mrf89_client\mrf89_client.pde"
#include "examples\mrf89\mrf89_server\mrf89_server.pde"
#include "examples\nrf24\nrf24_client\nrf24_client.pde"
#include "examples\nrf24\nrf24_reliable_datagram_client\nrf24_reliable_datagram_client.pde"
#include "examples\nrf24\nrf24_reliable_datagram_server\nrf24_reliable_datagram_server.pde"
#include "examples\nrf24\nrf24_server\nrf24_server.pde"
#include "examples\nrf51\nrf51_audio_rx\nrf51_audio_rx.pde"
#include "examples\nrf51\nrf51_audio_tx\nrf51_audio_tx.pde"
#include "examples\nrf51\nrf51_client\nrf51_client.pde"
#include "examples\nrf51\nrf51_reliable_datagram_client\nrf51_reliable_datagram_client.pde"
#include "examples\nrf51\nrf51_reliable_datagram_server\nrf51_reliable_datagram_server.pde"
#include "examples\nrf51\nrf51_server\nrf51_server.pde"
#include "examples\nrf905\nrf905_client\nrf905_client.pde"
#include "examples\nrf905\nrf905_reliable_datagram_client\nrf905_reliable_datagram_client.pde"
#include "examples\nrf905\nrf905_reliable_datagram_server\nrf905_reliable_datagram_server.pde"
#include "examples\nrf905\nrf905_server\nrf905_server.pde"
#include "examples\rf22\rf22_client\rf22_client.pde"
#include "examples\rf22\rf22_mesh_client\rf22_mesh_client.pde"
#include "examples\rf22\rf22_mesh_server1\rf22_mesh_server1.pde"
#include "examples\rf22\rf22_mesh_server2\rf22_mesh_server2.pde"
#include "examples\rf22\rf22_mesh_server3\rf22_mesh_server3.pde"
#include "examples\rf22\rf22_reliable_datagram_client\rf22_reliable_datagram_client.pde"
#include "examples\rf22\rf22_reliable_datagram_server\rf22_reliable_datagram_server.pde"
#include "examples\rf22\rf22_router_client\rf22_router_client.pde"
#include "examples\rf22\rf22_router_server1\rf22_router_server1.pde"
#include "examples\rf22\rf22_router_server2\rf22_router_server2.pde"
#include "examples\rf22\rf22_router_server3\rf22_router_server3.pde"
#include "examples\rf22\rf22_router_test\rf22_router_test.pde"
#include "examples\rf22\rf22_server\rf22_server.pde"
#include "examples\rf24\rf24_client\rf24_client.pde"
#include "examples\rf24\rf24_lowpower_client\rf24_lowpower_client.pde"
#include "examples\rf24\rf24_reliable_datagram_client\rf24_reliable_datagram_client.pde"
#include "examples\rf24\rf24_reliable_datagram_server\rf24_reliable_datagram_server.pde"
#include "examples\rf24\rf24_server\rf24_server.pde"
#include "examples\rf69\rf69_client\rf69_client.pde"
#include "examples\rf69\rf69_reliable_datagram_client\rf69_reliable_datagram_client.pde"
#include "examples\rf69\rf69_reliable_datagram_server\rf69_reliable_datagram_server.pde"
#include "examples\rf69\rf69_server\rf69_server.pde"
#include "examples\rf95\rf95_client\rf95_client.pde"
#include "examples\rf95\rf95_reliable_datagram_client\rf95_reliable_datagram_client.pde"
#include "examples\rf95\rf95_reliable_datagram_server\rf95_reliable_datagram_server.pde"
#include "examples\rf95\rf95_server\rf95_server.pde"
#include "examples\serial\serial_reliable_datagram_client\serial_reliable_datagram_client.pde"
#include "examples\serial\serial_reliable_datagram_server\serial_reliable_datagram_server.pde"
#include "examples\simulator\simulator_reliable_datagram_client\simulator_reliable_datagram_client.pde"
#include "examples\simulator\simulator_reliable_datagram_server\simulator_reliable_datagram_server.pde"
#endif
#endif
