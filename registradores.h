#ifndef REGISTRADORES_H_INCLUDED
#define REGISTRADORES_H_INCLUDED

#include <stdint.h>

typedef struct 
{
  uint8_t Acomulador;
  uint8_t X;
  uint8_t Y;
  
  uint8_t PonteiroPilha;
  uint8_t ContadorPrograma;
  
  /* NV-BDIZC
   *
   * Negativo
   * Overflow/Estouro de limites
   * - sempre um
   * Break
   * Decimal (Uso do Binary Coded Decimal)
   * Interrupt (bloqueio de Requisições de Interrupções Mascaráveis )
   * Zero
   * Carry/Empréstimo (operação aritmética)
   * */
  uint8_t RegistradorStatus; //NV-BDIZC
}
Registradores;



#endif //REGISTRADORES_H_INCLUDED 
