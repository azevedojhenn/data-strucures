//
// Created by jhennifer on 24/11/24.
//

#include "../StaticStack.h"
#include "../DynamicStack.h"
#include <string.h>

void print_stack(SStack* stack){
    int item;
    while(SStack_pop(stack, &item))
        printf("%c", item);
    putchar(' ');
}
int main(void)
{
    //Ler a string
    char string[1024];
    fgets(string, 1024, stdin);
    SStack *stack = SStack_create();
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == '\n')
            break;
        if(string[i] == ' ' || string[i] == '.')
            print_stack(stack);
        else
            SStack_push(stack, string[i]);
    }
    if(!SStack_is_empty(stack))
        print_stack(stack);
    return 0;
}
