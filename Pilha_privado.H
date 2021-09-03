#include "Pilha_pub.H"
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

//criei esse pra testar se o arquivo era visível pelo main
void msgPilhaPrivado() {
    printf("msgPilhaPrivado\n");
}

#endif
