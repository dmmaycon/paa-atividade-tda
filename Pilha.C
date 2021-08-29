#include "Pilha_privado.h"
//#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

pilha *Criapilha(int refElemento){
    //versão 2 - generico
    pilha* p = (pilha*) malloc(sizeof(pilha));
    p->topo = 0;
    p->tamanhoElemento = sizeof(refElemento);
    return p;
}

void Destroy (pilha *p){
    printf("limpando\n");
    free(p);
    p=0;
}
bool IsFull (pilha *p){
    //printf("tá cheio?\n");
    if (p->topo==TAM_MAX){
        return true;
    }else{
        return false;
    }
}

bool IsEmpty (pilha *p){
    //printf("vazio?\n");
    if (p->topo==0){
        return true;
    }else{
        return false;
    }
}

int Top (pilha *p){
    //printf("topo\n");
    if(!IsEmpty(p))
    {
        int elementoT = p->vetor[(p->topo - 1)];
        return elementoT;
    }
    else{
        printf("A pilha está vazia.\n");
    }

}

void Push (pilha *p, int elemento){
    if(!IsFull(p)){
        printf("insere na pos. ");
        printf("%d\n",p->topo);
        p->vetor[p->topo] = elemento;
        p->topo++;
    }
    else{
        printf("Pilha esta cheia!\n");
    }
}

int Pop (pilha *p){
    if(!IsEmpty(p)){
        int i = p->vetor[p->topo-1];
        p->topo--;
        return i;
    }
    else{
        printf("Pilha esta Vazia!\n");
    }
}
