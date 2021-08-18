#include "TDA_PRIVADO.H"
#include "string.h"

typedef struct SalaAula
{
    int numeroFileira;
    int carteiras;
    // char disposicaoSala[][]; 
    SalaAula (*criaSala) (int f, int c);

} SalaAula;

SalaAula *criaSala(int fileiras, int carteiras)
{   
  SalaAula *disposicao = (SalaAula *) SalaAula(fileiras, carteiras);
}

/******************* função que mudar a posição do aluno *********************/
boolean muda_posi(int fila_atual, int cart_atual, int fila_nova, int cart_nova){
    char *POS_nome;
    if (SalaAula[fila_nova][cart_nova] == POS_vazia){
        POS_nome = &SalaAula[fila_atual][cart_atual]
    }
    else{
        return false;
    }
}



