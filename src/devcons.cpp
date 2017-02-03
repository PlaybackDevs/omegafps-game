/*			                   *\

This file is part of Playback version 0.1 Alpha.

Copyright (c) 2017 createjump & Spectre.

\*			                   */

// devcons.cpp: developer console things

#include <iostream>
#include <stdlib.h>



namespace playback{
  namespace devcons{
  // put devcons stuff here

  }


namespace Logger{
/*
How to use the logger?

Pass __FILE__ and __LINE__ to the respective function arguments.

*/

void Log(std::string info, char* file , int line){
std::cout << "[INFO] " << info << "(" << file << ":"<< line << ")"<< std::endl;
}
void Warning(std::string info, char* file , int line){
std::cout << "[WARN] " << info << "(" << file << ":"<< line << ")"<< std::endl;
}
void Assert(std::string info, char* file , int line){
std::cout << "[ERROR] " << info << "(" << file << ":"<< line << ")"<< std::endl;
exit(1);
}

}


}
