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

/******************* função para mudar a posição do aluno *********************/
boolean muda_posi(int fila_atual, int cart_atual, int fila_nova, int cart_nova){
    char *POS_nome;
    if (SalaAula[fila_nova][cart_nova] == POS_vazia){
        POS_nome = &SalaAula[fila_atual][cart_atual];
        SalaAula[fila_nova][cart_nova] = *POS_nome;
        *POS_nome = POS_vazia;
        return true;
    }
    else{
        return false;
    }
}

/******************* função para excluir a posição do aluno *********************/
boolean excl_posi(int fila, int cart){
    SalaAula[fila][cart] = POS_vazia;
}

/******************* função para adicionar o aluno *********************/
boolean add_aluno(int fila, int cart, char nome){
    char *POS_nome;
    if (SalaAula[fila][cart] == POS_vazia){
        SalaAula[fila][cart] = nome;
        return true;
    }
    else{
        return false;
    }
}


/******************* função para limpar as salar *********************/
void limp_sala(int fila, int cart){
    int n, m;
    for(n = 1; contador <= fila; contador++)
    {
        for(m = 1; contador <= cart; contador++)
        {
            SalaAula[n][m] = POS_vazia;
        }    
    }
}


