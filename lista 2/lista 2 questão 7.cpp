#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double lancamento1, lancamento2, lancamento3;
    double maior;
    
    cout << "Digite o primeiro lancamento: ";
    cin >> lancamento1;
    cout << "Digite o segundo lancamento: ";
    cin >> lancamento2;
    cout << "Digite o terceiro lancamento: ";
    cin >> lancamento3;

    maior = lancamento1;

    if (lancamento2 > maior) {
        maior = lancamento2;
    }
    if (lancamento3 > maior) {
        maior = lancamento3;
    }

    cout << "O maior lancamento foi: " << fixed << setprecision(2) << maior << endl;

    return 0;
}