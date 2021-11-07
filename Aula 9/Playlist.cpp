#include <iostream>
#include <stdexcept>

#include "Playlist.h"

Playlist::Playlist(string nome, int maximoValor)
    : nome(nome), maximoValor(maximoValor) {
    musicas = new Musica*[maximoValor];
}

Playlist::~Playlist() {
    delete[] musicas;
}

string Playlist::getNome() {
    return nome;
}

int Playlist::getDuracao() {
    int duracao = 0;
    for (int i = 0; i < quantidadeDeMusicas; i++)
        duracao += musicas[i]->getDuracao();

    return duracao;
}

int Playlist::getQuantidadeDeMusicas() const {
    return quantidadeDeMusicas;
}

Musica **Playlist::getMusicas() {
    return musicas;
}

bool Playlist::adicionar(Musica *m) {
    if (quantidadeDeMusicas >= maximoValor)
        return false;

    if (m == nullptr)
        return false;

    if (temMusica(m))
        return false;

    musicas[quantidadeDeMusicas++] = m;
    return true;
}

double Playlist::getAvaliacaoDasMusicas() const {
    /* IMPLEMENTAR METODO */
    return .0;
}

void Playlist::imprimir() {
    cout << nome << endl;
    for (int i = 0; i < quantidadeDeMusicas; i++) {
        cout << "\t";
        musicas[i]->imprimir();
    }
}

bool Playlist::temMusica(Musica *m) const {
    for (int i = 0; i < quantidadeDeMusicas; i++)
        if (musicas[i] == m)
            return true;

    return false;
}
