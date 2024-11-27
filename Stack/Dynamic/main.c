//
// Created by jhennifer on 27/11/24.
//

#include "DynamicStack.h"

int main(void)
{
    // testando a DynamicStack
    DStack* stack = DStack_create();

    for (int i = 1; i < 10; i++)
    {
        if (!DStack_push(stack, i))
            puts("Overflow");
    }

    int top;
    while (DStack_pop(stack, &top))
        printf("%d ", top);
    putchar('\n');
    return 0;
}