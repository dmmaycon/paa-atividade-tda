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





