//
// Created by jhennifer on 26/11/24.
//

#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

#include <stdbool.h>
#include <stdio.h>

// TQueue stands for "Type Dynamic Queue"
typedef struct _typeQueue TQueue;

// TPix stands for "Type Pix"
typedef struct _typePix TPix;

/**
 * Cria uma fila dinâmica.
 * @param size Tamanho da fila.
 * @return Ponteiro para a fila criada.
 */
TQueue* TQueue_create(int size);

/**
 * Cria um novo elemento do tipo Pix.
 * @param id_orig ID do vértice de origem.
 * @param id_dest ID do vértice de destino.
 * @param valor Valor do arco.
 * @return Ponteiro para o novo elemento.
 */
TPix* TPix_create(int id_orig, int id_dest, float valor);

/**
 * Adiciona um novo elemento na fila.
 * @param fila Fila onde o elemento será adicionado.
 * @param pix Elemento a ser adicionado.
 * @return True se o elemento foi adicionado com sucesso, false caso contrário.
 */
bool TQueue_enqueue(TQueue *fila, TPix *pix);

/**
 * Remove um elemento da fila.
 * @param fila Fila de onde o elemento será removido.
 * @param temp Elemento removido.
 * @return True se o elemento foi removido com sucesso, false caso contrário.
 */
bool TQueue_dequeue(TQueue *fila, TPix *temp);

/**
 * Destrói a fila.
 * @param fila Fila a ser destruída.
 * @return True se a fila foi destruída com sucesso, false caso contrário.
 */
bool TQueue_destroy(TQueue *fila);

/**
 * Verifica se a fila está cheia.
 * @param fila Fila a ser verificada.
 * @return True se a fila está cheia, false caso contrário.
 */
bool TQueue_isFull(const TQueue *fila);

/**
 * Verifica se a fila está vazia.
 * @param fila Fila a ser verificada.
 * @return True se a fila está vazia, false caso contrário.
 */
bool TQueue_isEmpty(const TQueue *fila);

/**
 * Imprime um elemento do tipo Pix.
 * @param pix Elemento a ser impresso.
 */
void TPix_print(const TPix *pix);

#endif //DYNAMICQUEUE_H
