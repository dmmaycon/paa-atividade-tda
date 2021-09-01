#include "Aplicacao.h"



int main()
{
    Pilha* P1 = Init(sizeof(ItemInt));
    Pilha* P2 = Init(sizeof(ItemChar));
    printf("Pilha de Inteiros: \n");

    addElementoInt(7, P1);
    Pop(P1);
    addElementoInt(6, P1);
    VeTopoInt(P1);
    addElementoInt(5, P1);
    addElementoInt(4, P1);
    printf("Elementos da Pilha de Inteiros: \n");

    EsvaziaPilhaInt(P1);

    printf("\n\n");
    printf("Pilha de String: \n");

    printf("Elementos da Pilha de String: \n");
    addElementoChar("A", P2);

    VeTopoChar(P2);
    addElementoChar("B", P2);
    Pop(P2);
    addElementoChar("C", P2);
    addElementoChar("D", P2);

    EsvaziaPilhaChar(P2);

    return 0;
}
