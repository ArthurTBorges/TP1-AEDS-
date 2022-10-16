//
// Created by Pichau on 16/10/2022.
//
#include <sys/stat.h>
#include "../headers/dicionario.h"

//Cria a celula cabeça:
void CriaDicioVazio(TListaLetra* pLetra){
    pLetra->primLtr = (ApontaLetra) malloc(sizeof (TCelulaLetra));
    pLetra->ultLtr = pLetra->primLtr;
    pLetra->primLtr->proxLetra = NULL;
    //return pLetra;
}

int LEhDicioVazio(TListaLetra* pLetra){
    return(pLetra->primLtr == pLetra->ultLtr);
}

int VerificaLetra(TListaLetra* pLetra, char caractere){
    TCelulaLetra * pAux;

    if(LEhDicioVazio(pLetra)){
        return 0;
    }
    pAux = pLetra->primLtr->proxLetra;
    while(pAux != NULL){
        if(strcmp(&pAux->letter.caracter, &caractere) == 0){
            return 0;
        }

        pAux = pAux->proxLetra;
    }
    return 1;
}

void InsereLetra(TListaLetra* pLetra, char caractere){
    pLetra->primLtr->proxLetra = (struct CelulaLetra *) (ApontaPalavra) malloc(sizeof(TCelulaPalavra));
    pLetra->ultLtr = pLetra->ultLtr->proxLetra;
    pLetra->ultLtr->letter.caracter = caractere; //possivel erro;
    pLetra->primLtr->proxLetra = NULL;

}

void ConstroiDicio(TListaLetra* pLetra, TListaPalavra* pListaPalavra){
    //Bota o seu arquivo:
    const char* filename = "C:\\Users\\Pichau\\Documents\\tp1\\sources\\gabriel.txt";
    char *pt;
    TItemLinha contLinha;
    contLinha.numero = 1;

    FILE *in_file = fopen(filename, "r");
    if(!in_file){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    struct stat sb;
    stat(filename, &sb);

    TListaLetra *primLtr;
    TItemPalavra *itemPalavra;
    TListaLinha* pListaLinha;

    CriaDicioVazio(pLetra);
    TListaLetra* auxDicio;

    auxDicio = pLetra->primLtr;
    printf("%d", auxDicio);
    char *file_contents = malloc(sb.st_size);
    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
        pt = strtok(file_contents, " ");

        while(pt){
            if(VerificaLetra(pLetra, pt[0]) == 1){
                TListaPalavra *pListaPalavra;
                InsereLetra(pLetra, pt[0]);
                itemPalavra = criaPalavraVazia();
                preenchePalavra(itemPalavra, pt);

                FLVaziaPalavras(pListaPalavra);
                LIserePalavras(pListaPalavra, itemPalavra);

                FLVaziaLinhas(pListaLinha);
                LIsereLinhas(pListaLinha, contLinha.numero);
            } else{
                if (VerificaPalavra(pListaPalavra, pt) == 1){
                    itemPalavra = criaPalavraVazia();
                    preenchePalavra(itemPalavra, pt);
                    FLVaziaPalavras(pListaPalavra);
                    LIserePalavras(pListaPalavra, itemPalavra);

                    FLVaziaLinhas(pListaLinha);
                    LIsereLinhas(pListaLinha, contLinha.numero);
                }else{
                    if (VerificaLinha(pListaLinha, contLinha) == 1){
                        FLVaziaLinhas(pListaLinha);
                        LIsereLinhas(pListaLinha, contLinha.numero);
                    }else{
                        break;
                    }
                }
            }
            pt = strtok(NULL, " ");
        }
        contLinha.numero = contLinha.numero+1;
    }


    fclose(in_file);
    exit(EXIT_SUCCESS);
}

void ImprimeDicio(TListaLetra* pLetra) {
    const char *filename = "saida.txt";
    FILE *in_file = fopen(filename, "w");
    if (in_file == NULL) {
        printf("erro na leitura");
        exit(1);
    }
    TListaLetra *pAuxL;
    TListaLetra *pAuxL2;
    TListaLetra *pAuxL3;
    pAuxL = pLetra->primLtr->proxLetra;
    while (pAuxL != NULL) {
        fprintf(in_file, "=========");
        fprintf(in_file, "Letra[%c]", pAuxL->primLtr->letter.caracter);

        pAuxL2 = pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra;
        while (pAuxL2 != NULL) {
            pAuxL3 = pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha;
            fprintf(in_file, "palavra: %s",
                    pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.string);

            while (pAuxL3 != NULL) {
                fprintf(in_file, "palavra: %d",
                        pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha->line.numero);
                pAuxL3 = pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha->proxLinha;
            }
            pAuxL2 = pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->proxPalavra;
        }
        pAuxL = pLetra->primLtr->proxLetra->proxLetra;
    }
    fclose(in_file);
}
