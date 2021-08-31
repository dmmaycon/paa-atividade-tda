#include "Pilha_pub.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef PILHA_PRIVADO_H
#define PILHA_PRIVADO_H


#define TAM_MAX 10
#define TRUE 1
#define FALSE 0

 struct mPilhas{
    void* itens[TAM_MAX];
    int tamItem;
    int topo;
} typedef Pilha;



#endif

