#include <iostream>
#include <string>

/*Construir um programa para avaliar filmes, pedindo ao
usuário para avaliar diferentes aspectos como enredo, atuação e
efeitos especiais. Calcule a média das notas avaliadas em
enredo, atuação e efeitos especiais. O programa deve permitir a
avaliação de vários filmes. O programa deve parar quando
usuário não desejar mais continuar.*/


using namespace std;

struct AvaliacaoFilme {
    string titulo;
    int enredo;
    int atuacao;
    int efeitosEspeciais;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    AvaliacaoFilme filme;
    char continuar = 's';
    int totalFilmes = 0;
    double somaEnredo = 0;
    double somaAtuacao = 0;
    double somaEfeitosEspeciais = 0;

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o título do filme: ";
        getline(cin, filme.titulo);
        cout << "Avalie o enredo do filme (1 a 5): ";
        cin >> filme.enredo;
        cout << "Avalie a atuação no filme (1 a 5): ";
        cin >> filme.atuacao;
        cout << "Avalie os efeitos especiais do filme (1 a 5): ";
        cin >> filme.efeitosEspeciais;
        cin.ignore();

        totalFilmes++;
        somaEnredo += filme.enredo; // somaEnredo = somaEnredo + filme.enredo
        somaAtuacao += filme.atuacao;
        somaEfeitosEspeciais += filme.efeitosEspeciais;

        cout << "Filme: " << filme.titulo << "\nEnredo: " << filme.enredo << "\nAtuação: " << filme.atuacao << "\nEfeitos Especiais: " << filme.efeitosEspeciais << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    if (totalFilmes > 0) {
        double mediaEnredo = somaEnredo / totalFilmes;
        double mediaAtuacao = somaAtuacao / totalFilmes;
        double mediaEfeitosEspeciais = somaEfeitosEspeciais / totalFilmes;

        cout << "\nMédia das Avaliações:" << endl;
        cout << "Enredo: " << mediaEnredo << "\nAtuação: " << mediaAtuacao << "\nEfeitos Especiais: " << mediaEfeitosEspeciais << endl;
    } else {
        cout << "\nNenhum filme avaliado." << endl;
    }

    return 0;
}
