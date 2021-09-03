#include "Pilha_pub.H"
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

//criei esse pra testar se o arquivo era visível pelo main
void msgAplicacao() {
    printf("msgAplicacao\n");
}

#endif
