/*			                   *\
This file is part of Playback version 0.1 Alpha.
Copyright (c) 2017 createjump & Spectre.
\*			                   */

#include <iostream>
#include <stdlib.h>


namespace playback
{


  namespace devcons{
  // put devcons stuff here

  }


namespace Logger{
void Log(std::string info , std::string prog_part , char* file , int line);
void Warning(std::string info , std::string prog_part , char* file , int line);
void Assert(std::string info , std::string prog_part , char* file , int line);
}

}



