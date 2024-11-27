//
// Created by jhennifer on 26/11/24.
//

#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

#include <stdbool.h>
#include <stdio.h>

typedef struct _typeQueue Fila;
typedef struct _typePix Pix;

/**
 * Cria uma fila dinâmica.
 * @param size Tamanho da fila.
 * @return Ponteiro para a fila criada.
 */
Fila* Fila_create(int size);

/**
 * Cria um novo elemento do tipo Pix.
 * @param id_orig ID do vértice de origem.
 * @param id_dest ID do vértice de destino.
 * @param valor Valor do arco.
 * @return Ponteiro para o novo elemento.
 */
Pix* Pix_create(int id_orig, int id_dest, float valor);

/**
 * Adiciona um novo elemento na fila.
 * @param fila Fila onde o elemento será adicionado.
 * @param pix Elemento a ser adicionado.
 * @return True se o elemento foi adicionado com sucesso, false caso contrário.
 */
bool Fila_enqueue(Fila *fila, Pix *pix);

/**
 * Remove um elemento da fila.
 * @param fila Fila de onde o elemento será removido.
 * @param temp Elemento removido.
 * @return True se o elemento foi removido com sucesso, false caso contrário.
 */
bool Fila_dequeue(Fila *fila, Pix *temp);

/**
 * Destrói a fila.
 * @param fila Fila a ser destruída.
 * @return True se a fila foi destruída com sucesso, false caso contrário.
 */
bool Fila_destroy(Fila *fila);

/**
 * Verifica se a fila está cheia.
 * @param fila Fila a ser verificada.
 * @return True se a fila está cheia, false caso contrário.
 */
bool isFull(const Fila *fila);

/**
 * Verifica se a fila está vazia.
 * @param fila Fila a ser verificada.
 * @return True se a fila está vazia, false caso contrário.
 */
bool isEmpty(const Fila *fila);

/**
 * Imprime um elemento do tipo Pix.
 * @param pix Elemento a ser impresso.
 */
void print(const Pix *pix);

#endif //DYNAMICQUEUE_H
