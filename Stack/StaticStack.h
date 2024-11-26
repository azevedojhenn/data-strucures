//
// Created by Prof. Rafael.
//

#ifndef STATICSTACK_H
#define STATICSTACK_H

#include <stdbool.h>
#include <stdio.h>

// SStack stands for "Static Stack"
typedef struct _staticStack SStack;

/**
 * Allocates memory for a new stack and initializes it.
 * @return A pointer to the new stack.
 */
SStack* SStack_create();

/**
 * Tries to push a new element into the stack.
 * @param stack The stack to push the new element.
 * @param new_data The new element to be pushed.
 * @return true if the element was successfully pushed, false otherwise.
 */
bool SStack_push(SStack* stack, int new_data);

/**
 * Tries to pop an element from the stack.
 * @param stack The stack to pop the element.
 * @param retrieved_data The variable to store the popped element.
 * @return true if the element was successfully popped, false otherwise.
 */
bool SStack_pop(SStack* stack, int* retrieved_data);

/**
 * Checks if the stack is full.
 * @param stack The stack to be checked.
 * @return true if the stack is full, false otherwise.
 */
bool SStack_is_full(const SStack* stack);

/**
 * Checks if the stack is empty.
 * @param stack The stack to be checked.
 * @return true if the stack is empty, false otherwise.
 */
bool SStack_is_empty(const SStack* stack);

#endif //STATICSTACK_H
