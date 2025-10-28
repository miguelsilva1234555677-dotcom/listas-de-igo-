#include <iostream>
using namespace std;

// Função que conta ocorrências
int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

// Função principal
int main() {
    int matriz[4][4];
    int numero;

    // Leitura da matriz
    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    // Leitura do número a ser contado
    cout << "Digite o número a ser contado: ";
    cin >> numero;

    // Contagem de ocorrências
    int ocorrencias = contarOcorrencias(matriz, numero);
    cout << "O número " << numero << " aparece " << ocorrencias << " vezes na matriz." << endl;

    return 0;
}
