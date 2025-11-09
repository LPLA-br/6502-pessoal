#ifndef MEMORIA_H_INCLUDED
#define MEMORIA_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "registradores.h"

const KIB64 = 65536;

uint8_t* inicializarMemoria64KiB();

/*FUNÇÕES DE MODOS DE ACESSO A MEMÓRIA*/

/** EXP #00 */
void imediato( uint8_t byte, Registradores* r, void (*operacao)(uint8_t,Registradores*) );

/** EXP FF */
void zeroPage( uint8_t* memoria, uint8_t byteEndereco, void (*operacao)(uint8_t,Registradores*) );

/** EXP 55,X */
void zeroPageX();

/** EXP 55,X */
void zeroPageY();

/** EXP FFFF */
void absoluto();

/** EXP 0200,X */
void absolutoX();

/** EXP 0200,Y */
void absolutoY();

//TODO: posterior implementação ↓

/** EXP (FF,X) */
void indiretoX();

/** EXP (FF),Y */
void indireto_Y();


#endif
