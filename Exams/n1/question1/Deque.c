//
// Created by jhennifer on 27/11/24.
//

#include "Deque.h"
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} Node;

struct _typeDeck
{
    int amount;
    Node* front;
    Node* back;
};

Deck* createDeck()
{
    Deck* deck = malloc(sizeof(Deck));
    if (deck)
    {
        deck->amount = 0;
        deck->front = NULL;
        deck->back = NULL;
    }
    return deck;
}

bool insertFront(Deck* deck, const int value)
{
    if (!deck) return false;
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return false;
    if (!deck->front)
    {
        
    }

    new_node->data = value;
    new_node->next = deck->front;
    new_node->prev = NULL;
    if (deck->front)
    {
        deck->front->prev = new_node;
    }
    deck->front = new_node;
    if (!deck->back)
    {
        deck->back = new_node;
    }
    deck->amount++;
    return true;
}

// bool insertBack()