/*Você foi contratado para criar um programa em C++ que permite ao usuário digitar uma
lista de números inteiros e, em seguida, exibir os números na ordem de inserção e em
ordem inversa*/

#include <iostream>
#include <list>

int main() {
    std::list<int> numeros;
    int valor;

    std::cout << "Digite 5 numeros inteiros:" << std::endl;

    // Inserção dos 5 números
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> valor;
        numeros.push_back(valor);
    }

    // Exibição na ordem de inserção
    std::cout << "\nNumeros na ordem de insercao: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }

    // Exibição na ordem inversa
    std::cout << "\nNumeros na ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}
