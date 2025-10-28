#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int segundosTotais, horas, minutos, segundos;
    
    cout << "Digite o tempo em segundos: ";
    cin >> segundosTotais;

    horas = segundosTotais / 3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = segundosTotais % 60;

    cout << "Tempo convertido: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

    return 0;
}