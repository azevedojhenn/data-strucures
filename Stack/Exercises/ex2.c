//
// Created by Prof. Rafael.
//

#include "../Static/StaticStack.h"
#include "../Dynamic/DynamicStack.h"
#include <string.h>

int main(){
    //Ler a string
    char string[1024];
    fgets(string, 1024, stdin);
    DStack *stack = SStack_create();
    for(int i = 0; i <strlen(string); i++){
        if(string[i] == '\n' || string[i] == '\r' || string[i]=='\0')
            break;
        SStack_push(stack, string[i]);
    }
    bool palim = true; int item;
    for(int i = 0; i <strlen(string) && palim; i++){
        if(string[i] == '\n' || string[i] == '\r' || string[i]=='\0')
            break;
        SStack_pop(stack, &item);
        if((char)item != string[i])
            palim = false;
    }
    if(palim)
        puts("Palim");
    else
        puts("Nao eh Palim");
    return 0;
}