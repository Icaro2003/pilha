#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    No *topo = NULL, *remover;
    int opcao;

    do
    {
        printf("PILHA\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar\n");
        printf("3. Topo\n");
        printf("4. Tamanho\n");
        printf("5. Está vazia?\n");
        printf("6. Imprimir pilha\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            pressioneParaContinuar();
            break;
        case 2:
            remover = desempilhar(&topo);
            pressioneParaContinuar();
            break;
        case 3:
            topo = topoPilha(topo);
            printf("%d\n", topo->num);
            pressioneParaContinuar();
            break;
        case 4:
            printf("\nTamanho da Pilha: %d\n", tamanhoPilha(topo));
            pressioneParaContinuar();
            break;
        case 5:
            if (pilhaVazia(topo))
            {
                printf("Está vazia\n");
            }
            else
            {
                printf("Não está vazia!\n");
            }
            
            pressioneParaContinuar();
            break;
        case 6:
            imprimirPilha(topo);
            pressioneParaContinuar();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        
        default:
            printf("Opção incorreta!\n");
            break;
        }
    } while (opcao != 0);
    

    return 0;
}