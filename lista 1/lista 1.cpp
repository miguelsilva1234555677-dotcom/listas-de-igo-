#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nome;
    double valorHora, horasTrabalhadas, pagamento;

    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cout << "Digite o valor da hora trabalhada: ";
    cin >> valorHora;
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horasTrabalhadas;

    pagamento = valorHora * horasTrabalhadas;

    cout << fixed << setprecision(2);
    cout << "O pagamento de " << nome << " eh R$ " << pagamento << endl;

    return 0;
}