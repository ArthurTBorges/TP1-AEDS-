#ifndef TP1_DICIONARIO_H
#define TP1_DICIONARIO_H
#include "palavra.h"

typedef char char;
typedef struct{
    char letter;
    TListaPalavra ListaDaLetra;
}TItemLetra;

typedef struct CelulaLetra* ApontaLetra;
typedef struct CelulaLetra{
    TItemLetra letter;
    struct CelulaLetra* proxLetra;
}TCelulaLetra;

typedef struct{
    ApontaLetra primLtr;
    ApontaLetra ultLtr;
}TListaLetra;

void CriaDicioVazio(TListaLetra* pLetra);

#endif //TP1_DICIONARIO_H