/*			                   *\

This file is part of Playback version 0.3-a.

Copyright (c) 2017 createjump & Spectre.

\*			                   */
#include "render_ogl3.h"
#include "window.h"


Window::Window(int x, int y, char *title){
m_X = x;
m_Y = y;
wnd = glfwCreateWindow(x,y,title, nullptr, nullptr);

}

