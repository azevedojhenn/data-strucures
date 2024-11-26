//
// Created by jhennifer on 25/11/24.
//

#include "mylib.h"

int main(void)
{
    int remove = 1;
    TDLList* list = TDLList_create();

    for (int i = 1; i <= 5; ++i)
    {
        if (!TDLList_insert(list, i))
        {
            printf("Erro ao inserir o elemento %d\n", i);
            return 1;
        }
    }
    printf("Lista: ");
    TDLList_print(list);

    printf("Remove %d: ", remove);
    TDLList_remove(list, remove);
    TDLList_print(list);

    remove = 3;
    printf("Remove %d: ", remove);
    TDLList_remove(list, remove);
    TDLList_print(list);

    for (int i = 3; i <= 10; ++i)
    {
        if (!TDLList_insert_sorted(list, i))
        {
            printf("Erro ao inserir o elemento %d\n", i);
            return 1;
        }
    }
    printf("Nova lista(3...10) ordenada: ");
    TDLList_print(list);
    TDLList_insert_sorted(list, 1);
    printf("Adicionei 1: ");
    TDLList_print(list);
    return 0;
}