#include "pilha_privado.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

Pilha* Init(int tItem) {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    if (pilha){
        pilha->topo = 0;
        pilha->tamItem = tItem;
    //pilha->itens = (Pilha*) malloc(sizeof(Pilha + tItem*10))
    } else printf("Não criou a Pilha\n");

    return pilha;
}

void Destroy(Pilha* pilha) {
    int i;
    if(!IsEmpty(pilha)){
        for(i=0;i<pilha->topo;i++){
            free(pilha->itens[i]);
        }
    }
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
void Push(void *ponteiroItem, Pilha* pilha){
    if (!IsFull(pilha)) {
        pilha->itens[pilha->topo] = (void*) malloc(pilha->tamItem);
        memcpy(pilha->itens[pilha->topo], ponteiroItem, pilha->tamItem);
        pilha->topo++;
    } else printf("Pilha cheia!\n");
}
