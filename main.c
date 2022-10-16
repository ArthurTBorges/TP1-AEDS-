#include <stdio.h>

#include "headers/dicionario.h"

int main(){

    TListaLetra pLetra;
    TListaPalavra* pPalavra = NULL;

    int menu = 0;
    while(menu != -1){
        printf("QUAL OPCAO ESCOLHER:\n");
        printf("1)CRIAR DICIONARIO \n2)IMPRIMIR DICIONARIO\n");
        scanf("%d", &menu);

        switch (menu){
            case 1:
                ConstroiDicio(&pLetra, pPalavra);
            case 2:
                ImprimeDicio(&pLetra);
            default:
                printf("");
        }
    }
    return 0;
}
