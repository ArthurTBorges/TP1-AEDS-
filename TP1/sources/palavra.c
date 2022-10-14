#include "palavra.h"

void CriaPalavra (Tpalavra *palavra){
    strcpy(palavra->string, "");
}

void Setpalavra (Tpalavra *palavra, char* string){
    strcpy(palavra->string, string);
}

char* GetPalavra (Tpalavra *palavra){
    return palavra->string;
}

void ImprimePalavra(Tpalavra palavra){
    printf("%s",palavra);
}