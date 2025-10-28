#include <iostream>
using namespace std;

// Função que soma duas matrizes
void somaMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizSoma[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}
int main() {
    int matrizA[3][3], matrizB[3][3], matrizSoma[3][3];
     // Preenchendo primeira matriz
    cout << "Digite os elementos da primeira matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }
     // Preenchendo segunda matriz
    cout << "Digite os elementos da segunda matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }
     // Somando as matrizes
    somaMatrizes(matrizA, matrizB, matrizSoma);

    // Exibindo o resultado
    cout << "Resultado da soma das matrizes:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
