//
// Created by Prof. Rafael.
//

#include "DynamicStack.h"
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
}TNo;

struct _dynamicStack{
    TNo* inicio;
    unsigned int qty;
};

DStack* DStack_create(){
    DStack* stack = malloc(sizeof(DStack));
    if(stack!=NULL){
        stack->inicio = NULL;
        stack->qty = 0;
    }
    return stack;
}

bool DStack_push(DStack* stack, int new_data){
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL || stack == NULL)
        return false;
    novo->info = new_data;
    novo->prox = stack->inicio;
    stack->inicio = novo;
    stack->qty++;
    return true;
}

bool DStack_pop(DStack* stack, int* retrieved_data){
    if(stack == NULL || DStack_is_empty(stack))
        return false;
    *retrieved_data =  stack->inicio->info;
    TNo* to_be_deleted = stack->inicio;
    stack->inicio = stack->inicio->prox;
    free(to_be_deleted);
    stack->qty--;
    return true;
}

bool DStack_is_full(DStack* stack){
    return false;
}

bool DStack_is_empty(const DStack* stack){
    //Ou stack->qty == 0
    return stack->inicio == NULL;
}
