//
// Created by jhennifer on 25/11/24.
//

#include "mylib.h"
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} TNode;

struct _doublyLinkedList {
    TNode* head;
    TNode* tail;
};

TNode* TNode_create(const int data)
{
    TNode* node = malloc(sizeof(TNode));
    if (node)
    {
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
    }
    return node;
}

TDLList* TDLList_create()
{
    TDLList* list = malloc(sizeof(TDLList));
    if (list)
    {
        list->head = NULL;
        list->tail = NULL;
    }
    return list;
}

bool TDLList_insert(TDLList* list, const int data)
{
    if (!list) return false;
    if (!list->head) // se a lista estiver vazia
    {
        list->head = TNode_create(data); // list->head->next e prev = NULL
        list->tail = list->head; // list->tail->next e prev = NULL
        return list->head != NULL; // se der erro na alocação do nó, retorna false
    }

    // while (current != list->tail) current = current->next;
    //current->next = TNode_create(data);
    TNode* new_node = TNode_create(data);
    if (!new_node) return false;
    list->tail->next = new_node;
    new_node->prev = list->tail;
    list->tail = new_node;
    return true;
}

bool TDLList_insert_sorted(TDLList* list, const int data)
{
    if (!list) return false;
    if (!list->head) return TDLList_insert(list, data);

    TNode* new_node = TNode_create(data);
    TNode* current = list->head;
    if (!new_node) return false;

    while (current)
    {
        // encontrei o lugar para inserir o novo nó
        if (current->data > data)
        {
            /* Como estou verificando se o nó atual é maior que o dado,
             * então, o novo nó deve ser inserido antes do nó atual.
             * Desse jeito, inserir no primeiro nó daria erro, pois não há anterior.
             */

            new_node->next = current; // null<-head->a...  null<-NEW_NODE"->a"->b
            if (current == list->head)
            {
                current->prev = new_node; // (a)
                list->head = new_node; // (b)
            }
            else
            {
                new_node->prev = current->prev; // (b)
                current->prev->next = new_node; // (c)
                current->prev = new_node; // (a)
            }
            return true;
        }

        // encontrei o lugar para inserir o novo nó
        if (!current->next)
        {
            current->next = new_node;
            new_node->prev = current;
            list->tail = new_node;
            return true;
        }
        current = current->next;
    }
}

bool TDLList_remove(TDLList* list, const int data)
{
    if (!list) return false;
    if (!list->head) return false;
    TNode* current = list->head;

    // percorre a lista até o ultimo nó
    while (current)
    {
        // se o dado do nó atual for igual ao dado passado
        if (current->data == data)
        {
            // se o nó atual for o primeiro da lista
            if (current == list->head)
                // então, o head aponta para o próximo do atual (A→B→C, remove A, head aponta para B)
                list->head = current->next;
            else
                // senão, o prox do anterior aponta para o prox do atual (A→B→C, remove B, A→C)
                current->prev->next = current->next;

            // se o nó atual for o ultimo da lista
            if (current == list->tail)
                // então, o tail aponta para o anterior do atual (A←B←C, remove C, tail aponta para B)
                list->tail = current->prev;
            else
                // senão, o anterior do prox aponta para o anterior do atual (A←B←C, remove B, A←C)
                current->next->prev = current->prev;

            // DEMOREI MAS FOI
            free(current);
            return true;;
        }
        current = current->next;
    }
    return false; // não encontrou o dado
}

void TDLList_print(const TDLList* list)
{
    if (!list) return;
    const TNode* current = list->head;
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}