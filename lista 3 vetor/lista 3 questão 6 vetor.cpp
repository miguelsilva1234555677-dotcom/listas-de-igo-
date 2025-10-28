#include <iostream>
using namespace std;

int main() {
    int numero;
    long long fatorial = 1;
    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "Fatorial nao definido para numeros negativos." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " e " << fatorial << endl;
    }
    return 0;
}