#ifndef TP1_LINHAS_H
#define TP1_LINHAS_H
#include <stdlib.h>
#include <string.h>

typedef int TipoLinha;
typedef struct{
    TipoLinha numero;
}TItemLinha;

typedef struct CelulaLinha* ApontaLinha;
typedef struct CelulaLinha{
    TItemLinha line;
    struct CelulaLinha* proxLinha;
}TCelulaLinha;

typedef struct{
    ApontaLinha primL;
    ApontaLinha ultL;
}TListaLinha;

void FLVaziaLinhas(TListaLinha* pListaLinha);
int LEhVaziaLinhas(TListaLinha* pListaLinha);
void LIsereLinhas(TListaLinha* pListaLinha, TItemLinha *pItemLinha);
int VerificaLinha(TListaLinha* pListaLinha, TipoLinha atualLinha);
void LImprimeLinhas(TListaLinha* pListaLinha);

#endif //TP1_LINHAS_H