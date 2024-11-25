//
// Created by jhennifer on 23/11/24.
//

#include "CircList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node* next;
} TNode;

struct _list
{
    TNode* head;
    // TNode* tail;
};

TNode* TNode_create(const int data)
{
    TNode* node = malloc(sizeof(TNode*));
    if (node)
    {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

TCircList* TCircList_create()
{
    TCircList* list = malloc(sizeof(TCircList*));
    if (list) list->head = NULL;
    return list;
}

bool TCircList_insert_begin(TCircList* list, const int data)
{
    if (!list) return false;
    TNode* new_node = TNode_create(data);
    if (!new_node) return false;
    if (!list->head)
    {
        list->head = new_node;
        list->head->next = list->head;
        return true;
    }

    new_node->next = list->head;
    TNode* current = list->head;
    while (current->next != list->head) current = current->next;
    current->next = new_node;
    list->head = new_node;
    return true;
}

bool TCircList_insert_end(TCircList* list, const int data)
{
    if (!list) return false; // se a lista foi alocada
    TNode* new_node = TNode_create(data);
    if (!new_node) return false; // se o nó não for alocado
    if (!list->head) // se a lista estiver vazia
    {
        list->head = new_node;
        list->head->next = list->head;
        return true;
    }

    TNode* current = list->head;
    while (current->next != list->head) current = current->next;
    current->next = new_node;
    new_node->next = list->head;
    return true;
}

void TCircList_print(const TCircList* list)
{
    if (!list) return;
    if (!list->head)
    {
        printf("Lista vazia\n");
        return;
    }
    TNode* current = list->head;
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != list->head);
    printf("\n");
}


bool TCircList_destroy(TCircList** list)
{
    if (!*list) return false; // lista não alocada
    TNode* current = (*list)->head;
    if (current)
    {
        TNode* aux = NULL;
        do
        {
            aux = current->next;
            free(current);
            current = aux; // vai para o próximo nó
        } while (current != (*list)->head);
    }
    free(*list);
    *list = NULL;
    return true;
}