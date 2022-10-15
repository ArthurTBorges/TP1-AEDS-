#include "palavra.h"

<<<<<<< HEAD
void CriaPalavra (T *palavra){
    strcpy(palavra->string, "");
=======
TItemPalavra* criaPalavraVazia(){
    TItemPalavra *pPalavra = NULL;
    return pPalavra;
>>>>>>> 49fdb50f9f31225f78d777764e49d630600d80db
}

void preenchePalavra(TItemPalavra * palavra, TipoPalavra caracteres[50]){
    strcpy( palavra->string, caracteres);
}

TipoPalavra retornaPalavra(TItemPalavra* palavra){
    return *palavra->string;
}

void imprimePalavra(TItemPalavra* palavra){
    printf("%s", palavra->string);
}

void imprimePalavraAndLinhas(TItemPalavra* palavra){
    ApontaLinha auxApontaLinha;
    printf("palavra: %s", palavra->string);
    printf("Aparece nas linhas: \n");

    auxApontaLinha = palavra->primL->proxLinha;
    while (palavra->primL->proxLinha != NULL){
        printf("linha: %d", auxApontaLinha->line);
        auxApontaLinha->proxLinha = auxApontaLinha->proxLinha;
    }
}