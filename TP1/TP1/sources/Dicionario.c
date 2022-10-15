#include <sys/stat.h>
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
        if(strcmp(pAux->letter.caracter, &letraDada) == 0){
            return 0;
        }

        pAux = pAux->proxLetra;
    }
    return 1;
};

void InsereLetra(TListaLetra* pLetra, TItemLetra caracter){
    pLetra->primLtr->proxLetra = (ApontaPalavra) malloc(sizeof (TCelulaPalavra));
    pLetra->ultLtr = pLetra->ultLtr->proxLetra;
    pLetra->ultLtr->letter = caracter; //possivel erro;
    pLetra->primLtr->proxLetra = NULL;
}

void ConstroiDicio(TListaLetra* pLetra){
    //Bota o seu arquivo:
    const char* filename = "arquivo.txt";
    TItemLetra *pt;
    int contLinha = 1;

    FILE *in_file = fopen(filename, "r");
    struct stat sb;
    stat(filename, &sb);
    char *file_contents = malloc(sb.st_size);
    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
        pt = strtok(file_contents, " ");
        while(pt){
            if(LEhDicioVazio(pLetra) == 0){
                CriaDicioVazio(pLetra);
                InsereLetra(pLetra, *pt);
            }else{
                VerificaLetra(pLetra, *pt);
            }

            pt = strtok(NULL, " ");
        }
        contLinha++;
    }


    fclose(in_file);
    exit(EXIT_SUCCESS);
}