#include <iostream>
#include <stdexcept>

#include "Playlist.h"

Playlist::Playlist(string nome)
    : nome(nome), musicas(new vector<Musica*>()) {
    if (nome.empty())
        throw new invalid_argument("Playlist Com Nome Vazio");
}

Playlist::~Playlist() {
    delete musicas;
}

string Playlist::getNome() {
    return nome;
}

int Playlist::getDuracao() {
    int duracao = 0;
    for (int i = 0; i < quantidadeMusica; i++)
        duracao += musicas->at(i)->getDuracao();

    return duracao;
}

vector<Musica*>* Playlist::getMusicas() {
    return musicas;
}

void Playlist::adicionar(Musica *m) {
    if (m == nullptr)
        throw new invalid_argument("Ponteiro de Musica invalido!");

    if (temMusica(m))
        throw new invalid_argument("Musica repetida adicionada à Playlist!");

    musicas -> push_back(m);
}

double Playlist::getAvaliacaoDasMusicas() const {
    double soma = 0;
    int numeroMusicas = 0;
    for (int i = 0; i < quantidadeMusica; i++) {
        try {
            soma += musicas->at(i)->getMedia();
            numeroMusicas++;
        } catch (invalid_argument*) {}
    }

    return soma / numeroMusicas;
}

void Playlist::imprimir() {
    cout << "Playlist " << nome << " - duracao " << getDuracao() << " - media " << getAvaliacaoDasMusicas() << endl;
    for (int i = 0; i < quantidadeMusica; i++) {
        cout << "\t";
        musicas->at(i)->imprimir();
    }
}

bool Playlist::temMusica(Musica *m) const {
    for (int i = 0; i < quantidadeMusica; i++)
        if (musicas->at(i) == m)
            return true;

    return false;
}
