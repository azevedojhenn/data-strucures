//
// Created by jhennifer on 23/11/24.
//

#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} TNode;

struct _list
{
    TNode *head;
};

TNode* TNode_create(const int data) {
    TNode *node = malloc(sizeof(TNode));
    if (node) {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

TLinkedList* TList_create() {
    TLinkedList* list = malloc(sizeof(TLinkedList));
    if (list) list->head = NULL;
    return list;
}

bool TList_insert_begin(TLinkedList *list, const int data) {
    TNode* new_node = TNode_create(data);
    if (!new_node) return false;
    if (list->head)
        new_node->next = list->head;
    list->head = new_node;
    return true;
}

bool TList_insert_end(TLinkedList *list, const int data) {
    TNode* new_node = TNode_create(data);
    if (!new_node) return false;
    if (list->head) {
        TNode* current = list->head;
        // for (; current->next; current = current->next);
        while (current->next) current = current->next;
        current->next = new_node;
    }
    else list->head = new_node;
    return true;
}

bool TList_insert_sorted(TLinkedList *list, const int data) {
    TNode* new_node = TNode_create(data);

    // !list: não existe
    // !list→head: está vazia
    if (!new_node) return false;
    if (!list) return false;

    if (!list->head || list->head->data > data) {
        new_node->next = list->head;
        list->head = new_node;
        return true;
    }

    TNode* current = list->head;
    while (current->next && current->next->data < data) current = current->next;
    new_node->next = current->next;
    current->next = new_node;
    return true;
}

bool TList_remove(TLinkedList *list, const int data) {
    // ou adiciono o campo prev no nó para poder remover anterior,
    // ou crio a variável previous e a atualizo a cada iteração

    TNode* current = list->head;
    TNode* previous = NULL;
    while (current) {
        if (current->data == data) {
            if (previous) previous->next = current->next;
            else list->head = current->next;
            free(current);
            return true;
        }
        previous = current;
        current = current->next;
    }
    return false;
}

bool TList_search(TLinkedList *list, const int data) {
    if (!list) return false;
    TNode* current = list->head;
    while (current) {
        if (current->data == data) return true;
        current = current->next;
    }
    return false;
}

bool TList_destroy(TLinkedList **list) {
    /* Como funciona free?
     * Você passa para free o mesmo ponteiro que recebeu de malloc.
     * O sistema operacional marca essa memória como "livre", permitindo que ela seja reutilizada.
     * Após chamar free, o ponteiro ainda contém o endereço da memória liberada.
     * Esse endereço agora aponta para uma região inválida. Acessar essa memória pode causar comportamento indefinido.
     */
    if (!*list) return false;
    TNode* current = (*list)->head;
    while (current) {
        TNode* aux = current;
        current = current->next;
        free(aux);
        // aux = NULL; não é necessário
    }
    free(*list);
    *list = NULL;
    return true;
}

// auxiliar
void print_node1(TNode* node) {
    TNode* current = node;
    if (current) {
        printf("%d ", current->data);
        print_node1(current->next);
    }
}

void TList_print(const TLinkedList *list) {
    if (!list) {
        puts("\nLista não alocada.\n");
        return;
    }

    if (!list->head)
    {
        puts("Lista vazia.\n");
        return;
    }

    TNode* current = list->head;
    print_node1(current);
    printf("\n");
}

// auxiliar
void print_node2(TNode* node) {
    TNode* current = node;
    if (current) {
        print_node2(current->next);
        printf("%d ", current->data);
    }
}

// Teste com return char* não funciona como eu queria,
// pois a função retorna o char* e não exibe na tela.
// (obviamente, pois não é um printf)
char* TList_print_reverse(const TLinkedList *list) {
    if (!list) return "\nLista não alocada.\n";
    if (!list->head) return "Lista vazia.\n";

    TNode* current = list->head;
    print_node2(current);
    return "\n";
}
