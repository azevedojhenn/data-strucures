//
// Created by jhennifer on 23/11/24.
//

#ifndef TYPE1_H
#define TYPE1_H

#include <stdbool.h>
typedef struct _list TLinkedList;

/** Create a new linked list.
 * @return a pointer to the new list.
 */
TLinkedList *TList_create();

/** Insert a new element at the beginning of the list.
 * @param list the list to be modified.
 * @param data the value to be inserted.
 * @return true if the value was successfully inserted, false otherwise.
 */
bool TList_insert_begin(TLinkedList *list, int data);

/** Insert a new element at the end of the list.
 * @param list the list to be modified.
 * @param data the value to be inserted.
 * @return true if the value was successfully inserted, false otherwise.
 */
bool TList_insert_end(TLinkedList *list, int data);

/** Insert a new element in a sorted way.
 * @param list the list to be modified.
 * @param data the value to be inserted.
 * @return true if the value was successfully inserted, false otherwise.
 */
bool TList_insert_sorted(TLinkedList *list, int data);

/** Remove an element from the list.
 * @param list the list to be modified.
 * @param data the value to be removed.
 * @return true if the value was successfully removed, false otherwise.
 */
bool TList_remove(TLinkedList *list, int data);

/** Search for an element in the list.
 * @param list the list to be searched.
 * @param data the value to be searched.
 * @return true if the value was found, false otherwise.
 */
bool TList_search(TLinkedList *list, int data);

/** Destroy the list.
 * @param list the list to be destroyed.
 */
bool TList_destroy(TLinkedList **list);

/** Print the list.
 * @param list the list to be printed.
 */
void TList_print(const TLinkedList *list);

/** Print the list in reverse order.
 * @param list the list to be printed.
 */
char* TList_print_reverse(const TLinkedList *list);

#endif //TYPE1_H
