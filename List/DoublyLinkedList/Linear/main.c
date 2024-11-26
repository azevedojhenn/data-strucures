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
    return 0;
}