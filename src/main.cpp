/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */




#include <iostream>
#include <stdio.h>
#include "util.h"


using namespace std;

using namespace playback;


int main(int argc, char *argv[]){
playback::init();
Window w1(640, 480, "Playback v0.3 Alpha");
glfwMakeContextCurrent(w1.wnd);
while (!glfwWindowShouldClose(w1.wnd)){

        glClear(GL_COLOR_BUFFER_BIT);


        glfwSwapBuffers(w1.wnd);


        glfwPollEvents();
}
playback::Destruct();
playback::Logger::Log("Program loop over","MAIN" ,  __FILE__ , __LINE__);
}


