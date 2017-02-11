#ifndef UTIL_INCLUDED
#define UTIL_INCLUDED
/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>


#include "devcons.h"
#include "render/ogl/window.h"
#include "ver.h"

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
