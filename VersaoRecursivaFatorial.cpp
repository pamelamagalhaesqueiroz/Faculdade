#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " é " << fatorial(numero) << endl;
    return 0;
}  