cmake_minimum_required(VERSION 3.30)
project(ds_third_period C)

set(CMAKE_C_STANDARD 11)

add_executable(ds_third_period "List/SinglyLinkedList/Circular/0-TDA/CircList.c"
                                "List/SinglyLinkedList/Circular/0-TDA/CircList.h"
                                "List/SinglyLinkedList/Circular/0-TDA/main.c"
                                "List/SinglyLinkedList/Circular/1-EDmundo/main.c"
                                "List/SinglyLinkedList/Circular/1-EDmundo/mylib.c"
                                "List/SinglyLinkedList/Circular/1-EDmundo/mylib.h"
                                "List/SinglyLinkedList/Circular/2-MergeNoRepeat/TCircList.c"
                                "List/SinglyLinkedList/Circular/2-MergeNoRepeat/TCircList.h"
                                "List/SinglyLinkedList/Linear/0-TDA/LinkedList.c"
                                "List/SinglyLinkedList/Linear/0-TDA/LinkedList.h"
                                "List/SinglyLinkedList/Linear/0-TDA/main.c"
                                "List/SinglyLinkedList/Linear/1-InteirosBacanas/main.c"
                                "List/SinglyLinkedList/Linear/1-InteirosBacanas/mylib.c"
                                "List/SinglyLinkedList/Linear/1-InteirosBacanas/mylib.h"
                                "List/SinglyLinkedList/Linear/2-MergeNoRepeat/TLinkedList.c"
                                "List/SinglyLinkedList/Linear/2-MergeNoRepeat/TLinkedList.h"
                                "List/SinglyLinkedList/Linear/3-OndeEstáOLoop/main.c"
                                "List/SinglyLinkedList/Linear/3-OndeEstáOLoop/mylib.c"
                                "List/SinglyLinkedList/Linear/3-OndeEstáOLoop/mylib.h"
        "Stack/Exercises/ex1.c"
                                "List/StaticList/main.c"
        List/DoublyLinkedList/Linear/mylib.c
        List/DoublyLinkedList/Linear/mylib.h
        List/DoublyLinkedList/Linear/main.c
        Stack/Exercises/ex2.c
        Queue/Exercise/ex1.c
        Queue/Exercise/ex1.h
        Stack/Static/StaticStack.c
        Stack/Static/StaticStack.h
        Stack/Static/main.c
        Stack/Dynamic/DynamicStack.c
        Stack/Dynamic/DynamicStack.h
        Stack/Dynamic/main.c
        Queue/Static/StaticQueue.c
        Queue/Static/StaticQueue.h
        Queue/Static/main.c
        Queue/Dynamic/DynamicQueue.c
        Queue/Dynamic/DynamicQueue.h
        Queue/Dynamic/main.c
        Exams/n1/question1/Deque.c
        Exams/n1/question1/Deque.h
        Exams/n1/question3/CaçaPalavras.c
        Exams/n1/question3/CaçaPalavras.h
        Exams/n1/question3/main.c
        Exams/n1/queston4/Stack.c
        Exams/n1/queston4/Stack.h
)

