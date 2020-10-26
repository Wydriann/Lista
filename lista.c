#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

struct lista{
    int info;
    struct lista* prox;
};

Lista* criar_lista() 
{
    return NULL;
}

Lista* inserir_lista(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void imprimir_lista(Lista* l) {
    Lista* p;

    for (p = l; p!= NULL; p = p->prox) {
        printf("%d\n", p->info);
    }
}
