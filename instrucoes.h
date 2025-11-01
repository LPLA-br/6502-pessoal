#ifndef INSTRUCOES_H_INCLUDED
#define INSTRUCOES_H_INCLUDED

#include "registradores.h"

/*################ transferência ##################*/

void carregarAcomulador();
void carregarX();
void carregarY();

void armazenarAcomulador();
void armazenarX();
void armazenarY();

void transferirAcomuladorParaX();
void transferirAcomuladorParaY();

void transferirXParaAcomulador();
void transferirYParaAcomulador();

void transferirPonteiroPilhaParaX();
void transferirXParaPonteiroPilha();

/*################ pilha ##################*/

void empurrarAcomulador();
void empurrarRegistradorStatus();

void puxarAcomulador();
void puxarRegistradorStatus();

/*################ incremento/decremento ##################*/

void decrementar(); //memória
void incrementar(); //memória

void decrementarX();
void decrementarY();

void incrementarX();
void incrementarY();

/*################ aritmetica ##################*/

void adicionarComEmprestimo();
void subrairComEmprestimo();

/*################ logica ##################*/

void andComAcomulador();
void ouExclusivoComAcomulador();
void ouComAcomulador();

/*################ deslocamento/rotacao ##################*/

//descarta bits
void deslocamentoAritmeticoAEsquerda();
void deslocamentoLogicoADireita();

void rotacionarEsquerda();
void rotacionarDireita();

/*################ registradores status ##################*/

void limparEmprestimo( Registradores* r );
void definirEmprestimo( Registradores* r );

void limparDesativacaoInterrupcao( Registradores* r );
void definirDesativacaoInterrupcao( Registradores* r );

void definirDecimal( Registradores* r );
void limparDecimal( Registradores* r );

void limparEstouro( Registradores* r );

/*################ comparacoes ##################*/

void compararComAcomulador( Registradores* r );
void compararComX( Registradores* r );
void compararComY( Registradores* r );

/*################ bit test ##################*/

void bitTestComAcomulador(); //acomulador e memória.

/*################ ramificação/salto condicional ##################*/

void ramificarSeEmprestimoLimpo( Registradores* r );
void ramificarSeEmprestimoDefinido( Registradores* r );

void ramificarSeIgual( Registradores* r );
void ramificarSeNaoIgual( Registradores* r );

void ramificarSeMais( Registradores* r );
void ramificarSeMenos( Registradores* r );

void ramificarSeEstouro( Registradores* r );
void ramificarSeNaoEstouro( Registradores* r );

/*################ saltos/subrotinas ##################*/

void saltar( uint8_t endereco_absoluto );

//empilhar,executar,desempilhar
void saltarParaSubrotina( uint8_t endereco_absoluto );
void retornarDaSubrotina();

/*################ saltos/subrotinas ##################*/

void parar();
void retornarDaInterrupcao();

/*################ OUTROS ##################*/

void NenhumaOperacao(void);

#endif
