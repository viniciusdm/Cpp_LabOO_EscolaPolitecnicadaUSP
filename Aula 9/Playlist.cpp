#include <iostream>
#include <stdexcept>

#include "Playlist.h"

Playlist::Playlist(string nome, int maximoValor){
    
    if (maximoValor <= 1) {
        throw new invalid_argument ("maximoValor invalido");
    }
    if (nome.empty()) {
        throw new invalid_argument ("nome invalido");
    }
    this -> nome = nome;
    this -> maximoValor = maximoValor;
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

void Playlist::adicionar(Musica *m) {
    if (quantidadeDeMusicas >= maximoValor){
        throw new overflow_error ("musicas estourou");
    }
    if (m == nullptr){
        throw new invalid_argument ("Nulo");
    }
    if (temMusica(m)){
        throw new invalid_argument (m -> getNome() + " ja adicionado");
    }
    musicas[quantidadeDeMusicas++] = m;
}

double Playlist::getAvaliacaoDasMusicas() const {
    double medias = 0;
    int musicasComAvalicao = 0;
    for (int i = 0; i < quantidadeDeMusicas; i++){
        try{
            medias += musicas[i]->getMedia();
            musicasComAvalicao += 1;
        }
        catch (SemAvaliacao *e){                   
            delete e;
        }
    }
    if (medias == 0 || quantidadeDeMusicas == 0){
        return 0;
    }
    return medias/musicasComAvalicao;
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
