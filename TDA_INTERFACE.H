#include <stdio.h>
#include <stlib.h>

SalaAula *criaSala(int fileiras, int carteiras);
void limp_sala(int fila, int cart);
boolean add_aluno(int fila, int cart, char nome);
boolean muda_posi(int fila_atual, int cart_atual, int fila_nova, int cart_nova);
boolean excl_posi(int fila, int cart);
int[][] ver_alunos();
int ver_espacos();
