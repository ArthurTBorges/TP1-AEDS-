#include <stdio.h>
#include <string.h>
#include "Linhas.h"
#define contador 0

typedef char TipoPalavra;
typedef struct{
    TipoPalavra string[50];
    TListaLinha ListaDaPalavra;
}TItemPalavra;

typedef struct CelulaPalavra* ApontaPalavra;
typedef struct CelulaPalavra{
    TItemPalavra string;
    struct CelulaPalavra* proxPalavra;
}TCelulaPalavra;

typedef struct{
    ApontaPalavra primP;
    ApontaPalavra ultP;
}TListaPalavra;

//Funções do TAD palavra:
void CriaPVazia(TCelulaPalavra* pPalavra);
int SetPalavra(TCelulaPalavra* pPalavra, TipoPalavra *PalavraTxt);
TipoPalavra GetPalavra(TCelulaPalavra* pPalavra);
void ImprimePalavra(TCelulaPalavra* pPalavra, TCelulaLinha* pLinha);


//Funções do TAD Lista de Palavras:
void FLVaziaPalavras(TListaPalavra* pListaPalavra);
int LEhVaziaPalavras(TListaPalavra* pListaPalavra);
int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LRetiraDada(TListaPalavra* pListaPalavra, TipoPalavra *stringRetira);
int VerificaDada(TListaPalavra* pListaPalavra, TipoPalavra *stringVerifica);
void LImprimePalavras(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);
void LImprimeContador();
