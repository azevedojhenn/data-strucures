//
// Created by jhennifer on 27/11/24.
//

#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

#define MAX 10

#include <stdbool.h>
#include <stdio.h>

// DStack stands for "Dynamic Stack"
typedef struct _staticStack DStack;

/**
 * Creates a new stack.
 * @return Pointer to the new stack.in
 */
DStack* DStack_create();

/**
 * Insert a new element to the stack.
 * @param stack Address of the stack.
 * @param data Data to be inserted.
 * @return True if the element was inserted, false otherwise.
 */
bool DStack_push(DStack* stack, int data);

/**
 * Remove the top element from the stack.
 * @param stack Address of the stack.
 * @param last_data Address to store the removed element.
 * @return True if the element was removed, false otherwise.
 */
bool DStack_pop(DStack* stack, int* last_data);

/**
 * Get the top element from the stack.
 * @param stack Address of the stack.
 * @param last_data Address to store the top element.
 * @return True if the element
 */
bool DStack_top(const DStack* stack, int* last_data);

/**
 * Check if the stack is empty.
 * @param stack Address of the stack.
 * @return True if the stack is empty, false otherwise.
 */
bool DStack_isEmpty(const DStack* stack);

/**
 * Get the number of elements in the stack.
 * @param stack Address of the stack.
 * @return Number of elements in the stack.
 */
int DStack_size(const DStack* stack);

/**
 * Print the stack.
 * @param stack Address of the stack.
 */
void DStack_print(const DStack* stack);

/**
 * Destroy the stack.
 * @param stack Address of the stack.
 */
void DStack_destroy(DStack** stack);


#endif //DYNAMICSTACK_H
