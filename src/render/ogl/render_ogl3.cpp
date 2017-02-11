/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */


#include "../../devcons.h"
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>


using namespace FuryEng;
using namespace FuryEng::Logger;




namespace FuryEng{

namespace render{
void RenderInit(){

if (!glfwInit()){
Assert("GLFW no worky!","OGL", __FILE__, __LINE__ );
}


}
}

}
