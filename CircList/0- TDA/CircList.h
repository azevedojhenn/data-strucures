//
// Created by jhennifer on 23/11/24.
//

#ifndef CIRCLIST_H
#define CIRCLIST_H
#include <stdbool.h>

typedef struct _list TCircList;

/**
 * Create a new circular list
 * @return pointer to the list
 */
TCircList* TCircList_create();

/**
 * Insert a new element at the beginning of the list
 * @param list pointer to the list
 * @param data element to be inserted
 * @return true if the element was inserted, false otherwise
 */
bool TCircList_insert_begin(TCircList* list, const int data);

/**
 * Insert a new element at the end of the list
 * @param list pointer to the list
 * @param data element to be inserted
 * @return true if the element was inserted, false otherwise
 */
bool TCircList_insert_end(TCircList* list, const int data);

/**
 * Print the list
 * @param list pointer to the list
 */
void TCircList_print(const TCircList* list);

#endif //CIRCLIST_H
