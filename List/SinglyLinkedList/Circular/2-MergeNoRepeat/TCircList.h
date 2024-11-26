//
// Created by jhennifer on 25/11/24.
//

#ifndef TCIRCLIST_H
#define TCIRCLIST_H

#include <stdbool.h>
#include <stdio.h>

typedef struct _circlist TCircList;

/**
 * Create a new circular list
 * @return pointer to the list
 */
TCircList* TCircList_create();

/**
 * Insert a new element at the end of the list
 * @param list pointer to the list
 * @param data element to be inserted
 * @return true if the element was inserted, false otherwise
 */
bool TCircList_insert(TCircList* list, const int data);

/**
 * Print the list
 * @param list pointer to the list
 */
void TCircList_print(const TCircList* list);

/**
 * Merge two lists without repeating elements
 * @param list1 pointer to the first list
 * @param list2 pointer to the second list
 * @return pointer to the merged list
 */
bool TCircList_mergeNoRepeat(const TCircList* list1, const TCircList* list2);

#endif //TCIRCLIST_H
