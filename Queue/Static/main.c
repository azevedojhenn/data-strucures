//
// Created by jhennifer on 27/11/24.
//

#include "StaticQueue.h"

int main(void)
{
    SQueue* test = SQueue_create();
    const int V[] = {1, 2, 3, 4, 5, 6};

    for (int i=0; i<6; i++)
    {
        if (!SQueue_enqueue(test, V[i]))
            puts("Não foi possível adicionar o elemento.");
    }

    int temp;
    while (SQueue_dequeue(test, &temp))
        printf("%d ", temp);
    putchar('\n');
    return 0;
}
