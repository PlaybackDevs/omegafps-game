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
  
namespace Logger{
void Log(std::string info){
cout << "[LOG] " << info << endl; 
}
void Warning(std::string info){
cout << "[WARN] " << info << endl; 
}
void Assert(std::string info){
cout << "[ERROR] " << info << endl; 
exit(1);
}
  
}
  

}
