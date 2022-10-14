#include <stdio.h>
#include <string.h>
#include "Linhas.h"
#include "palavra.h"
/*
    typedef char TipoPalavra;
    typedef struct{
        char string[50];
        //ApontaLinha primL;
    }TItemPalavra;
*/

typedef struct CelulaPalavra* ApontaPalavra;
typedef struct CelulaPalavra{
    TItemPalavra string;
    struct CelulaPalavra* proxPalavra;
}TCelulaPalavra;

typedef struct{
    ApontaPalavra primP;
    ApontaPalavra ultP;
}TListaPalavra;

// [X] - Cria  Lista Vazia de Palavras
// [X] - Insere nova Palavra (no final)
// [] - Remove Palavra (dada a palavra)
// [] - Remove Palavra (do final)
// [] - Verifica Palavra (dada a palavra, verifica se já existe na lista)
// [] - Retorna número de palavras
// [] - Imprime

void FLVaziaPalavras(TListaPalavra* pListaPalavra);
int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LEhVaziaPalavras(TListaPalavra* pListaPalavra);
void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);
void criaPalavraItem(TipoPalavra *palavra );
