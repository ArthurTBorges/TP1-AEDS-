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
    TItemPalavra Item;
    struct CelulaPalavra* proxPalavra;
}TCelulaPalavra;

typedef struct{
    ApontaPalavra primP;
    ApontaPalavra ultP;
}TListaPalavra;

// [X] - Cria  Lista Vazia de Palavras
// [X] - Insere nova Palavra (no final)
// [X] - Remove Palavra (dada a palavra)
// [X] - Remove Palavra (do final)
// [X] - Verifica Palavra (dada a palavra, verifica se já existe na lista)
// [X] - Retorna número de palavras
// [] - Imprime

void FLVaziaPalavras(TListaPalavra* pListaPalavra);
void LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
int LRetiraPalavras(TListaPalavra* pListaPalavra);
int LRetiraDadaP(TListaPalavra* pListaPalavra, TipoPalavra dadaPalavra);
int LEhVaziaPalavras(TListaPalavra* pListaPalavra);
int VerificaPalavra(TListaPalavra* pListaPalavra, TipoPalavra dadaPalavra);
int RetornaContagem(TListaPalavra* pListaPalavra);
void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);
