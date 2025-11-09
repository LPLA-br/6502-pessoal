// memoria.c
#include <stdlib.h>
#include <stdint.h>
#include "registradores.h"

uint8_t* inicializarMemoria()
{
  uint8_t* memoria = calloc( KIB64, sizeof( uint8_t ) );
  return memoria;
}

// FUNÇÕES DE MODO DE ACESSO À MEMÓRIA.
// ESCOPO SEMÂNTICO-FUNCIONAL
//
// Define-se funções com dados necessários para que uma operacao
// polimórifica contratual opere usando tais dados.
//
// "Operação" afeta obrigatoriamente:
// Registradores gerais A,X,Y (OPCIONAL),
// Registradores de Status (SEMPRE)
// ContadorPrograma em 0>N<3 (SEMPRE),
// PonteiroPilha (OPCIONAL)
//
// Limitação de acesso a elementos da estrutura
// de registradores por limitação de parâmetros 
// de callback contratual é complexa e foi evitada.
// Futuras refatorações poderão implementar restrições
// de acesso (encapsulamento).
//

/** Executa ação que afeta registrador(es) */
void imediato( uint8_t byte, Registradores* r, void (*operacao)(uint8_t,Registradores*) )
{

  if ( operacao == NULL )
  {
    perror( "EXCEPTION: função callback void (*operacao)(...) é NULL! ABORTANDO\n" );
    exit(1);
  }

  operacao( byte, r );
  return;
}

/** Executa ação que afeta endereço (read|write) e registrador(es) */
void zeroPage(
      uint8_t* memoria,
      uint8_t byteEndereco,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,Registradores*)
    )
{
  if ( operacao == NULL )
  {
    perror( "EXCEPTION: função callback void (*operacao)(...) é NULL! ABORTANDO\n" );
    exit(1);
  }

  operacao( memoria, byteEndereco, r );
  return;
}

/** */
void zeroPageX(
      uint8_t* memoria,
      uint8_t byteEndereco,
      uint8_t X,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,uint8_t,Registradores*)
    )
{

  operacao( memoria, byteEndereco, X, r );
  return;
}

/**  */
void zeroPageY(
      uint8_t* memoria,
      uint8_t byteEndereco,
      uint8_t Y,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,uint8_t,uint8_t*)
    )
{

  operacao( memoria, byteEndereco, Y, Registradores* r );
  return;
}

/** */
void absoluto(
      uint8_t* memoria,
      uint8_t byteAltoEndereco,
      uint8_t byteBaixoEndereco,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,uint8_t,Registradores*)
    )
{

  operacao( memoria, byteAltoEndereco, byteBaixoEndereco, r );
  return;
}

/**  */
void absolutoX(
      uint8_t* memoria,
      uint8_t byteAltoEndereco,
      uint8_t byteBaixoEndereco,
      uint8_t X,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,uint8_t,uint8_t,Registradores*)
    )
{

  return;
}

/**  */
void absolutoY(
      uint8_t* memoria,
      uint8_t byteAltoEndereco,
      uint8_t byteBaixoEndereco,
      uint8_t Y,
      Registradores* r,
      void (*operacao)(uint8_t*,uint8_t,uint8_t,uint8_t,Registradores*)
    )
{

  return;
}

void indiretoX();
void indireto_Y();

