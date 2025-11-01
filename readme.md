
# 6502 - uma implementação pessoal LPLA-br

2017/2018 Anos especiais onde tive meu primeiro contato com
linguagem assembly de um processadorzinho Norte Americano
de oito bits através de uma aplicação android chamada
"Learn 6502 Assembly".

Jamais esquecer-me-ei.

## VERSÃO

MAJOR-MINOR-FIX

0.0.0 garante primeira compilação com make

## Modelo de ramificações

```
main
|
release (EXECUTA testes E tagficação PARA main E dev)
|
|_dev
  |
  |_RAMIFICAÇÕES SATÉLITES

```

## Requisitos funcionais

- Orientar implementação pela fonte: [masswerk](https://www.masswerk.at/6502/6502_instruction_set.html)
- EXECUTAR PROGRAMAS DO MOS 6502 (erros toleráveis).
- Capacidade de carregar programas de arquivos binários escritos a mão ou montados.
- Apresentar display de caracteres (SHELL).
- Apresentar display de píxeles de um byte (limited RGB) RRRGGGBB
- memória solene de 64536 bytes
    - Zero Page

## Requisitos satélites possíveis

- programa montador que converte assembly 6502 clássico em arquivo binário
- Apresentar display de píxeles black white (píxel por bit)
- Apresentar display de píxeles indexados (pallete-based) 256 cores

## Requisitos não funcionais

- Depender apenas da glibc e chamadas de sistema unix/linux.
- Implementar tudo em português PT-BR

