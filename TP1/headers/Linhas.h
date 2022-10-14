#ifndef TP1_LINHAS_H
#define TP1_LINHAS_H
#include <stdlib.h>

typedef int TipoLinha;
typedef struct{
    TipoLinha numero;
}TItemLinha;

typedef struct CelulaLinha* ApontaLinha;
typedef struct CelulaLinha{
    TipoLinha line;
    struct CelulaLinha* proxLinha;
}TCelulaLinha;

typedef struct{
    ApontaLinha primL;
    ApontaLinha ultL;
}TListaLinha;

void FLVaziaLinhas(TListaLinha* pListaLinha);
int LIsereLinhas(TListaLinha* pListaLinha, TItemLinha *pItemLinha);
void LImprimeLinhas(TListaLinha* pListaLinha);

#endif //TP1_LINHAS_H
