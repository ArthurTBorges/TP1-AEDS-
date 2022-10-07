#ifndef TP1_LISTAPALAVRA_H
#define TP1_LISTAPALAVRA_H
#include "palavra.h"

typedef struct celula* apontador;
typedef struct celula{
    Tpalavra palavra;
    struct celula* pProx;
}TCelula;

typedef struct{
    apontador pPrimeiro;
    apontador pUltimo;
}TListaPalavra;

void CriaLista(TListaPalavra* pLista);


#endif //TP1_LISTAPALAVRA_H
