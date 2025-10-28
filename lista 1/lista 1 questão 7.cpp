#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distancia, combustivel, consumo;
    
    cout << "Digite a distancia percorrida (em km): ";
    cin >> distancia;
    cout << "Digite o total de combustivel gasto (em litros): ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "O consumo medio de combustivel eh: " << consumo << " km/l" << endl;

    return 0;
}