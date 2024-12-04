//
// Created by jhennifer on 27/11/24.
//

#ifndef DEQUE_H
#define DEQUE_H
#include <stdbool.h>

// TDeck stands for "Type Deck"
typedef struct _typeDeck Deck;

/**
 * Creates a new deck
 * @return a pointer to the new deck
 */
Deck* createDeck();

/**
 * Inserts a value at the front of the deck
 * @param deck The deck to insert the value
 * @param value The value to be inserted
 * @return True if the value was inserted, false otherwise
 */
bool insertFront(Deck* deck, int value);

/**
 * Inserts a value at the back of the deck
 * @param deck The deck to insert the value
 * @param value The value to be inserted
 * @return True if the value was inserted, false otherwise
 */
bool insertBack(Deck* deck, int value);

/**
 * Removes a value from the front of the deck
 * @param deck The deck to remove the value
 * @param value The value to be removed
 * @return True if the value was removed, false otherwise
 */
bool removeFront(Deck* deck, int* value);


/**
 * Removes a value from the back of the deck
 * @param deck The deck to remove the value
 * @param value The value to be removed
 * @return True if the value was removed, false otherwise
 */
bool removeBack(Deck* deck, int* value);

#endif //DEQUE_H
