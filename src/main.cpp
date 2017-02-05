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
// TODO: Add logic for EVERYTHING
playback::init();
playback::Destruct();
playback::Logger::Log("Program loop over","MAIN" ,  __FILE__ , __LINE__);
}


