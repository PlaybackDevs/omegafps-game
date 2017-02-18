/*			                   		*\

This file is part of Playback version 0.4-internal-dx10.

Copyright (c) 2017 createjump & Spectre.

\*			                   		*/



/*								*\
File: util.cpp
==================================
File Details: The Utility section of the Playback engine.

Original creator: createjump


\*								*/

#include <Windows.h>
#include <iostream>
#include "devcons.h"
#if _you_really_want_build_to_break
// Ref to this to include your renderers.
// but if you include window it will already include render subsystem
#include "render/ogl/window.h"
#endif
#ifdef _GITVER
#include "ver.h"
#endif //_GITVER


namespace FuryEng
{
void init(){
// This is the init function, which initalizes all of Playback's game code (ie audio, DX10, Input).
#ifndef _DEBUG
	// Remove console since normal user will not look at debug log
	FreeConsole();
#endif
FuryEng::Logger::Log("Initializing Playback/FuryEngine game code", "INIT", __FILE__, __LINE__);
//FuryEng::render::RenderInit();
FuryEng::Logger::Log("Playback/FuryEngine Startup complete", "INIT" , __FILE__, __LINE__ );

}

void Destruct(){

}

}
