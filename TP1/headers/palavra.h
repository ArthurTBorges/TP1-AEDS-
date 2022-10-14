#include <stdio.h>
#include <string.h>
#include "Linhas.h"

typedef char TipoPalavra;
typedef struct{
    char *string;
    ApontaLinha primL;
}TItemPalavra;

// [x] CRIA PALAVRA VAZIA
// [x] PREENCHE CADEIA DE CARACTERES
// [x] RETORNA CADEIA DE CARACTERS
// [x] Imprime cadeia de caracteres
// [x] Imprime Palavra (cadeia de caracteres + TAD Lista de Números de linha)

TItemPalavra* criaPalavraVazia();
void preenchePalavra(TItemPalavra* palavra, char caracteres[50]);
TipoPalavra retornaPalavra(TItemPalavra* palavra);
void imprimePalavra(TItemPalavra* palavra);
void imprimePalavraAndLinhas(TItemPalavra* palavra);
