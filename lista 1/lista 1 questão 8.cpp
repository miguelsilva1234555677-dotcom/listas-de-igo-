#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    double areaQuadrado, areaTriangulo, areaTrapezio;
    
    cout << "Digite o valor de A (base do triangulo): ";
    cin >> A;
    cout << "Digite o valor de B (base do trapezio): ";
    cin >> B;
    cout << "Digite o valor de C (altura do trapezio): ";
    cin >> C;

    areaQuadrado = pow(A, 2);
    areaTriangulo = (A * C) / 2;
    areaTrapezio = ((A + B) * C) / 2;

    cout << fixed << setprecision(2);
    cout << "Area do quadrado: " << areaQuadrado << endl;
    cout << "Area do triangulo: " << areaTriangulo << endl;
    cout << "Area do trapezio: " << areaTrapezio << endl;

    return 0;
}