#include "listaPalavras.h"

void FLVaziaPalavras(TListaPalavra* pListaPalavra){
    pListaPalavra->primP = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->primP;
    pListaPalavra->primP->proxPalavra = NULL;
};

int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra){
    pListaPalavra->ultP->proxPalavra = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->ultP->proxPalavra;
    pListaPalavra->ultP->string = *pItemPalavra; //possivel erro;
    pListaPalavra->ultP->proxPalavra = NULL;
};

int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra){
    TItemPalavra* auxItemPalavra;
    auxItemPalavra = pListaPalavra->primP->proxPalavra;
    while(auxItemPalavra != NULL){
        int compare = strcmp(pItemPalavra->string, auxItemPalavra->string);
        if (compare==0){

        }
    }

};


int LEhVaziaPalavras(TListaPalavra* pListaPalavra){

};

void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);

