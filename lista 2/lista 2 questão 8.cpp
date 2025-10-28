#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char escala;
    double temperatura, resultado;

    cout << "Digite a temperatura: ";
    cin >> temperatura;
    cout << "Digite a escala (C para Celsius, F para Fahrenheit): ";
    cin >> escala;

    if (escala == 'C' || escala == 'c') {
        resultado = (temperatura * 9/5) + 32;
        cout << fixed << setprecision(2);
        cout << "Temperatura em Fahrenheit: " << resultado << "°F" << endl;
    } else if (escala == 'F' || escala == 'f') {
        resultado = (temperatura - 32) * 5/9;
        cout << fixed << setprecision(2);
        cout << "Temperatura em Celsius: " << resultado << "°C" << endl;
    } else {
        cout << "Escala invalida." << endl;
    }

    return 0;
}