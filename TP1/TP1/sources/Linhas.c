#include "Linhas.h"
void FLVaziaLinhas(TListaLinha* pListaLinha){
    pListaLinha->primL = (ApontaLinha) malloc(sizeof (TCelulaLinha));
    pListaLinha->ultL = pListaLinha->primL;
    pListaLinha->primL->proxLinha = NULL;
}

int LEhVaziaLinhas(TListaLinha* pListaLinha){
    return(pListaLinha->primL == pListaLinha->ultL);
}

void LIsereLinhas(TListaLinha* pListaLinha, TItemLinha *pItemLinha){
    pListaLinha->ultL->proxLinha = (ApontaLinha) malloc(sizeof (TCelulaLinha));
    pListaLinha->ultL = pListaLinha->ultL->proxLinha;
    //pListaLinha->ultL->line = pItemLinha->numero; //possivel erro;
    pListaLinha->ultL->proxLinha = NULL;
}

int VerificaLinha(TListaLinha* pListaLinha, int atualLinha){
    TCelulaLinha* pAux;

    if(LEhVaziaLinhas(pListaLinha)){
        return 0;
    }
    pAux = pListaLinha->primL->proxLinha;
    while(pAux != NULL){
        if(pAux->line.numero == &atualLinha){
            return 0;
        }

        pAux = pAux->proxLinha;
    }
    return 1;
}

void LImprimeLinhas(TListaLinha* pListaLinha){

}