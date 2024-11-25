//
// Created by jhennifer on 24/11/24.
//

#include "CircList.h"
#include <stdio.h>

int main()
{
    TCircList* list = TCircList_create();
    if (!list) return 1;

    TCircList_insert_begin(list, 1);
    TCircList_insert_begin(list, 2);
    TCircList_insert_begin(list, 3);
    TCircList_insert_end(list, 4);
    TCircList_insert_end(list, 5);
    TCircList_insert_end(list, 6);
    TCircList_print(list);

    return 0;
}
