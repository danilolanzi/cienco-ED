#include <iostream>
#include <queue>
#include <string>
#include <locale>

using namespace std;



int main() {

    setlocale(LC_ALL,"Portuguese");

    queue<string> fila;
    int opcao;
    string nome;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender próximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "4. Encerrar programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();


        switch(opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);
                fila.push(nome);
                cout << nome << " foi adicionado à fila." << endl;
                break;

            case 2:
                if (!fila.empty()) {
                    cout << "Atendendo: " << fila.front() << endl;
                    fila.pop();
                } else {
                    cout << "Fila vazia. Nenhum cliente para atender." << endl;
                }
                break;

            case 3:
                if (fila.empty()) {
                    cout << "Fila de espera está vazia." << endl;
                } else {
                    cout << "Clientes na fila de espera:" << endl;
                    queue<string> temp = fila;
                    int pos = 1;
                    while (!temp.empty()) {
                        cout << pos++ << ". " << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Encerrando o programa." << endl;
                break;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }

    } while (opcao != 4);

    return 0;
}
