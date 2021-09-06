#include <iostream>
#include <string>
using namespace std;

class Musica {
public:
    string nome;
    int duracao;
    int quantidadeDeAvalicoes = 0;
    int somaDasAvaliacoes = 0;

    void avaliar(int nota);
    double getMedia();

    void imprimir();
};

void Musica::avaliar(int nota) {
    somaDasAvaliacoes += nota;
    quantidadeDeAvalicoes++;
}

double Musica::getMedia() {
    return ((double)somaDasAvaliacoes)/quantidadeDeAvalicoes;
}

void Musica::imprimir() {
    cout << nome << " - " << duracao << " segundos - " << this->getMedia()  << " avaliacao" << endl;
}

/**
 * Implementar a funcao teste
**/
void teste() {
    // IMPLEMENTE seguindo o enunciado
}

int main() {
    teste();
    return 0;
}
