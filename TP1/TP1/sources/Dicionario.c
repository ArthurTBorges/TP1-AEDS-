#include "Dicionario.h"

void CriaDicioVazio(TListaLetra* pLetra){
    pLetra->primLtr = (ApontaLetra) malloc(sizeof (TCelulaLetra));
    pLetra->ultLtr = pLetra->primLtr;
    pLetra->primLtr->proxLetra = NULL;
}

int LEhDicioVazio(TListaLetra* pLetra){
    return(pLetra->primLtr == pLetra->ultLtr);
}

int VerificaLetra(TListaLetra* pLetra, TipoLetra letraDada){
    TCelulaLetra * pAux;

    if(LEhDicioVazio(pLetra)){
        return 0;
    }
    pAux = pLetra->primLtr->proxLetra;
    while(pAux != NULL){
        if(strcmp(pAux->letter.letter, &letraDada) == 0){
            return 0;
        }

        pAux = pAux->proxLetra;
    }
    return 1;
};

void InsereLetra(TListaLetra* pLetra, TipoLetra letra, TipoPalavra palavra, TipoLinha linha);

