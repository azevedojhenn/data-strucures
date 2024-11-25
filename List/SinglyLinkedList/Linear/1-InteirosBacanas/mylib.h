//
// Created by jhennifer on 24/11/24.
//

#ifndef MYLIB_H
#define MYLIB_H

#include <stdbool.h>
typedef struct _list TList;

/**
 * Cria uma lista vazia
 * @return Ponteiro para a lista criada
 */
TList* TList_create();

/**
 * Insere um valor na lista
 * @param list ponteiro para a lista
 * @param value valor a ser inserido
 * @return True se a inserção foi bem sucedida, false caso contrário
 */
bool TList_insert(TList* list, int value);

/**
 * Somatório dos quadrados dos dígitos de um número (a^2 + b^2 + ... + n^2)
 * @param value valor a ser somado
 * @return Soma dos quadrados dos digitos
 */
int TList_summation(const int value);

/**
 * Verifica se o ultimo nó da lista é bacana
 * @param list ponteiro para a lista
 * @return true se o valor for bacana, false caso contrário
 */
bool isBacana(TList* list);

/**
 * Imprime os valores da lista
 * @param list ponteiro para a lista
 */
void TList_print(TList* list);

#endif //MYLIB_H
