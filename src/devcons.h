/*			                   *\
This file is part of Playback version 0.1 Alpha.
Copyright (c) 2017 createjump & Spectre.
\*			                   */

#include <iostream>
#include <stdlib.h>

typedef int CVAR_INT;
typedef std::string CVAR_STR;
typedef bool CVAR_BOOL;

namespace playback{

  namespace devcons{
  // put devcons stuff here
  
  }
  
  
namespace Logger{
void Log(std::string info, char* file , int line);
void Warning(std::string info, char* file , int line);
void Assert(std::string info, char* file , int line);
}
  
}
  

}
