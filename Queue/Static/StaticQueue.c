//
// Created by jhennifer on 27/11/24.
//

#define MAX 5
#include "StaticQueue.h"
#include <stdlib.h>

struct _staticQueue
{
    int size, head, tail;
    int data[MAX];
};

SQueue* SQueue_create()
{
    SQueue* new_queue = malloc(sizeof(SQueue));
    if (new_queue)
    {
        new_queue->size = 0;
        new_queue->head = 0;
        new_queue->tail = 0;
    }
    return new_queue;
}

bool SQueue_enqueue(SQueue *queue, const int data)
{
    // insere no final da fila
    if (SQueue_isFull(queue)) return false;
    queue->data[queue->tail] = data;
    queue->tail = (queue->tail + 1) % MAX; // circular
    queue->size++;
    return true;
}

bool SQueue_dequeue(SQueue *queue, int *first_data)
{
    if (SQueue_isEmpty(queue)) return false;
    *first_data = queue->data[queue->head];
    queue->head = (queue->head + 1) % MAX; // circular
    queue->size--;
    return true;
}

bool SQueue_head(const SQueue *queue, int *first_data)
{
    if (SQueue_isEmpty(queue)) return false;
    *first_data = queue->data[queue->head];
    return true;
}

bool SQueue_destroy(SQueue *queue)
{
    if (!queue) return false;
    free(queue);
    return true;
}

bool SQueue_isFull(const SQueue *queue)
{
    return queue->size == MAX;
}

bool SQueue_isEmpty(const SQueue *queue)
{
    return queue->size == 0;
}

int SQueue_size(const SQueue *queue)
{
    return queue->size;
}
