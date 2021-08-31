#include "Pilha_privado.h"
//#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

Pilha* Init(int tItem) {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = 0;
    pilha->tamItem = tItem;
    return pilha;
}

void Destroy(Pilha* pilha) {
    free(pilha);
    printf("Destroi a Pilha\n");
}

int IsFull(Pilha* pilha) {
    if (pilha->topo == TAM_MAX) return TRUE;
    else return FALSE;
}

int IsEmpty(Pilha* pilha) {
    if (pilha->topo == 0) return TRUE;
    else return FALSE;
}

void* Pop(Pilha* pilha) {
    if (!IsEmpty(pilha)) {
        void* elRemovido = malloc(pilha->tamItem);
        memcpy(elRemovido, pilha->itens[pilha->topo - 1], pilha->tamItem);
        pilha->topo--;
        return elRemovido;
    } else return NULL;
}
void* Top(Pilha* pilha) {
    if (!IsEmpty(pilha)) {
        void* elTopo = malloc(pilha->tamItem);
        memcpy(elTopo, pilha->itens[pilha->topo - 1], pilha->tamItem);
        return elTopo;
    } else return NULL;

}
void Push(int item, Pilha* pilha) {
    if (!IsFull(pilha)) {
        pilha->itens[pilha->topo] = item;
        pilha->topo++;
    } else printf("Pilha cheia!\n");
}

