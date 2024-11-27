//
// Created by jhennifer on 27/11/24.
//

#ifndef STATICSTACK_H
#define STATICSTACK_H
#define MAX 10

#include <stdbool.h>
#include <stdio.h>

// SStack stands for "Static Stack"
typedef struct _staticStack SStack;

/**
 * Creates a new stack.
 * @return Pointer to the new stack.in
 */
SStack* SStack_create();

/**
 * Insert a new element to the stack.
 * @param stack Address of the stack.
 * @param data Data to be inserted.
 * @return True if the element was inserted, false otherwise.
 */
bool SStack_push(SStack* stack, int data);

/**
 * Remove the top element from the stack.
 * @param stack Address of the stack.
 * @param data Address to store the removed element.
 * @return True if the element was removed, false otherwise.
 */
bool SStack_pop(SStack* stack, int* data);

/**
 * Get the top element from the stack.
 * @param stack Address of the stack.
 * @param data Address to store the top element.
 * @return True if the element
 */
bool SStack_top(const SStack* stack, int* data);

/**
 * Check if the stack is empty.
 * @param stack Address of the stack.
 * @return True if the stack is empty, false otherwise.
 */
bool SStack_isEmpty(const SStack* stack);

/**
 * Check if the stack is full.
 * @param stack Address of the stack.
 * @return True if the stack is full, false otherwise.
 */
bool SStack_isFull(const SStack* stack);

/**
 * Get the number of elements in the stack.
 * @param stack Address of the stack.
 * @return Number of elements in the stack.
 */
int SStack_size(const SStack* stack);

/**
 * Print the stack.
 * @param stack Address of the stack.
 */
void SStack_print(const SStack* stack);

/**
 * Destroy the stack.
 * @param stack Address of the stack.
 */
void SStack_destroy(SStack* stack);

#endif //STATICSTACK_H
