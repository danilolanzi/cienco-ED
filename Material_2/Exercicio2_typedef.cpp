/*Suponha que voc� est� desenvolvendo um programa para armazenar
informa��es sobre animais em um zool�gico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informa��es sobre cada animal:
� Nome do animal (string)
� Esp�cie do animal (string)
� Idade do animal (int)
� Peso do animal em kg (float)
Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usu�rio para digitar os dados de 10
animais e armazena esses dados em uma vari�vel do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.*/

#include <iostream>
#include <string>

using namespace std;

// Defini��o da estrutura Animal
typedef struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
} ListaAnimais;



int main() {

    setlocale(LC_ALL, "Portuguese");
    // Declarando a lista de animais
    ListaAnimais animais[10];

    // Solicitando ao usu�rio que insira os dados de 10 animais
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, animais[i].nome);
        cout << "Esp�cie: ";
        getline(cin, animais[i].especie);
        cout << "Idade: ";
        cin >> animais[i].idade;
        cout << "Peso (em kg): ";
        cin >> animais[i].peso;

        // Limpar o buffer do teclado
        cin.ignore();
    }

    // Exibindo os dados dos animais
    cout << "\nDados dos animais:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Esp�cie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl << endl;
    }

    return 0;
}
