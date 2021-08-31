#include "Pilha_pub.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef APLICACAO_H
#define APLICACAO_H


typedef struct {
    int info;
} ItemInt;

typedef struct {
    char info[255];
} ItemChar;

void VeTopoInt(Pilha* pilha) {
    printf("%d\n", ((ItemInt*)Top(pilha))->info);
}

void VeTopoChar(Pilha* pilha) {
    printf("%s\n", ((ItemChar*)Top(pilha))->info);
}

void EsvaziaPilhaInt(Pilha* pilha) {
    while(!IsEmpty(pilha)) {
        printf("%d\n", ((ItemInt*)Pop(pilha))->info);
    }
}
void EsvaziaPilhaChar(Pilha* pilha) {
    while(!IsEmpty(pilha)) {
        printf("%s\n",((ItemChar*)Pop(pilha))->info);
    }
}

void addElementoInt(int v, Pilha* p) {
    ItemInt* i = (ItemInt*) malloc(sizeof(ItemInt));
    i->info = v;
    //printf("%d\n", i->info);
    Push(i, p);
}
void addElementoChar(char s[], Pilha* p) {
    ItemChar* i = (ItemChar*) malloc(sizeof(ItemChar));
    strcpy(i->info, s);
    //printf("%s\n", s);
    Push(i, p);
}

#endif
