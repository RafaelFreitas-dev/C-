//QUESTÃO A - PAG 26 LIVRO EXERCICIO DE ALGORITMO.

// Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e D). Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da soma(variável S) do segundo com o quarto valor.

#include <iostream>
#include "math.h"
#include "cstdlib"

using namespace std;

// Definição da struct para armazenar os valores
struct Valores {
    int A, B, C, D;
};

// Função para ler os valores
Valores lerValores(){
    Valores v;
    cout << "Digite o valor de A: ";
    cin >> v.A;
    cout << "Digite o valor de B: ";
    cin >> v.B;
    cout << "Digite o valor de C: ";
    cin >> v.C;
    cout << "Digite o valor de D: ";
    cin >> v.D;
    return v;
}

// Função para calcular e exibir os resultados
void calcularResultados(Valores v) {
    int P = v.A * v.C; // Produto do primeiro com o terceiro valor
    int S = v.B + v.D; // Soma do segundo com o quarto valor
    
    cout << "\nResultado do produto (A * C): " << P;
    cout << "\nResultado da soma (B + D): " << S << endl;
}

int main() {
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    int tecla;
    Valores valores;
    
    while (tecla != 3) {
        system("cls");
        cout << "\n1) Ler \n2) Exibir \n3) Sair \n\nEscolha uma opção: ";
        cin >> tecla;

        switch (tecla){
            case 1:
            valores = lerValores(); // Lendo os valores
                break;
            case 2:
            calcularResultados(valores); // Calculando e exibindo os resultados
            system("pause");
                break;
            case 3:
                exit(0);
            default:
                cout << "Opção inválida. Tente novamente.\n";
                system("pause");
        }
    }
    return 0;
}