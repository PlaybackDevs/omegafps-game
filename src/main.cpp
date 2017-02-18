/*			                   		*\

This file is part of Playback version 0.4-internal-dx10.

Copyright (c) 2017 createjump & Spectre.

\*			                   		*/



/*								*\
File: main.cpp
==================================
File Details: The program's entry point. Try not to define globals here, or use graphics functions besides init.

Original creator: createjump


\*								*/




#include <iostream>
#include <stdio.h>
#include "util.h"




using namespace std;

// Use the FuryEng namespace
using namespace FuryEng;



void GameLoop(){
	while (true){
	
	}
}


int _cdecl main(int argc, char *argv[]){
FuryEng::init();
GameLoop();
FuryEng::Destruct();
FuryEng::Logger::Log("Program loop over","MAIN" ,  __FILE__ , __LINE__);
}


