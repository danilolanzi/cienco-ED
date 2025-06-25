#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int opcao, elemento;


    do {
        cout << "\nMenu de Operacoes com Pilha:\n";
        cout << "1. Inserir elemento na pilha\n";
        cout << "2. Remover elemento do topo da pilha\n";
        cout << "3. Verificar elemento do topo\n";
        cout << "4. Verificar se a pilha esta vazia\n";
        cout << "5. Exibir o tamanho da pilha\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> elemento;
                pilha.push(elemento);
                cout << "Elemento inserido com sucesso.\n";
                break;

            case 2:
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido do topo.\n";
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia. Nao ha elementos para remover.\n";
                }
                break;

            case 3:
                if (!pilha.empty()) {
                    cout << "Elemento no topo: " << pilha.top() << endl;
                } else {
                    cout << "A pilha esta vazia.\n";
                }
                break;

            case 4:
                if (pilha.empty()) {
                    cout << "A pilha esta vazia.\n";
                } else {
                    cout << "A pilha NAO esta vazia.\n";
                }
                break;

            case 5:
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;

            case 0:
                cout << "Encerrando o programa...\n";
                break;

            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
