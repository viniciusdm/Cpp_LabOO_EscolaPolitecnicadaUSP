#include "Musica.h"
#include <iostream>

using namespace std;

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

void teste() {
    Musica *Roses = new Musica;
    Roses -> nome = "Roses";
    Roses -> duracao = 180;
    Roses -> avaliar(3);
    Roses -> avaliar(3);
    Roses -> avaliar(1);
    Roses -> imprimir();
}

int main() {
    teste();
    return 0;
}