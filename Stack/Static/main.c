//
// Created by jhennifer on 27/11/24.
//


// testar a Stack/Static

#include "StaticStack.h"

int main(void) {
    SStack* stack = SStack_create();
    const int add[12] = {5, 2, 10, 7, 4, 9, 1, 3, 6, 8, 15, 0};
    int temp;

    for (int i = 0; i < 12; ++i)
    {
        if (!SStack_push(stack, add[i]))
        {
            puts("Overflow");
            break;
        }
    }

    while (SStack_pop(stack, &temp))
        printf("%d ", temp);
    putchar('\n');

    return 0;
}