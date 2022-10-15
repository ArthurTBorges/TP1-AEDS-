#ifndef TP1_DICIONARIO_H
#define TP1_DICIONARIO_H
#include "ListaPalavras.h"

typedef struct{
    char caracter[1];
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

// [X] - Cria Dicionario Vazio.
// [X] - Lê Dicionario Vazio.
// [x] - Verifica Letra.
// [] - Insere Uma Nova Letra No Dicionário.
// [] - Remove Uma Letra No Dicionario.
// [] -

void CriaDicioVazio(TListaLetra* pLetra);
int LEhDicioVazio(TListaLetra* pLetra);
int VerificaLetra(TListaLetra* pLetra, char letra);
void InsereLetra(TListaLetra* pLetra, TItemLetra letra);
void ConstroiDicio(TListaLetra* pLetra);


#endif //TP1_DICIONARIO_H