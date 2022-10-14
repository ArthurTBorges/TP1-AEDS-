#include <stdio.h>
#include <string.h>
#include "Linhas.h"

typedef char TipoPalavra;
typedef struct{
    TipoPalavra string[50];
    ApontaLinha primL;
}TItemPalavra;

typedef struct CelulaPalavra* ApontaPalavra;
typedef struct CelulaPalavra{
    TipoPalavra string;
    struct CelulaPalavra* proxPalavra;
}TCelulaPalavra;

typedef struct{
    ApontaPalavra primP;
    ApontaPalavra ultP;
}TListaPalavra;

void FLVaziaPalavras(TListaPalavra* pListaPalavra);
int LEhVaziaPalavras(TListaPalavra* pListaPalavra);
int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
void LImprimePalavras(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);
