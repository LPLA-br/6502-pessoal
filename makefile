#NOME DO PROJETO
PROJ_NAME=cpu

#COMPILADOR
CC=gcc

#FLAGS DO COMPILADOR (vide manual do compilador)
CC_FLAGS=-O0

#GBC DEGUG FLAG
CC_DFLAG=-g

# CÓDIGOS FONTE
SRCS=main.c instrucoes.c decodificador_instrucoes.c

# OBJETOS GERADOS DOS CÓDIGOS FONTE
OBJS=main.o instrucoes.o decodificador_instrucoes.o

#COMPILAÇÃO FINAL

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROJ_NAME).out $(CC_FLAGS)

#COMPILAÇÃO PARA DEBUG ASSEMBLY COM O GDB (gnu debugger)

debug: $(OBJS)
	$(CC) $(CC_DFLAG) $(SRCS) -o $(PROJ_NAME).gdb $(CC_FLAGS) 

#COMPILAÇÃO DOS OBJETOS

main.o:
	$(CC) -c main.c -o main.o

instrucoes.o:
	$(CC) -c instrucoes.c -o instrucoes.o

decodificador_instrucoes.o:
	$(CC) -c decodificador_instrucoes.c -o decodificador_instrucoes.o

# REMOÇÃO DO RESULTADO DA COMPILAÇÃO

clean:
	rm ./${PROJ_NAME}.out *.o 

debugclean:
	rm ./${PROJ_NAME}.gdb *.o
