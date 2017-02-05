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

void Log(std::string info , std::string prog_part , char* file , int line){
std::cout << "[INFO/" << prog_part << "] " << info << " (" << file << ":"<< line << ")"<< std::endl;
}
void Warning(std::string info , std::string prog_part , char* file , int line){
std::cout << "[WARN/" << prog_part << "] " << info << " (" << file << ":"<< line << ")"<< std::endl;
}
void Assert(std::string info , std::string prog_part , char* file , int line){
std::cout << "[ERROR/" << prog_part << "] " << info << " (" << file << ":"<< line << ")"<< std::endl;
exit(1);
}

}


}
