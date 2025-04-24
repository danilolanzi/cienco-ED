/*Criar um programa para registrar o desempenho de
estudantes em uma disciplina, incluindo nome do estudante,
nota final e se ele foi aprovado ou reprovado. O programa deve
permitir a inserção de dados para vários estudantes até que o
usuário escolha encerrar. Utilize vetor.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudante {
    string nome;
    float nota;
    bool aprovado;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Estudante> estudantes;
    char continuar = 's';
    Estudante estudante;

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do estudante: ";
        getline(cin, estudante.nome);
        cout << "Digite a nota final do estudante: ";
        cin >> estudante.nota;
        estudante.aprovado = estudante.nota >= 6.0;

        estudantes.push_back(estudante);
        cout << estudante.nome << " foi " << (estudante.aprovado ? "aprovado(a)." : "reprovado(a).") << endl;

        cout << "Deseja adicionar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    cout << "\nRegistro dos Estudantes:\n";
    for (const auto& e : estudantes) {
        cout << "Nome: " << e.nome << ", Nota: " << e.nota << ", Status: " << (e.aprovado ? "Aprovado" : "Reprovado") << endl;
    }

    return 0;
}
