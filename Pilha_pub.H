#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>


#ifndef PILHA_PUB_H
#define PILHA_PUB_H

typedef struct mPilhas Pilha;

Pilha* Init(int tItem);
void Destroy(Pilha* pilha);
int IsEmpty(Pilha* pilha);
int IsFull(Pilha* pilha);
void Push(void *ponteiroItem, Pilha* pilha);
void* Pop(Pilha* pilha);
void* Top(Pilha* pilha);

//criei esse pra testar se o arquivo era visível pelo main
void msgPilhaPub() {
    printf("msgPilhaPub\n");
}

#endif
