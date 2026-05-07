#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da FIFO
struct No {
    int valor;
    struct No* prox;
};

// Ponteiros para o início e o fim da fila
struct No* frente = NULL;
struct No* tras = NULL;

// Função para inserir na fila (enfileirar)
void enfileirar(int v) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    novo->valor = v;
    novo->prox = NULL;

    if (frente == NULL) {
        frente = tras = novo;
    } else {
        tras->prox = novo;
        tras = novo;
    }
    printf("Elemento %d inserido na fila!\n", v);
}

// Função para remover da fila (desenfileirar)
void desenfileirar() {
    if (frente == NULL) {
        printf("Fila vazia! Nada a remover.\n");
        return;
    }

    struct No* temp = frente;
    frente = frente->prox;
    printf("Elemento %d removido da fila.\n", temp->valor);
    free(temp);

    if (frente == NULL) {
        tras = NULL; // Fila ficou vazia
    }
}

// Função para "plotar" a fila (mostrar no terminal)
void mostrarFila() {
    if (frente == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    struct No* temp = frente;
    printf("\n[FRENTE] ");
    while (temp != NULL) {
        printf("-> %d ", temp->valor);
        temp = temp->prox;
    }
    printf("-> NULL\n\n");
}

// Menu de controle
void menu() {
    int opcao, valor;

    do {
        printf("==== MENU FIFO ====\n");
        printf("1. Enfileirar\n");
        printf("2. Desenfileirar\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a inserir: ");
                scanf("%d", &valor);
                enfileirar(valor);
                break;
            case 2:
                desenfileirar();
                break;
            case 3:
                mostrarFila();
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("\n");
    } while (opcao != 0);
}

// Função principal
int main() {
    menu();
    return 0;
}