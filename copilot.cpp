#include <iostream>
#include <iomanip> // Para formatação da saída
using namespace std;

int main() {
    const int tamanho = 6;
    int A[tamanho], B[tamanho];

    // Ler os elementos da matriz A
    cout << "Digite os 20 elementos da matriz A:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "A[" << i+1 << "]: ";
        cin >> A[i];
    }

    // Construir a matriz B invertida
    for (int i = 0; i < tamanho; i++) {
        B[i] = A[tamanho - 1 - i];
    }

    // Exibir as matrizes lado a lado
    cout << "\nMatriz A\tMatriz B" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << setw(8) << A[i] << "\t" << setw(8) << B[i] << endl;
    }

    return 0;
}
