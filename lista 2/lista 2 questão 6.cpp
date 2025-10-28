#include <iostream>
#include <string>

using namespace std;

int main() {
    double glicose;
    string classificacao;

    cout << "Digite o nivel de glicose: ";
    cin >> glicose;

    if (glicose < 70) {
        classificacao = "Baixo";
    } else if (glicose >= 70 && glicose <= 99) {
        classificacao = "Normal";
    } else {
        classificacao = "Alto";
    }

    cout << "Classificacao: " << classificacao << endl;

    return 0;
}