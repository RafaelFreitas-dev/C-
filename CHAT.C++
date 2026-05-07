#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> A(20);

  cout << "Digite os 20 elementos da matriz A:" << endl;
  for (int i = 0; i < 20; ++i) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> A[i];
  }

  // Cria uma cópia de A para B
  vector<int> B = A;

  // Inverte a ordem dos elementos em B
  reverse(B.begin(), B.end());

  cout << "\nMatriz A:\tMatriz B:" << endl;
  for (int i = 0; i < 20; ++i) {
    B[i] = A[i];
    cout << A[i] << "\t\t" << B[i] << endl;
  }

  return 0;
}
