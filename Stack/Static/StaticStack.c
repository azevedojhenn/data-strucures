//
// Created by jhennifer on 27/11/24.
//

#include "StaticStack.h"
#include <stdlib.h>
#include <strings.h>

struct _staticStack
{
    int data[MAX];
    int index;
};

SStack* SStack_create()
{
    SStack* stack = malloc(sizeof(SStack));
    if (stack) stack->index = -1;
    return stack;
}

bool SStack_push(SStack* stack, const int data)
{
    if (SStack_isFull(stack) || !stack) return false; // overflow
    (stack->index)++;
    stack->data[stack->index] = data;
    return true;
}

bool SStack_pop(SStack* stack, int* data)
{
    if (SStack_isEmpty(stack) || !stack) return false; // underflow
    *data = stack->data[stack->index];
    (stack->index)--;
    return true;
}

bool SStack_top(const SStack* stack, int* data)
{
    if (SStack_isEmpty(stack) || !stack) return false;
    *data = stack->data[stack->index];
    return true;
}

bool SStack_isEmpty(const SStack* stack)
{
    if (!stack) return false;
    return stack->index == -1;
}

bool SStack_isFull(const SStack* stack)
{
    if (!stack) return false;
    return stack->index == MAX - 1;
}

int SStack_size(const SStack* stack)
{
    if (!stack) return 0;
    return stack->index + 1;
}

void SStack_print(const SStack* stack)
{
    if (!stack)
    {
        puts("Stack is NULL");
        return;
    };
    for (int i = stack->index; i >= 0; i--)
        printf("%d ", stack->data[i]);
    puts("\n");
    /* int top;
    for (int i = stack->index; i > -1; i--) {
        SStack_top(stack, &top);
        printf("%d ", top);
    }
    puts("\n"); */
}

void SStack_destroy(SStack* stack)
{
    if (!stack) return;
    free(stack);
}