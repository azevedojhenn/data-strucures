//
// Created by jhennifer on 04/12/24.
//

#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct _stack TStack;

/**
 * Create a new stack
 * @return Pointer to the stack
 */
bool TStack_push(TStack* stack, int data);

/**
 * Create a new stack
 * @param stack Pointer to the stack
 * @param data Data to be inserted
 * @return True if the data was inserted, false otherwise
 */
bool TStack_pop(TStack* stack, int* data);

/**
 * Insert data in the stack
 * @param stack1 Pointer to the first stack
 * @param stack2 Pointer to the second stack
 * @return True if the data was inserted, false otherwise
 */
bool TStack_equal(TStack* stack1, TStack* stack2);

#endif //STACK_H
