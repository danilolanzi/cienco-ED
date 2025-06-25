#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite numeros inteiros positivos (0 para terminar):\n";

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            pilha.push(numero);
        } else {
            cout << "Apenas numeros positivos sao permitidos.\n";
        }
    }

    cout << "\nNumeros na ordem inversa:\n";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;

    return 0;
}
