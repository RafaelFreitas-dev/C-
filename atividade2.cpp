#include <iostream>
#include <string>
#include <cstdlib>
#include <locale.h>
using namespace std;

// Struct para armazenar os dados de uma pessoa
struct Pessoa {
    string cpf;
    string nome;
    string email;
    string telefone;
};

// Struct para o nó da fila
struct No {
    Pessoa dados;
    No* prox;
};

// Ponteiros da fila
No* primeiro = NULL;
No* ultimo = NULL;
int total = 0;

// Inicializa a fila
void construtor() {
    primeiro = ultimo = NULL;
    total = 0;
    cout << "Fila inicializada com sucesso!" << endl;
    system("pause");
}

// Verifica se a fila está vazia
bool filaVazia() {
    return (primeiro == NULL);
}

// Insere uma nova pessoa na fila
void inserirNaFila() {
    No* novo = new No;

    cout << "Digite o CPF: ";
    cin.ignore(); // Limpa buffer do teclado
    getline(cin, novo->dados.cpf);

    cout << "Digite o nome: ";
    getline(cin, novo->dados.nome);

    cout << "Digite o email: ";
    getline(cin, novo->dados.email);

    cout << "Digite o telefone: ";
    getline(cin, novo->dados.telefone);

    novo->prox = NULL;
    total++;

    if (filaVazia()) {
        primeiro = ultimo = novo;
    } else {
        ultimo->prox = novo;
        ultimo = novo;
    }

    cout << "Pessoa inserida com sucesso!" << endl;
    system("pause");
}

// Remove a pessoa mais antiga da fila
void removerDaFila() {
    if (filaVazia()) {
        cout << "Fila vazia. Nada para remover!" << endl;
    } else {
        No* temp = primeiro;
        primeiro = primeiro->prox;
        cout << "Removendo: " << temp->dados.nome << endl;
        delete temp;
        total--;

        if (primeiro == NULL) {
            ultimo = NULL;
        }
    }
    system("pause");
}

// Exibe todas as pessoas da fila
void mostrarFila() {
    if (filaVazia()) {
        cout << "Fila está vazia!" << endl;
    } else {
        No* temp = primeiro;
        cout << "\n--- Pessoas na fila ---" << endl;
        while (temp != NULL) {
            cout << "Nome: " << temp->dados.nome << endl;
            cout << "CPF: " << temp->dados.cpf << endl;
            cout << "Email: " << temp->dados.email << endl;
            cout << "Telefone: " << temp->dados.telefone << endl;
            cout << "------------------------" << endl;
            temp = temp->prox;
        }
    }
    system("pause");
}

// Libera a memória da fila
void destrutor() {
    while (primeiro != NULL) {
        No* temp = primeiro;
        primeiro = primeiro->prox;
        delete temp;
    }
    ultimo = NULL;
    total = 0;
    cout << "\nFila destruída com sucesso!" << endl;
    system("pause");
}

// Menu de controle
void menu() {
    int opcao;

    do {
        system("cls");
        cout << "===== MENU FIFO DE PESSOAS =====" << endl;
        cout << "1 - Inserir pessoa" << endl;
        cout << "2 - Remover pessoa" << endl;
        cout << "3 - Mostrar fila" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                inserirNaFila();
                break;
            case 2:
                removerDaFila();
                break;
            case 3:
                mostrarFila();
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
