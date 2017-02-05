/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>
#include "devcons.h"
#include "render/ogl/render_ogl3.h"



namespace playback
{
void init(){
playback::Logger::Log("Initfunc called", "INIT", __FILE__, __LINE__);
playback::render::RenderInit();
playback::Logger::Log("Playback init complete", "INIT" , __FILE__, __LINE__ );

}

void Destruct(){
glfwTerminate();
}

}
