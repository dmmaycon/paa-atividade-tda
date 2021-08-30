#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct mpilhas pilha;

pilha *Criapilha(int refElemento);
void Destroy (pilha *p);
bool IsFull (pilha *p);
int Top (pilha *p);
bool IsEmpty (pilha *p);
void Push (pilha *p, int elemento);
int Pop (pilha *p);
