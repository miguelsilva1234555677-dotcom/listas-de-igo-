#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int soma_principal = 0, soma_secundaria = 0;
    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            if (i == j) {
                soma_principal += matriz[i][j];
            }
            if (i + j == 2) {
                soma_secundaria += matriz[i][j];
            }
        }
    }
    cout << "Soma da diagonal principal: " << soma_principal << endl;
    cout << "Soma da diagonal secundaria: " << soma_secundaria << endl;
    return 0;
}
    

