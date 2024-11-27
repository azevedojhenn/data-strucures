//
// Created by jhennifer on 27/11/24.
//

#include "DynamicQueue.h"

int main(void)
{
    DQueue* test = DQueue_create();
    const int V[] = {1, 2, 3, 4, 5, 6};

    for (int i=0; i<6; i++)
    {
        if (!DQueue_enqueue(test, V[i]))
            puts("Não foi possível adicionar o elemento.");
    }

    int temp;
    while (DQueue_dequeue(test, &temp))
        printf("%d ", temp);
    putchar('\n');
    return 0;
}