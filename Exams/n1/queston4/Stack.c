//
// Created by jhennifer on 04/12/24.
//

#include "Stack.h"
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node* next;
} TNode;

struct _stack
{
    int amount;
    TNode* top;
};

bool TStack_equal(TStack* stack1, TStack* stack2)
{
    if (!stack1 || !stack2) return false;
    if (stack1->amount != stack2->amount) return false;
    TNode* current1 = stack1->top;
    TNode* current2 = stack2->top;
    int t1, t2;

    while (TStack_pop(stack1, &t1) && TStack_pop(stack2, &t2))
    {
        if (t1 != t2) return false;
    }
    /*
    while (current1)
    {
        if (current1->data != current2->data) return false;
        current1 = current1->next;
        current2 = current2->next;
    }*/
    return true;
}