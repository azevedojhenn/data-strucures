//
// Created by jhennifer on 24/11/24.
//

#include "mylib.h"
#include <stdlib.h>
#include <stdio.h>

/*Portanto, sua tarefa é fazer um programa em linguagem C, usando listas dinâmicas, para
 * receber como entrada um número inteiro e
 * gerar a lista encadeada do processo de julgamento de um número como bacana.
 * Os nós na lista devem ser adicionados até que a informação do último nó tenha apenas 1 dígito.
 * Ao final, imprima a lista e emita o parecer sobre o número: “bacana” ou“non-bacana”.
 */

/*a) Crie uma lista chamada solution e armazene o inteiro lido como entrada.
b) Crie um procedimento para ler o número inteiro e gerar uma lista dinâmica contendo cada um de
seus dígitos (basta ir pegando o resto da divisão por 10 e ir dividindo o inteiro por 10 para diminuí-lo).
c) Crie uma extensão da lista (uma função do tipo TLinkedList_) que receba a lista gerada na etapa
b) e devolva um inteiro resultante da soma dos quadrados de seus dígitos (nós);
d) Insira o número resultante na lista solution criada na etapa a)
DICA 1: adicione um ponteiro fim ao seu nó descritor da lista e adapte os métodos de inserção.
DICA 2: crie um método para retornar o número inteiro do último nó da lista para o teste se o
número é bacana ou não.
*/

typedef struct node
{
    int data;
    struct node* next;
} TNode;

struct _list
{
    TNode* head;
};

TNode* TNode_create(const int data)
{
    TNode* node = malloc(sizeof(TNode*));
    if (node) // se a alocação foi bem sucedida
    {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

TList* TList_create()
{
    TList* list = malloc(sizeof(TList*));
    if (list) list->head = NULL;
    return list;
}

// auxiliar
void TList_destroy(TList* list)
{
    if (!list) return;
    TNode* current = list->head; // ou (*list).head
    while (current)
    {
        TNode* next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

bool TList_insert(TList* list, const int value)
{
    TNode* new_node = malloc(sizeof(TNode*));
    if (!new_node) return false;
    if (!list) return false;
    if (!list->head) // se a lista está vazia
    {
        list->head = new_node;
        new_node->data = value;
        new_node->next = NULL;
        return true;
    }

    TNode* current = list->head;
    // como já sabemos que a lista não está vazia,
    // podemos procurar o último nó ignorando o primeiro
    while (current->next) current = current->next;
    current->next = new_node;
    new_node->data = value;
    new_node->next = NULL;
    return true;
}

TList* TList_separate_digits(int value)
{
    TList* digits = TList_create();
    while (value) { // enquanto value for diferente de 0
        TList_insert(digits, value % 10);
        value /= 10;
    }
    return digits;
}

int TList_summation(const int value)
{
    TList* digits = TList_separate_digits(value);
    if (!digits) return -1;
    const TNode* current = digits->head;
    int summation = 0;
    while (current)
    {
        summation += current->data * current->data;
        current = current->next;
    }
    TList_destroy(digits);
    return summation;
}

bool isBacana(TList* list)
{
    if (!list) return false;
    if (!list->head) return false;
    const TNode* current = list->head;
    while (current->next) current = current->next;
    if (current->data == 1) return true;
    return false;
}

// auxiliar
void print_node(TNode* node)
{
    if (!node) return;
    printf("%d ", node->data);
    print_node(node->next);
}

void TList_print(TList* list)
{
    if (!list)
    {
        puts("Lista não existe\n");
        return;
    }
    if (!list->head)
    {
        puts("Lista vazia\n");
        return;
    }

    TNode* current = list->head;
    print_node(current);
    putchar('\n');
}
