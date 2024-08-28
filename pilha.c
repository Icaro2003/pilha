#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

No *empilhar(No *topo)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }

    novo->num = lerNum();
    novo->proximo = topo;

    return novo;
}

No *desempilhar(No **topo)
{
    if (*topo == NULL)
    {
        printf("Pilha vazia, não é possível desempilhar!\n");
        return NULL;
    }
    
    No *remover = *topo;
    *topo = remover->proximo;

    return remover;
}

No *topoPilha(No *topo)
{
    return topo;
}

int tamanhoPilha(No *topo)
{
    No *aux = topo;
    int tam = 0;

    while (aux != NULL)
    {
        aux = aux->proximo;
        tam++;
    }
    
    return tam;
}

int pilhaVazia(No *topo)
{
    return (topo == NULL);
}

void imprimirPilha(No *topo)
{
    No *aux = topo;

    while (aux != NULL)
    {
        printf("%d\n", aux->num);
        aux = aux->proximo;
    }
}

int lerNum()
{
    int num;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    return num;
}

void pressioneParaContinuar()
{
    printf("\nPressione para continuar...\n");
    getchar();
    getchar();
}