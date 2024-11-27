//
// Created by jhennifer on 27/11/24.
//

#include "DynamicStack.h"
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} TNode;

struct _staticStack
{
    TNode* head;
    int size;
};

TNode* TNode_create(const int data)
{
    TNode* node = malloc(sizeof(TNode));
    if (node)
    {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

DStack* DStack_create()
{
    DStack* stack = malloc(sizeof(DStack));
    if (stack)
    {
        stack->head = NULL;
        stack->size = 0;
    }
    return stack;
}

bool DStack_push(DStack* stack, const int data)
{
    // mesma política de inserção no início
    if (!stack) return false;
    TNode* new_node = TNode_create(data);
    if (!new_node) return false; // overflow
    new_node->next = stack->head;
    stack->head = new_node;
    stack->size++;
    return true;
}

bool DStack_pop(DStack* stack, int* last_data)
{
    // mesma política de remoção no início
    if (!stack) return false;
    if (!stack->head) return false; // underflow
    *last_data = stack->head->data;
    TNode* top = stack->head;
    stack->head = stack->head->next;
    stack->size--;
    free(top);
    return true;
}

bool DStack_top(const DStack* stack, int* last_data)
{
    if (!stack) return false;
    if (!stack->head) return false;
    *last_data = stack->head->data;
    return true;
}

void DStack_print(const DStack* stack)
{
    if (!stack) return;
    if (!stack->head)
    {
        puts("Lista vazia.");
        return;
    }

    const TNode* top = stack->head;
    for (int i = 0; i < stack->size; ++i)
    {
        printf("%d ", top->data);
        top = top->next;
    }
}

void DStack_destroy(DStack** stack)
{
    if (!stack || !(*stack)) return;
    if ((*stack)->head)
    {
        TNode* top = (*stack)->head;
        while (top)
        {
            TNode* aux = top;
            top = top->next;
            free(aux);
        }
    }

    free(*stack);
    *stack = NULL;
}

/*
bool DStack_isEmpty(const DStack* stack)
{
}

int DStack_size(const DStack* stack)
{
}
*/