#pragma once

#ifndef VLLCOMMANDS_H
#define VLLCOMMANDS_H

#include <Windows.h>
#include "USBTowerController.h"

#define PACKET_LENGTH 25

#define BEEP_1IMMEDIATE { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BEEP_2IMMEDIATE { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BEEP_3IMMEDIATE { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BEEP_4IMMEDIATE { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BEEP_5IMMEDIATE { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define FORWARD_IMMEDIATE { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BACKWARD_IMMEDIATE { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define STOP { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define RUN { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define DELETE_PROGRAM { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BEEP_1 { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BEEP_2 { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BEEP_3 { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BEEP_4 { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BEEP_5 { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define FORWARD_HALF { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define FORWARD_ONE { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define FORWARD_TWO { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define FORWARD_FIVE { 0x51, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BACKWARD_HALF { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BACKWARD_ONE { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define BACKWARD_TWO { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define BACKWARD_FIVE { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define WAIT_LIGHT { 0x51, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define SEEK_LIGHT { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }
#define CODE { 0x51, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x14, 0x0b, 0x0b, 0x00 }
#define KEEP_ALIVE { 0x51, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x0b, 0x14, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x0b, 0x0b, 0x00 }

#define GenerateVLLFunction(commandName, data) \
inline BOOL VLL_##commandName##(USBTowerController* controller) \
{ \
	BYTE bytes[] = data; \
	ULONG lengthWritten; \
	controller->WriteData(bytes, PACKET_LENGTH, lengthWritten); \
	return lengthWritten == PACKET_LENGTH; \
}

GenerateVLLFunction(Beep1Immediate, BEEP_1IMMEDIATE)
GenerateVLLFunction(Beep2Immediate, BEEP_2IMMEDIATE)
GenerateVLLFunction(Beep3Immediate, BEEP_3IMMEDIATE)
GenerateVLLFunction(Beep4Immediate, BEEP_4IMMEDIATE)
GenerateVLLFunction(Beep5Immediate, BEEP_5IMMEDIATE)
GenerateVLLFunction(ForwardImmediate, FORWARD_IMMEDIATE)
GenerateVLLFunction(BackwardImmediate, BACKWARD_IMMEDIATE)
GenerateVLLFunction(Stop, STOP)
GenerateVLLFunction(Run, RUN)
GenerateVLLFunction(Delete, DELETE_PROGRAM)
GenerateVLLFunction(Beep1, BEEP_1)
GenerateVLLFunction(Beep2, BEEP_2)
GenerateVLLFunction(Beep3, BEEP_3)
GenerateVLLFunction(Beep4, BEEP_4)
GenerateVLLFunction(Beep5, BEEP_5)
GenerateVLLFunction(ForwardHalf, FORWARD_HALF)
GenerateVLLFunction(ForwardOne, FORWARD_ONE)
GenerateVLLFunction(ForwardTwo, FORWARD_TWO)
GenerateVLLFunction(ForwardFive, FORWARD_FIVE)
GenerateVLLFunction(BackwardHalf, BACKWARD_HALF)
GenerateVLLFunction(BackwardOne, BACKWARD_ONE)
GenerateVLLFunction(BackwardTwo, BACKWARD_TWO)
GenerateVLLFunction(BackwardFive, BACKWARD_FIVE)
GenerateVLLFunction(WaitLight, WAIT_LIGHT)
GenerateVLLFunction(SeekLight, SEEK_LIGHT)
GenerateVLLFunction(Code, CODE)
GenerateVLLFunction(KeepAlive, KEEP_ALIVE)

#endif VLLCOMMANDS_H
