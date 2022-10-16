#include "Dicionario.h"

int main(){

    TListaLetra *pLetra = NULL;
    TListaPalavra *pPalavra = NULL;

    int menu = 0;
    while(menu != -1){
        printf("QUAL OPCAO ESCOLHER:");
        printf("1)CRIAR DICIONARIO \n3)IMPRIMIR DICIONARIO");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                ConstroiDicio(pLetra, pPalavra);
            case 2:
                ImprimeDicio(pLetra);
            default:
                printf("");
        }
    }
    return 0;
}
