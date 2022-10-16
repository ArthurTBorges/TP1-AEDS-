cmake_minimum_required(VERSION 3.21)
project(tp1 C)

set(CMAKE_C_STANDARD 99)

add_executable(tp1 main.c sources/linhas.c sources/palavra.c sources/listaPalavra.c sources/dicionario.c headers/linhas.h headers/palavra.h headers/listaPalavra.h headers/dicionario.h)
