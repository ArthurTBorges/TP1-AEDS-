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
    if(pLetra->primLtr == pLetra->ultLtr){
        return 0;
    }else {
        return 1;
    }
}

int VerificaLetra(TListaLetra* pLetra, char caractere){
    TCelulaLetra* pAux;
    pAux = pLetra->primLtr->proxLetra;
    if(LEhDicioVazio(pLetra) == 0) {
        return 0;
    }
    while(pAux->proxLetra != NULL){
        printf("helo");
        if(strcmp(&pAux->letter.caracter, &caractere) == 0){
            return 0;
        }
        pAux = pAux->proxLetra;

    }
    free(pAux);
    return 1;
}

void InsereLetra(TListaLetra* pLetra,char caractere[1]){
    pLetra->ultLtr->proxLetra = (struct CelulaLetra *) (ApontaPalavra) malloc(sizeof(TCelulaPalavra));
    pLetra->ultLtr = pLetra->ultLtr->proxLetra;
    strcpy(&pLetra->ultLtr->proxLetra->letter.caracter, caractere);
    pLetra->ultLtr->proxLetra = NULL;
}

void ConstroiDicio(TListaLetra* pLetra,TListaPalavra* pPalavra, TListaLinha* pLinha){
    //Bota o seu arquivo:
    const char* filename = "C:\\Users\\Pichau\\Documents\\tp1\\sources\\gabriel.txt";
    char *pt;
    int contLinha = 1;

    FILE *in_file = fopen(filename, "r");
    if(!in_file){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    struct stat sb;
    stat(filename, &sb);

    TListaLetra *primLtr;
    TItemPalavra *itemPalavra;
    TListaLinha pListaLinha;

    CriaDicioVazio(pLetra);


    char *file_contents = malloc(sb.st_size);
    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
        pt = strtok(file_contents, " ");

        while(pt){
            if(VerificaLetra(pLetra, pt[0]) == 0){
                TListaPalavra pListaPalavra;
                InsereLetra(pLetra, &pt[0]);
                printf("%s", &pLetra->primLtr->proxLetra->letter.caracter);
                itemPalavra = criaPalavraVazia();
                preenchePalavra(itemPalavra, pt);
                FLVaziaPalavras(&pListaPalavra);
                LIserePalavras(&pListaPalavra, itemPalavra);
                FLVaziaLinhas(&pListaLinha);
                LIsereLinhas(&pListaLinha, contLinha);
            } else{
                if (VerificaPalavra(pPalavra, pt) == 1){
                    itemPalavra = criaPalavraVazia();
                    preenchePalavra(itemPalavra, pt);
                    FLVaziaPalavras(pPalavra);
                    LIserePalavras(pPalavra, itemPalavra);

                    FLVaziaLinhas(pLinha);
                    LIsereLinhas(pLinha, contLinha);
                }else{
                    if (VerificaLinha(pLinha, contLinha) == 1){
                        FLVaziaLinhas(pLinha);
                        LIsereLinhas(pLinha, contLinha);
                    }else{
                        break;
                    }
                }
            }
            pt = strtok(NULL, " ");
        }
        contLinha++;
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
    pAuxL = (TListaLetra *) pLetra->primLtr->proxLetra;
    while (pAuxL != NULL) {
        fprintf(in_file, "=========");
        fprintf(in_file, "Letra[%c]", pAuxL->primLtr->letter.caracter);

        pAuxL2 = (TListaLetra *) pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra;
        while (pAuxL2 != NULL) {
            pAuxL3 = (TListaLetra *) pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha;
            fprintf(in_file, "palavra: %s",
                    pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.string);

            while (pAuxL3 != NULL) {
                fprintf(in_file, "palavra: %d",
                        pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha->line.numero);
                pAuxL3 = (TListaLetra *) pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->Item.primL->proxLinha->proxLinha;
            }
            pAuxL2 = (TListaLetra *) pAuxL->primLtr->proxLetra->letter.ListaDaLetra.primP->proxPalavra->proxPalavra;
        }
        pAuxL = (TListaLetra *) pLetra->primLtr->proxLetra->proxLetra;
    }
    fclose(in_file);
}
