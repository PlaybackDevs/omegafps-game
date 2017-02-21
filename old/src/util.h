#ifndef UTIL_INCLUDED
#define UTIL_INCLUDED
/*			                   		*\

This file is part of Playback version 0.4-internal-dx10.

Copyright (c) 2017 createjump & Spectre.

\*			                   		*/



/*								*\
File: util.h
==================================
File Details: Utility section header.

Original creator: createjump


\*								*/


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


struct Vector3 {
float x;
float y;
float z;
};
struct Vector2{
float x;
float y;
};

namespace FuryEng{
void init();
void Destruct();
}



#endif // UTIL_INCLUDED
