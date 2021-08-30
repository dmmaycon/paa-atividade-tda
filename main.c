//livro C Completo total
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include "Aplicacao.h"



void Most_LimpaC(pilha* pil) {
    while(!IsEmpty(pil)){
        printf("Valor: %s\n",((ElementChar*)Pop(pil))->info);
    }
}

void Most_LimpaI(pilha* pil) {
    while(!IsEmpty(pil)){
        printf("Valor: %s\n",((ElementInt*)Pop(pil))->info);
    }
}

void adicionarElementoInt(int val, pilha* p) {
    ElementInt* i = (ElementInt*) malloc(sizeof(ElementInt));
    i->info = val; Push(p, i);
}
void adicionarElementoChar(char val[], pilha* p) {
    ElementChar* i = (ElementChar*) malloc(sizeof(ElementChar));
    strcpy(i->info, val); Push(p, i);
}

int main()
{
    int num;
    pilha* P1i = Criapilha(sizeof(ElementInt));
    //pilha* P2c = Criapilha(sizeof(ElementChar));

    printf("Tipo de Itens:  0-Inteiro e 1-Char");
    //scanf("%d\n", tam);

    printf("Operações:\n");
    printf("0 - sair\n");
    printf("1 - Insere\n");
    printf("2 - Remove\n");
    printf("3 - Elemento do Topo\n");

    adicionarElementoInt(1, P1i);
    adicionarElementoInt(2, P1i);
    adicionarElementoInt(3, P1i);
    adicionarElementoInt(4, P1i);
    Most_LimpaI(P1i);

}
