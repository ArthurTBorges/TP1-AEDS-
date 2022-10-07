#include <stdio.h>
#include <string.h>

typedef struct celula* apontador;
typedef struct celula{
    T   palavra;
    struct celula* pProx;
}TCelula;

typedef struct{
    apontador pPrimeiro;
    apontador pUltimo;
}TListaPalavra;

void CriaPalavra (Tpalavra *palavra);
void Setpalavra (Tpalavra *palavra, char* string);
char* GetPalavra (Tpalavra *palavra);
void ImprimePalavra(Tpalavra palavra);
