//
// Created by Prof. Rafael.
//

#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

#include <stdbool.h>
#include <stdio.h>

// DStack stands for "Dynamic Stack"
typedef struct _dynamicStack DStack;

/**
 * Creates a new dynamic stack.
 * @return The address of the new stack.
 */
DStack* DStack_create();

/**
 * Tried to push a new element into the stack.
 * @param stack The stack to push the new element.
 * @param new_data The new element to be pushed.
 * @return True if the element was successfully pushed, false otherwise.
 */
bool DStack_push(DStack* stack, int new_data);

/**
 * Tries to pop an element from the stack.
 * @param stack The stack to pop the element.
 * @param retrieved_data The variable to store the popped element.
 * @return True if the element was successfully popped, false otherwise.
 */
bool DStack_pop(DStack* stack, int* retrieved_data);

/**
 * Checks if the stack is full.
 * @param stack The stack to be checked.
 * @return True if the stack is full, false otherwise.
 */
bool DStack_is_full(DStack* stack);

/**
 * Checks if the stack is empty.
 * @param stack The stack to be checked.
 * @return True if the stack is empty, false otherwise.
 */
bool DStack_is_empty(const DStack* stack);

#endif //DYNAMICSTACK_H
