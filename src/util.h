#ifndef UTIL_INCLUDED
#define UTIL_INCLUDED
/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>
#ifdef _GIVEMEVER
#define ver_enable
#endif // _GIVEMEVER


#include "devcons.h"
#include "render/ogl/window.h"

struct Vector3 {
float x;
float y;
float z;
};
struct Vector2{
float x;
float y;
};

namespace playback
{
void init();
void Destruct();
}



#endif // UTIL_INCLUDED
