#ifndef TP1_LINHAS_H
#define TP1_LINHAS_H
#include <stdlib.h>

typedef struct{
    int line;
}Tlinha;

void CriaLinha (Tlinha *linha);
void Setlinha (Tlinha *linha, int* line);
char* GetPalavra (Tlinha *linha);
void ImprimePalavra(Tlinha linha);

#endif //TP1_LINHAS_H
