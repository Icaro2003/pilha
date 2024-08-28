#ifndef PILHA_H
#define PILHA_H

typedef struct no
{
    int num;
    struct no *proximo;
} No;

No *empilhar(No *topo);
No *desempilhar(No **topo);
No *topoPilha(No *t);
int tamanhoPilha(No *topo);
int pilhaVazia(No *topo);
void imprimirPilha(No *topo);
void pressioneParaContinuar();
int lerNum();

#endif