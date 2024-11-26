//
// Created by jhennifer on 25/11/24.
//

#ifndef MYLIB_H
#define MYLIB_H

#include <stdbool.h>
#include <stdio.h>

// TDLList stands for "Type Doubly Linked List"
typedef struct _doublyLinkedList TDLList;

/**
 * Create a new doubly linked list
 * @return Pointer to the new doubly linked list
 */
TDLList* TDLList_create();

/**
 * Insert a new element in the doubly linked list
 * @param list Pointer to the doubly linked list
 * @param data Data to be inserted
 * @return True if the element was inserted, false otherwise
 */
bool TDLList_insert(TDLList* list, const int data);

/**
 * Remove an element from the doubly linked list
 * @param list Pointer to the doubly linked list
 * @param data Data to be removed
 * @return True if the element was removed, false otherwise
 */
bool TDLList_remove(TDLList* list, const int data);

/**
 * Print the doubly linked list
 * @param list Pointer to the doubly linked list
 */
void TDLList_print(const TDLList* list);

#endif //MYLIB_H
