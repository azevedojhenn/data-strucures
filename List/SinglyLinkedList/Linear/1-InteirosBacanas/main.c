//
// Created by jhennifer on 24/11/24.
//

#include "mylib.h"
#include <stdio.h>

int main()
{
    int value;
    scanf("%d", &value);

    TList* solution = TList_create();
    TList_insert(solution, value);

    do
    {
        value = TList_summation(value);
        // if (value == -1) puts("Erro ao somar os digitos");
        TList_insert(solution, value);
    } while (value >= 10);
    /* (value / 10) > 1 verifica apenas se o número tem mais de dois dígitos,
     * o que faz o loop terminar cedo demais. Por isso ele para no segundo valor dp 312.
     * Muito burra, era só usar value ≥ 10;-;
     */

    TList_print(solution);
    if (isBacana(solution)) puts("bacana");
    else puts("non-bacana");
    return 0;
}