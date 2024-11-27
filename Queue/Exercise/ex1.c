//
// Created by jhennifer on 26/11/24.
//

#include "ex1.h"
#include <stdlib.h>

struct _typePix
{
    int id_orig, id_dest;
    float value;
    TPix* next;
};

struct _typeQueue
{
    TPix* tail;
    int size, MAX;
};

TPix* TPix_create(const int id_orig,
                  const int id_dest,
                  const float valor)
{
    TPix* novo = malloc(sizeof(TPix));
    if (novo)
    {
        novo->id_orig = id_orig;
        novo->id_dest = id_dest;
        novo->value = valor;
        novo->next = NULL;
    }
    return novo;
}

TQueue* TQueue_create(const int size)
{
    TQueue* new = malloc(sizeof(TQueue));
    if (!new) return NULL;

    new->tail = NULL;
    new->size = 0;
    new->MAX = size;
    return new;
}

bool TQueue_enqueue(TQueue* fila, TPix* pix)
{
    if (TQueue_isFull(fila)) return false;

    if (!fila->tail)
    {
        pix->next = pix;
    }
    else
    {
        pix->next = fila->tail->next;
        fila->tail->next = pix;
    }
    fila->tail = pix;
    fila->size++;
    return true;
}

bool TQueue_dequeue(TQueue* fila, TPix* temp)
{
    if (TQueue_isEmpty(fila)) return false;

    TPix* oldHead = fila->tail->next;
    *temp = *oldHead;

    if (fila->tail == oldHead)
    {
        fila->tail = NULL;
    }
    else
    {
        fila->tail->next = oldHead->next;
    }
    free(oldHead);
    fila->size--;
    return true;
}

/* void Fila_destroy(Fila *fila) {
    while (!isEmpty(fila)) {
        Pix temp;
        Fila_dequeue(fila, &temp);
    }
    free(fila);
} */

bool TQueue_isEmpty(const TQueue* fila)
{
    return fila->size == 0;
}

bool TQueue_isFull(const TQueue* fila)
{
    return fila->size == fila->MAX;
}

void TPix_print(const TPix* pix)
{
    printf("%d %d %.2f\n", pix->id_orig, pix->id_dest, pix->value);
}
