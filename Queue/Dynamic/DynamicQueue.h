//
// Created by jhennifer on 27/11/24.
//

#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

#include <stdbool.h>
#include <stdio.h>

// DQueue stands for "Dynamic Queue"
typedef struct _dynamicQueue DQueue;

/**
 * Creates a dynamic queue.
 * @return Pointer to the created queue.
 */
DQueue* SQueue_create();

/**
 * Adds a new element to the queue.
 * @param queue Queue where the element will be added.
 * @param data Element to be added.
 * @return True if the element was successfully added, false otherwise.
 */
bool SQueue_enqueue(DQueue *queue, int data);

/**
 * Removes an element from the queue.
 * @param queue Queue from where the element will be removed.
 * @param first_data Removed element.
 * @return True if the element was successfully removed, false otherwise.
 */
bool SQueue_dequeue(DQueue *queue, int *first_data);

/**
 * Returns the first element of the queue.
 * @param queue Queue from where the element will be returned.
 * @param first_data First element.
 * @return True if the element was successfully returned, false otherwise.
 */
bool SQueue_head(const DQueue *queue, int *first_data);

/**
 * Destroys the queue.
 * @param queue Queue to be destroyed.
 * @return True if the queue was successfully destroyed, false otherwise.
 */
bool SQueue_destroy(DQueue *queue);

/**
 * Checks if the queue is full.
 * @param queue Queue to be checked.
 * @return True if the queue is full, false otherwise.
 */
bool SQueue_isFull(const DQueue *queue);

/**
 * Checks if the queue is empty.
 * @param queue Queue to be checked.
 * @return True if the queue is empty, false otherwise.
 */
bool SQueue_isEmpty(const DQueue *queue);

/**
 * Returns the size of the queue.
 * @param queue Queue to be checked.
 * @return Size of the queue.
 */
int SQueue_size(const DQueue *queue);

#endif //DYNAMICQUEUE_H
