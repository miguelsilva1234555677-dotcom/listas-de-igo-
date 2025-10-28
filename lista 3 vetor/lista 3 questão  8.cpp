#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos elementos da sequencia de Fibonacci deseja? ";
    cin >> n;
    if (n <= 0) {
        cout << "Por favor, insira um numero positivo." << endl;
        return 1;
    }
    int a = 0, b = 1, c;
    cout << "Sequencia de Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
