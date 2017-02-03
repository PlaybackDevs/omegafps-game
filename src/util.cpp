/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

#include <iostream>
#include "devcons.h"



namespace playback
{
void init(){
std::cout << "Playback Version 0.01 alpha init" << std::endl;
playback::Logger::Log("Playback init complete", __FILE__, __LINE__ );
// TODO: Call initalization functions here
}


}
