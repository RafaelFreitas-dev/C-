#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

int total;

struct noFifo{
    int chave;
    noFifo* prox;
};

noFifo* primeiroNo; // Endereço do primeiro elemento
noFifo* ultimoNo;   // Endereço do último elemento

// Inicializa a FIFO
void construtor(){
    primeiroNo = ultimoNo = NULL;
    total = 0;
    cout << "Fifo inicializada." << endl;
    system("pause");
}

// Verifica se está vazia
bool vazia(){
    return (primeiroNo == NULL);
}

// Insere elemento na FIFO
void inserirNo(int valor){
    noFifo* novoNo = (noFifo*)malloc(sizeof(noFifo));

    if (novoNo == NULL) {
        cout << "\nErro de alocação!" << endl;
        system("pause");
        return;
    }

    novoNo->chave = valor;
    novoNo->prox = NULL;
    total++;

    if (vazia()){
        primeiroNo = ultimoNo = novoNo;
    } else {
        ultimoNo->prox = novoNo;
        ultimoNo = novoNo;
    }
}

// Remove elemento da FIFO
void removerNo(){
    if (vazia()){
        cout << "Fila vazia! Nada para remover." << endl;
    } else {
        noFifo* temp = primeiroNo;
        primeiroNo = primeiroNo->prox;
        free(temp);
        total--;
        cout << "Elemento removido." << endl;
    }
    system("pause");
}

// Exibe os elementos da FIFO
void mostrar() {
    if (vazia()) {
        cout << "Fila está vazia!" << endl;
    } else {
        noFifo* temp = primeiroNo;
        cout << "Elementos na fila: ";
        while (temp != NULL) {
            cout << temp->chave << " ";
            temp = temp->prox;
        }
        cout << endl;
    }
    system("pause");
}

// Libera memória e destrói a FIFO
void destrutor() {
    noFifo* temp;
    while (primeiroNo != NULL) {
        temp = primeiroNo;
        primeiroNo = primeiroNo->prox;
        free(temp);
    }
    ultimoNo = NULL;
    total = 0;
    cout << "\nFIFO destruída...!" << endl;
    system("pause");
}

// Menu interativo
void menu() {
    int opcao, valor;

    do {
        system("cls");
        cout << "===== MENU FIFO =====" << endl;
        cout << "1 - Inserir elemento" << endl;
        cout << "2 - Remover elemento" << endl;
        cout << "3 - Mostrar fila" << endl;
        cout << "4 - Sair e destruir fila" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "Digite o valor a ser inserido: ";
            cin >> valor;
            inserirNo(valor);
            break;
        case 2:
            removerNo();
            break;
        case 3:
            mostrar();
            break;
        case 4:
            destrutor();
            break;
        default:
            cout << "Opção inválida!" << endl;
            system("pause");
        }

    } while (opcao != 4);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    construtor();
    menu();
    return 0;
}