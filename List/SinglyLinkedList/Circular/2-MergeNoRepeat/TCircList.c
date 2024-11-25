//
// Created by jhennifer on 25/11/24.
//

#include "TCircList.h"
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} TNode;

struct _circlist
{
    TNode* head;
};

// cria e preenche um nó (Create and Fill)
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
    TCircList* circ_list = malloc(sizeof(TCircList*));
    if (circ_list) circ_list->head = NULL;
    return circ_list;
}

bool TCircList_insert(TCircList* list, const int data)
{
    if (!list) return false; // se a lista nao foi alocada
    TNode* new_node = TNode_create(data);
    if (!new_node) return false; // se o nó não foi alocado
    if (!list->head) // se a lista estiá vazia
    {
        list->head = new_node;
        list->head->next = list->head;
        return true;
    }

    TNode* current = list->head;
    if (!current) return false; // se o nó atual não foi alocado
    while (current->next != list->head) current = current->next; // percorre a lista até o final
    current->next = new_node;
    new_node->next = list->head;
    return true;
}

void TCircList_print(const TCircList* list)
{
    if (!list) return; // se a lista não foi alocada
    TNode* current = list->head;
    if (!current) return; // se o nó atual não foi alocado
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != list->head);
    printf("\n");
}

// Implements MergeNoRepeat Function
TCircList* TCircList_merge_no_repeat(const TCircList* list1,
                                     const TCircList* list2)
{
    TCircList* merged_list = TCircList_create();
    if (!merged_list || !list1 || !list2) return NULL; // se uma das listas não foi alocada
    TNode* current_ml = merged_list->head;
    TNode* current1 = list1->head;
    TNode* current2 = list2->head;
    if (!current_ml || !current1 || !current2) return NULL; // se um deles não for alocado
    if (!list1->head) // se a lista1 está vazia
    {
        while (current2->next != list2->head) // percorre a lista2 até o final
        {
            TCircList_insert(merged_list, current2->data);
            current2 = current2->next;
        }
        return merged_list;
    }

    // adicionar lista1 na merged_list
    while (current1->next != list1->head) // percorre a lista1 até o final
    {
        TCircList_insert(merged_list, current1->data);
        current1 = current1->next;
    }
    {
        while (current_ml->next != merged_list->head)
        {
            if (current1->data == current_ml->data) break;
            current_ml = current_ml->next;
        }

    }

    return merged_list;
}

void TCircList_destroy(TCircList* list)
{
    if (!list) return; // se a lista não foi alocada
    TNode* current = list->head;
    if (!current) return; // se o nó atual não foi alocado
    TNode* next = current->next;
    do
    {
        free(current);
        current = next;
        next = current->next;
    } while (current != list->head);
    free(list);
}