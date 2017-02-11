/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */




#include <iostream>
#include <stdio.h>
#include "util.h"





using namespace std;

using namespace playback;



void GameLoop(){
glfwWindowHint(GLFW_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_VERSION_MINOR, 3);
glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
Window w1(640, 480, "Playback 0.3 Prealpha");
glfwMakeContextCurrent(w1.wnd);
while (!glfwWindowShouldClose(w1.wnd)){

        glClear(GL_COLOR_BUFFER_BIT);


        glfwSwapBuffers(w1.wnd);


        glfwPollEvents();
}
}


int main(int argc, char *argv[]){
playback::init();
GameLoop();
playback::Destruct();
playback::Logger::Log("Program loop over","MAIN" ,  __FILE__ , __LINE__);
}


