#include "ListaPalavras.h"

//Cria Lista Vazia
void FLVaziaPalavras(TListaPalavra* pListaPalavra){
    pListaPalavra->primP = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->primP;
    pListaPalavra->primP->proxPalavra = NULL;
}

//Inserir no final
void LIserePalavras(TListaPalavra* pListaPalavra, TItemPalavra *pItemPalavra){
    pListaPalavra->ultP->proxPalavra = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pListaPalavra->ultP = pListaPalavra->ultP->proxPalavra;
    pListaPalavra->ultP->Item = *pItemPalavra; //possivel erro;
    pListaPalavra->ultP->proxPalavra = NULL;
}

//Retirar no final
int LRetiraPalavras(TListaPalavra* pListaPalavra){
    TCelulaPalavra* pAux;

    if(LEhVaziaPalavras(pListaPalavra)){
        return 0;
    }
    pAux = pListaPalavra->primP->proxPalavra;
    while(pAux != NULL) {
        if(pAux->proxPalavra->proxPalavra == NULL){
            free(pAux->proxPalavra);
            pAux->proxPalavra = NULL;
            pListaPalavra->ultP = pAux;
        }
        pAux = pAux->proxPalavra;
    }
    return 1;
}

//Retirar dada palavra:
int LRetiraDadaP(TListaPalavra* pListaPalavra, char dadaPalavra){
    TCelulaPalavra* pAux, pAux2;

    if(LEhVaziaPalavras(pListaPalavra)){
        return 0;
    }
    pAux = pListaPalavra->primP->proxPalavra;
    while(pAux != NULL){
        if(strcmp(pAux->proxPalavra->Item.string, &dadaPalavra) == 0){
            if(pAux->proxPalavra != NULL){
                pAux2.proxPalavra = pAux->proxPalavra;
                pAux->proxPalavra = pAux->proxPalavra->proxPalavra;
                free(pAux2.proxPalavra);
            }else{
                pAux2.proxPalavra = pAux->proxPalavra;
                pAux->proxPalavra = NULL;
                free(pAux2.proxPalavra);
            }
        }
        pAux = pAux->proxPalavra;
    }
    return 1;
}

//VErifica se eh vaiza
int LEhVaziaPalavras(TListaPalavra* pListaPalavra){
    return(pListaPalavra->primP == pListaPalavra->ultP);
}

//Verifica se a palavra já existe na lista:
int VerificaPalavra(TListaPalavra* pListaPalavra, char dadaPalavra){
    TCelulaPalavra* pAux;

    if(LEhVaziaPalavras(pListaPalavra)){
        return 0;
    }
    pAux = pListaPalavra->primP->proxPalavra;
    while(pAux != NULL){
        if(strcmp(pAux->Item.string, &dadaPalavra) == 0){
            return 0;
        }

        pAux = pAux->proxPalavra;
    }
    return 1;
}

//Conta palavras:
int RetornaContagem(TListaPalavra* pListaPalavra){
    TCelulaPalavra* pAux;
    int cont = 0;

    if(LEhVaziaPalavras(pListaPalavra)){
        return cont;
    }
    pAux = pListaPalavra->primP->proxPalavra;
    while(pAux != NULL){
        cont++;
        pAux = pAux->proxPalavra;
    }
    cont++;
    return cont;
}

//Imprime:
void LImprimePalavrasAndLinhas(TListaPalavra* pListaPalavra, TListaLinha* pListaLinha){

}
