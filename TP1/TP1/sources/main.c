#include "Dicionario.h"

int main(){

    TListaLetra *pLetra = NULL;
    TListaPalavra *pPalavra = NULL;

    int menu = 0;
    while(menu != -1){
        printf("QUAL OPCAO ESCOLHER:");
        printf("1)CRIAR DICIONARIO \n2)RETIRAR DADA PALAVRA \n3)IMPRIMIR DICIONARIO \n4)IMPRIMIR DADA LETRA");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                ConstroiDicio(pLetra, pPalavra);
            case 2:
                printf("");
            default:
                printf("");
        }
    }
    return 0;
}
