#include <iostream>
#include <iomanip>
#include <cstdlib> // Necessário para system("pause") em alguns sistemas

using namespace std;

const int TAM = 5;

void calcularValores(double divida[], int dias[], double valorMulta[], double valorJuros[], double valorPagar[]) {
    for (int i = 0; i < TAM; i++) {
        valorMulta[i] = divida[i] * 0.02; // Multa de 2%
        valorJuros[i] = divida[i] * (0.01 / 30) * dias[i]; // Juros de 1% ao mês, distribuído em 30 dias
        valorPagar[i] = divida[i] + valorMulta[i] + valorJuros[i];
    }
}
void exibirResultados(double divida[], int dias[], double valorMulta[], double valorJuros[], double valorPagar[]) {
    cout << fixed << setprecision(2);
    cout << "\nResultados:" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Divida \t\tDias Atraso \t\tMulta \t\tJuros \t\tTotal a Pagar" << endl;
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << divida[i] << "\t\t" << dias[i] << "\t\t" << valorMulta[i] << "\t\t" << valorJuros[i] << "\t\t" << valorPagar[i] << endl;
    }
    cout << "---------------------------------------------------" << endl;
}
int main() {
    double divida[TAM];
    int dias[TAM];
    double valorMulta[TAM], valorJuros[TAM], valorPagar[TAM];
    int opcao;
    
    do {
        cout << "\nMenu de Controle" << endl;
        cout << "1 - Inserir dados e calcular" << endl;
        cout << "2 - Exibir resultados" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
                
        switch (opcao) {
            case 1:
                for (int i = 0; i < TAM; i++) {
                    cout << "\nInforme o valor da divida " << i + 1 << ": ";
                    cin >> divida[i];
                    cout << "Informe a quantidade de dias em atraso: ";
                    cin >> dias[i];

                    if (divida[i] < 0 || dias[i] < 0) {
                        cout << "Valores inválidos! Digite novamente.\n";
                        i--; // Retorna a mesma posição para corrigir entrada
                    }
                }
                calcularValores(divida, dias, valorMulta, valorJuros, valorPagar);
                cout << "\nCalculo realizado com sucesso!" << endl;
                break;
            case 2:
                exibirResultados(divida, dias, valorMulta, valorJuros, valorPagar);
                break;
            case 3:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    } while (opcao != 3);
    
    return 0;
}
