//
// Created by Pichau on 16/10/2022.
//

#ifndef TP1_PALAVRA_H
#define TP1_PALAVRA_H

#include "linhas.h"


typedef struct{
    char *string[50];
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

#endif //TP1_PALAVRA_H
