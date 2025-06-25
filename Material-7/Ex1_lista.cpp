/*Voc� foi contratado para criar um programa em C++ que permite ao usu�rio digitar uma
lista de n�meros inteiros e, em seguida, exibir os n�meros na ordem de inser��o e em
ordem inversa*/

#include <iostream>
#include <list>

int main() {
    std::list<int> numeros;
    int valor;

    std::cout << "Digite 5 numeros inteiros:" << std::endl;

    // Inser��o dos 5 n�meros
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> valor;
        numeros.push_back(valor);
    }

    // Exibi��o na ordem de inser��o
    std::cout << "\nNumeros na ordem de insercao: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }

    // Exibi��o na ordem inversa
    std::cout << "\nNumeros na ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}
