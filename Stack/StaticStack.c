//
// Created by Prof. Rafael.
//

#include "StaticStack.h"
#include <stdlib.h>
#define MAX 10

struct _staticStack{
    unsigned int qty;
    int data[MAX];
};

SStack* SStack_create(){
    SStack *stack  = malloc(sizeof(SStack));
    if(stack)
        stack->qty = 0;
    return stack;
}

bool SStack_push(SStack* stack, int new_data){
    if(stack==NULL || SStack_is_full(stack))
        return false;
    stack->data[stack->qty++] = new_data;
    return true;
}

bool SStack_pop(SStack* stack, int* retrieved_data){
    if(stack==NULL || SStack_is_empty(stack))
        return false;
    *retrieved_data = stack->data[stack->qty - 1];
    stack->qty--;
    return true;
}

bool SStack_is_full(const SStack* stack){
    return stack->qty == MAX;
}

bool SStack_is_empty(const SStack* stack){
    return stack->qty == 0;
}