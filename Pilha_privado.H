#include "Pilha_pub.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define TAM_MAX 10

struct mpilhas
{
    void* vetor[TAM_MAX];
    int tamanhoElemento;//tamanho do elemento dinâmico em memória
    int topo;//indice do topo atual da fila, inicia em 0
} typedef pilha;



