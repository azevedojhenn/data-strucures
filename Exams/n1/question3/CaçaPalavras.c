//
// Created by jhennifer on 04/12/24.
//

#include "CaçaPalavras.h"
// #include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node
{
    char letter;
    struct node* lists[];
} TNode;

int tentaLetra(const TNode* position, const char* word)
{
    // tentar uma direção
    int i;
    for (i = 0; i < 8; i++)
    {
        const TNode* direction = position;
        bool round = true;
        for (int j = 0; j < strlen(word); j++)
        {
            if (direction->letter != word[j])
            {
                round = false;
                break;
            }
            direction = direction->lists[i];
        }
         if (round) break;
    }
    return i;
}