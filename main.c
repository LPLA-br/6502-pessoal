#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
#include "instrucoes.h"
#include "opcodes.h"
*/

void sobre()
{
	printf("6502 LPLA-br - uma implementação pessoal.\n");
  return;
}

int main( int argc, char* argv[] )
{
  int opt = getopt( argc, argv, "v");

  switch ( opt )
  {
    case (int)'v':
      sobre();
      break;
    default:
  }

	exit(0);
}
