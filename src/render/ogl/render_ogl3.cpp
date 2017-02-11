/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */


// OpenGL 3 render (YES! We're finally getting somewhere!)

#include "../../devcons.h"
#include <GLFW/glfw3.h>


using namespace playback;
using namespace playback::Logger;




namespace playback{

namespace render{
void RenderInit(){

if (!glfwInit()){
Assert("GLFW no worky!","OGL", __FILE__, __LINE__ );
}


}
}

}
