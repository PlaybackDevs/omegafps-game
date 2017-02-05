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
// no else needed!
Log("Window creation process ready", "OGL" , __FILE__, __LINE__);
GLFWwindow *wnd;

wnd = glfwCreateWindow(640, 480, "Playback Test Window", NULL, NULL);
if(!wnd){
Assert("Window creation failure", "OGL", __FILE__, __LINE__) ;
}
glfwMakeContextCurrent(wnd);
Log("We made it this far!", "OGL", __FILE__, __LINE__);
    while (!glfwWindowShouldClose(wnd))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(wnd);

        /* Poll for and process events */
        glfwPollEvents();
    }

}
}

}
