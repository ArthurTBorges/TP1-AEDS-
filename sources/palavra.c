#include "palavra.h"

TItemPalavra* criaPalavraVazia(){
    TipoPalavra* pPalavra;
    return pPalavra;
};

void preenchePalavra(TItemPalavra * palavra, char caracteres[50]){
    strcpy(palavra->string, caracteres);
};

char retornaPalavra(TItemPalavra* palavra){
    return palavra->string;
}

void imprimePalavra(TItemPalavra* palavra){
    printf("%s", palavra->string);
};

void imprimePalavraAndLinhas(TItemPalavra* palavra){
    ApontaLinha auxApontaLinha;
    printf("palavra: %s", palavra->string);
    printf("Aparece nas linhas: \n");

    auxApontaLinha = palavra->primL->proxLinha;
    while (palavra->primL->proxLinha != NULL){
        printf("linha: %d", auxApontaLinha->line);
        auxApontaLinha->proxLinha = auxApontaLinha->proxLinha;
    }
};

























/*====CODIGO ANTIGO====*/
/*====CODIGO ANTIGO====*/
/*====CODIGO ANTIGO====*/

/*

void FLVaziaPalavras(TListaPalavra* pListaPalavra){
    pListaPalavra->primP = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->primP;
    pListaPalavra->primP->proxPalavra = NULL;
};

// [] VERIFICA SE LISTA ESTÁ PREENCHIDA
int LEhVaziaPalavras(TListaPalavra* pListaPalavra);

// [] INSERE PALAVRA NA LISTA
int LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra){
    pListaPalavra->ultP->proxPalavra = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->ultP->proxPalavra;
    pListaPalavra->ultP->string = pItemPalavra;
    pListaPalavra->ultP->proxPalavra = NULL;
};


int LRetiraPalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra);
void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha);

 */