#include <stdio.h>
#include <string.h>
#include "Linhas.h"

typedef char TipoPalavra;
typedef struct{
    char string[50];
    ApontaLinha primL;
}TItemPalavra;



// [x] CRIA PALAVRA VAZIA
// [x] PREENCHE CADEIA DE CARACTERES
// [x] RETORNA CADEIA DE CARACTERS
// [x] Imprime cadeia de caracteres
// [x] Imprime Palavra (cadeia de caracteres + TAD Lista de Números de linha)

TItemPalavra* criaPalavraVazia();
void preenchePalavra(TItemPalavra* palavra, char caracteres[50]);
char retornaPalavra(TItemPalavra* palavra);
void imprimePalavra(TItemPalavra* palavra);
void imprimePalavraAndLinhas(TItemPalavra* palavra);































/*====CODIGO ANTIGO====*/
/*====CODIGO ANTIGO====*/
/*====CODIGO ANTIGO====*/

/*
typedef struct CelulaPalavra* ApontaPalavra;
typedef struct CelulaPalavra{
    TipoPalavra string;
    struct CelulaPalavra* proxPalavra;
}TCelulaPalavra;

*/


//typedef struct{
//    ApontaPalavra primP;
//    ApontaPalavra ultP;
//}TListaPalavra;

//void FLVaziaPalavras(TListaPalavra* pListaPalavra);

//int LEhVaziaPalavras(TListaPalavra* pListaPalavra);
//int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
//int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
//void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);

//void criaPalavraItem(TipoPalavra *palavra, )




