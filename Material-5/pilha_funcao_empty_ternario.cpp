#include <iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> pilha;

    cout << " A pilha esta vazia?" << (pilha.empty()? "Sim" : "Nao") << endl;

    pilha.push(10);

    cout << " A pilha esta vazia?" << (pilha.empty()? "Sim" : "Nao") << endl;

}
