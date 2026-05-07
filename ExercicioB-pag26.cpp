//QUESTÃO B - PAG 26 LIVRO EXERCICIO DE ALGORITMO.
// Ler o valor correspondente ao salário mensal (variável SM) de um trabalhador e também o valor do percentual de reajuste (variável PR) a ser atribuído. Apresentar o valor do novo salário (variável NS).

#include <iostream>
#include "cstdlib"
#include "math.h"

using namespace std;

// Definição da struct para armazenar os valores
struct Salario {
    double SM; // Salário mensal
    double PR; // Percentual de reajuste
};

// Função para ler os valores
Salario lerSalario() {
    Salario s;
    cout << "Digite o valor do salário mensal: ";
    cin >> s.SM;
    cout << "Digite o percentual de reajuste (%): ";
    cin >> s.PR;
    return s;
}
// Função para calcular o novo salário
double calcularNovoSalario(Salario s) {
    return s.SM + (s.SM * s.PR / 100);
}
// Função para exibir o novo salário
void exibirNovoSalario(double NS) {
    cout << "\nO novo salário é: " << NS << endl;
}
int main() {
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    int tecla=0;
    Salario salario;
    double novoSalario;
    
    while (tecla != 3) {
        system("cls");
        cout << "\n1) Ler \n2) Exibir \n3) Sair \n\nEscolha uma opção: ";
        cin >> tecla;

        switch (tecla){
            case 1:
                salario = lerSalario(); // Lendo os valores
                break;
            case 2:
            novoSalario = calcularNovoSalario(salario); // Calculando o novo salário
            exibirNovoSalario(novoSalario); // Exibindo o resultado
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