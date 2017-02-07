/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>
#include "devcons.h"
#include "render/ogl/render_ogl3.h"
#ifdef _GIVEMEVER
#define ver_enable
#endif // _GIVEMEVER
#ifdef ver_enable
#include "ver.h"
#endif // ver_enable


namespace playback
{
void init(){
#ifdef ver_enable
playback::Logger::Log(verhash, "VER", __FILE__, __LINE__ );
#endif // ver_enable


playback::Logger::Log("Initalizing Playback", "INIT", __FILE__, __LINE__);
playback::render::RenderInit();
playback::Logger::Log("Playback init complete", "INIT" , __FILE__, __LINE__ );

}

void Destruct(){
glfwTerminate();
}

}
