#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    
    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    // Exibindo matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Invertendo cada linha
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            swap(matriz[i][j], matriz[i][3 - j - 1]);
        }
    }
    // Exibindo matriz invertida
    cout << "Matriz com linhas invertidas:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
