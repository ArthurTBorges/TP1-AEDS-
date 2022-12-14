//
// Created by Henrique on 16/10/2022.
//
#include <stdio.h>
#include "../headers/palavra.h"

TItemPalavra* criaPalavraVazia(){
    TItemPalavra* pPalavra;
    pPalavra = (TItemPalavra*) malloc(sizeof (TItemPalavra));
    return pPalavra;
}

void preenchePalavra(TItemPalavra* palavra, char caracteres[50]){
    strcpy( palavra->string, caracteres);
}

char retornaPalavra(TItemPalavra* palavra){
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
