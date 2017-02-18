/*			                   		*\

This file is part of Playback version 0.4-internal-dx10.

Copyright (c) 2017 createjump & Spectre.

\*			                   		*/


/*								*\
File: devcons.cpp
==================================
File Details: The developer console routines for the Playback game core.

Original creator: createjump


\*								*/

#include <iostream>
#include <stdlib.h>



namespace FuryEng{
  namespace devcons{
  // put devcons stuff here

  }


namespace Logger{
/*
How to use the logger?

Pass __FILE__ and __LINE__ to the respective function arguments.

*/

void Log(char* info , char* prog_part , char* file , int line){
std::cout << "[INFO/" << prog_part << "] " << info << " (" << file << ":"<< line << ")"<< std::endl;
}
void Warning(char* info , char* prog_part , char* file , int line){
std::cout << "[WARN" << prog_part << " ]" << info << " (" << file << ":" << line << ")" << std::endl;
}
void Assert(char* info , char* prog_part , char* file , int line){
std::cout << "[ERROR" << prog_part << " ]"  << info << " (" << file << ":"<< line << ")"<< std::endl;
exit(1);
}

}


}
