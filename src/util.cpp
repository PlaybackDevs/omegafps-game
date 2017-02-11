/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>
#include "devcons.h"
#include "render/ogl/render_ogl3.h"
#include "render/ogl/window.h"
#include "ver.h"



namespace FuryEng
{
void init(){

FuryEng::Logger::Log("Initializing Playback/FuryEngine game code", "INIT", __FILE__, __LINE__);
FuryEng::render::RenderInit();
FuryEng::Logger::Log("Playback/FuryEngine Startup complete", "INIT" , __FILE__, __LINE__ );

}

void Destruct(){
glfwTerminate();
}

}
