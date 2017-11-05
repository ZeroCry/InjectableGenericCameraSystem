////////////////////////////////////////////////////////////////////////////////////////////////////////
// Part of Injectable Generic Camera System
// Copyright(c) 2017, Frans Bouma
// All rights reserved.
// https://github.com/FransBouma/InjectableGenericCameraSystem
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
//
//  * Redistributions of source code must retain the above copyright notice, this
//	  list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and / or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

namespace IGCS::GameSpecific
{
	// Mandatory constants to define for a game
	#define GAME_NAME									"Dark Souls III, Steam, ver1.15 reg1.35"
	#define CAMERA_VERSION								"1.0.0"
	#define CAMERA_CREDITS								"B3LYP"
	#define GAME_WINDOW_TITLE							"DarkSoulsIII"
	#define INITIAL_PITCH_RADIANS						0.0f
	#define INITIAL_YAW_RADIANS							0.0f
	#define INITIAL_ROLL_RADIANS						0.0f
	#define CONTROLLER_Y_INVERT							true
	#define FASTER_MULTIPLIER							5.0f
	#define SLOWER_MULTIPLIER							0.1f
	#define MOUSE_SPEED_CORRECTION						0.2f	// to correct for the mouse-deltas related to normal rotation.
	#define DEFAULT_MOVEMENT_SPEED						0.3f
	#define DEFAULT_ROTATION_SPEED						0.005f
	#define DEFAULT_FOV_SPEED							0.002f
	#define DEFAULT_FOV_DEGREES							43.0f
	#define DEFAULT_Z_MOVEMENT_MULTIPLIER				0.5f
	// End Mandatory constants

	// Offsets for camera intercept code. Used in interceptor.
	#define CAMERA_ADDRESS_INTERCEPT_START_OFFSET		0xCE07EB
	#define CAMERA_ADDRESS_INTERCEPT_CONTINUE_OFFSET	0xCE080B//0xCE07F9
	//#define TIMESTOP_INTERCEPT_START_OFFSET				0x118670
	//#define TIMESTOP_INTERCEPT_CONTINUE_OFFSET			0x1186A1

	// Indices in the structures read by interceptors 
	#define LOOK_DATA_IN_CAMERA_STRUCT_OFFSET			0x10		
	#define CAMERA_COORDS_IN_CAMERA_STRUCT_OFFSET		0x40		
	//#define TIMESTOP_IN_IMAGE_OFFSET					0x4616AD0		// see scratchpad in asm
	#define FOV_IN_STRUCT_OFFSET						0x50

	//free cam mode base and offsets
	#define FREE_CAMERA_ENABLE_BASE						0x144743A80
	#define FREE_CAMERA_ENABLE_OFFSET_0					0x18
	#define FREE_CAMERA_ENABLE_OFFSET_1					0xE0
}