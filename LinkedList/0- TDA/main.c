#include "LinkedList.h"
#include <stdio.h>

int main(void)
{
    TLinkedList* list = TList_create();

    for (int i=1; i<=10; i++)
        TList_insert_end(list, i);

    TList_print(list);
    TList_remove(list, 10);
    TList_print_reverse(list);
    printf("\nLista desalocada? %d", TList_destroy(&list));

    TList_print(list);
    TList_print_reverse(list);
    return 0;
}
