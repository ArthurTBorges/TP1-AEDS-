project(TP1 C)

include_directories(headers)
include_directories(sources)

add_executable(TP1
        headers/Dicionario.h
        sources/palavra.c
        sources/Dicionario.c
        sources/ListaPalavra.c
        headers/palavra.h
        headers/ListaPalavra.h
        headers/Linhas.h
        sources/Linhas.c
        sources/main.c
        )
