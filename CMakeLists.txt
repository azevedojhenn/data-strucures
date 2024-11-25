cmake_minimum_required(VERSION 3.30)
project(ds_third_period C)

set(CMAKE_C_STANDARD 11)

add_executable(ds_third_period "LinkedList/0- TDA/main.c"
        "LinkedList/0- TDA/LinkedList.c"
        "LinkedList/0- TDA/LinkedList.h"
        "CircList/0- TDA/CircList.c"
        "CircList/0- TDA/CircList.h"
        "LinkedList/1- InteirosBacanas/mylib.c"
        "LinkedList/1- InteirosBacanas/mylib.h"
        "LinkedList/1- InteirosBacanas/main.c"
        "LinkedList/2- OndeEstáOLoop/mylib.c"
        "LinkedList/2- OndeEstáOLoop/mylib.h"
        "LinkedList/2- OndeEstáOLoop/main.c"
        "CircList/0- TDA/main.c"
        "CircList/1- EDmundo/mylib.c"
        "CircList/1- EDmundo/mylib.h")
