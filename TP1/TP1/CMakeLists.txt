project(TP1 C)

include_directories(headers)
include_directories(sources)

add_executable(TP1
        headers/Dicionario.h
        sources/Dicionario.c
        sources/palavra.c
        headers/palavra.h
        headers/Linhas.h
        sources/Linhas.c
        sources/main.c
        )
