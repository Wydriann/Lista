#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(int argc, char *argv[]) {

    Lista* lista;
    
    lista = criar_lista();
    lista = inserir_lista(lista, 10);
    lista = inserir_lista(lista, 20);
    lista = inserir_lista(lista, 5);

    imprimir_lista(lista);
    
    return 0;
}