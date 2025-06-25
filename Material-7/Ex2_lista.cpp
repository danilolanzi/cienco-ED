/*Construa uma lista de funcionários em C++:
– O programa deve pedir quantos funcionários serão cadastrados;
– O programa deve avisar se lista vazia;
– O programa deve imprimir esta lista na ordem de cadastro;
– O programa deve imprimir a lista ordenada;
– O programa deve imprimir a lista reversa;
– O programa deve mostrar quantos funcionários estão cadastrados */

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main() {
    std::list<std::string> funcionarios;
    int quantidade;

    std::cout << "Quantos funcionarios deseja cadastrar? ";
    std::cin >> quantidade;
    std::cin.ignore(); // limpa o buffer do cin

    if (quantidade <= 0) {
        std::cout << "Lista vazia. Nenhum funcionario cadastrado." << std::endl;
        return 0;
    }

    // Cadastro
    for (int i = 0; i < quantidade; ++i) {
        std::string nome;
        std::cout << "Digite o nome do funcionario " << (i + 1) << ": ";
        std::getline(std::cin, nome);
        funcionarios.push_back(nome);
    }

    // Ordem de cadastro
    std::cout << "\nLista na ordem de cadastro:" << std::endl;
    for (const auto& nome : funcionarios) {
        std::cout << nome << std::endl;
    }

    // Lista ordenada alfabeticamente
    std::list<std::string> funcionarios_ordenados = funcionarios;
    funcionarios_ordenados.sort();

    std::cout << "\nLista ordenada alfabeticamente:" << std::endl;
    for (const auto& nome : funcionarios_ordenados) {
        std::cout << nome << std::endl;
    }

    // Lista em ordem reversa
    std::cout << "\nLista em ordem reversa:" << std::endl;
    for (auto it = funcionarios.rbegin(); it != funcionarios.rend(); ++it) {
        std::cout << *it << std::endl;
    }

    // Total de funcionários
    std::cout << "\nTotal de funcionarios cadastrados: " << funcionarios.size() << std::endl;

    return 0;
}
