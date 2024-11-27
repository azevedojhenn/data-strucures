//
// Created by jhennifer on 27/11/24.
//

#include "DynamicQueue.h"
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} TNode;

struct _dynamicQueue
{
    TNode *tail;
    int size;
};

TNode* TNode_create(const int data)
{
    TNode *node = malloc(sizeof(TNode));
    if (node)
    {
        node->data = data;
        node->next = node;
    }
    return node;
}

DQueue* SQueue_create()
{
    DQueue *queue = malloc(sizeof(DQueue));
    if (queue)
    {
        queue->tail = NULL;
        queue->size = 0;
    }
    return queue;
}

bool SQueue_enqueue(DQueue *queue, const int data)
{
    if (!queue) return false;
    TNode *new_node = TNode_create(data);
    if (!new_node) return false;
    queue->size++;
    if (!queue->tail)
    {
        queue->tail = new_node;
        return true;
    }

    new_node->next = queue->tail->next;
    queue->tail->next = new_node;
    queue->tail = new_node;
    return true;
}

bool SQueue_dequeue(DQueue *queue, int *first_data)
{
    if (!queue || !queue->tail) return false;
    TNode *old_begin = queue->tail->next;
    *first_data = old_begin->data;
    if (queue->tail == old_begin)
        queue->tail = NULL;
    else
        queue->tail->next = old_begin->next;
    free(old_begin);
    queue->size--;
    return true;
}

bool SQueue_head(const DQueue *queue, int *first_data)
{
    if (!queue || !queue->tail) return false;
    *first_data = queue->tail->next->data;
    // ou aux = queue->tail->next; *first_data = aux->data;
    return true;
}

bool SQueue_destroy(DQueue **queue)
{
    if (!queue || !*queue) return false;
    TNode *aux = (*queue)->tail;
    while (aux)
    {
        TNode *old = aux;
        aux = aux->next;
        free(old);
    }
    free(*queue);
    *queue = NULL;
    return true;
}

// bool SQueue_isFull(const DQueue *queue);

bool SQueue_isEmpty(const DQueue *queue) {
    return !queue || !queue->tail;
}

int SQueue_size(const DQueue *queue) {
    return queue ? queue->size : -1;
}