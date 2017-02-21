/*			                   		*\

This file is part of Playback version 0.4-internal-dx10.

Copyright (c) 2017 createjump & Spectre.

\*			                   		*/



/*								*\
File: devcons.h
==================================
File Details: Developer console include file.

Original creator: creator here


\*								*/

#include <iostream>
#include <stdlib.h>


namespace FuryEng
{


  namespace devcons{
  // put devcons stuff here

  }


namespace Logger{
void Log(char* info, char* prog_part, char* file, int line);
void Warning(char* info, char* prog_part, char* file, int line);
void Assert(char* info, char* prog_part, char* file, int line);
}

}



