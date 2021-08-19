#include "TDA_PRIVADO.H"
#include "string.h"

typedef struct SalaAula
{
    int numeroFileira;
    int carteiras;
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
    return false;
}

/******************* função para excluir a posição do aluno *********************/
boolean excl_posi(int fila, int cart){
    SalaAula[fila][cart] = POS_vazia;
}

/******************* função para adicionar o aluno *********************/
boolean add_aluno(int fila, int cart, char nome){
    char *POS_nome;
    if (isCarteiraVazia(fila, cart)){
        SalaAula[fila][cart] = nome;
        return true;
    }
    return false;
}


/******************* função para limpar as salas *********************/
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

/******************* função para retornar os alunos da sala *********************/
void ver_alunos(int fila, int cart){
    int n, m;
    for(n = 1; contador <= fila; contador++)
    {
        for(m = 1; contador <= cart; contador++)
        {
            if (isCarteiraVazia(n,m)){
                printf("Nome: %c  fila: %d  carteira: %d", SalaAula[n][m], n, m);
            }
        }    
    }
}

/******************* função para ver quantos espaços vazios há na sala *********************/
void ver_espacos(){
    int n, m;
    for(n = 1; contador <= fila; contador++)
    {
        for(m = 1; contador <= cart; contador++)
        {
            if (!isCarteiraVazia(n.m)){
                printf("Nome: Vazia  fila: %d  carteira: %d", n, m);
            }
        }    
    }
}

/******************* função para verificar se uma determinada carteira está vazia *********************/
boolean isCarteiraVazia(int fileira, int carteira){
    if (SalaAula[fileira][carteira] == POS_vazia) {
        return true;
    }
    return false;
}
