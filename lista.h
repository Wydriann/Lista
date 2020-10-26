#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

// Função de criação da Lista
Lista* criar_lista();

// Função que insere no inicio da Lista
Lista* inserir_lista(Lista* l, int i);

// função para imprimir os elementos da lsita
void imprimir_lista(Lista* l);

// Verifica se a lista esta vazia
int vazia(Lista* l);

// Busca elementos na lista
Lista* buscar(Lista* , int v);

// Remove um elemento da lista
Lista* remover(Lista* l, int v);
