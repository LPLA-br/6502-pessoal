#include <stdint.h>
#include "opcodes.h"

/* Apenas para momentos em que o processador
 * lê instruções (e não dados)*/
void decodificador_instrucoes( uint8_t instrucao )
{
  switch ( instrucao )
  {
    case NOP:
      break;
  }
}

