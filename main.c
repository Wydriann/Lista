#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(int argc, char *argv[]) {

    Lista* lista;

    lista = criar_lista();

    if (vazia(lista)) {
        printf("A lista esta vazia\n");
    } else { 
        printf("A lista nao esta vazia\n");
    }

    lista = inserir_lista(lista, 10);
    lista = inserir_lista(lista, 20);
    lista = inserir_lista(lista, 5);

    imprimir_lista(lista);

    if (vazia(lista)) {
        printf("A lista esta vazia\n");
    } else { 
        printf("A lista nao esta vazia\n");
    }

    int elemento = 10;

    if (buscar(lista, elemento) == NULL){
        printf("Nao encontrou o elemento %d\n", elemento);
    } else
    {
        printf("Encontrou o elemento %d\n", elemento);
    }
    
    // Remove valor expecífico 
    lista = remover(lista, 20);
    
    imprimir_lista(lista);

    return 0;
}