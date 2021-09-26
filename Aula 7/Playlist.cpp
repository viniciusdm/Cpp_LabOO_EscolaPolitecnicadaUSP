#include <iostream>

#include "Playlist.h"

Playlist::Playlist(string nome, int maximoValor)
    : nome(nome), maximoValor(maximoValor), musicas(new Musica*[maximoValor]) {
        artistas = new Artista*[maximoValor];
        bandas = new Banda*[maximoValor];
    }

Playlist::~Playlist() {
    delete[] musicas;
    delete[] artistas;
}

Banda** Playlist::getBandas(){
    for (int i = 0; i < quantidadeDeArtistas; i++){
        Banda* b1 = dynamic_cast<Banda*>(artistas[i]);
        if (b1 != NULL){
            bandas[quantidade++] = b1;
            b1 = NULL;
        }
    }
    return bandas; 
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

int Playlist::getQuantidadeDeArtistas() const {
    return quantidadeDeArtistas;
}

Musica** Playlist::getMusicas() {
    return musicas;
}

Artista** Playlist::getArtistas() {
    return artistas;
}

bool Playlist::adicionar(Musica *m) {
    if (quantidadeDeMusicas >= maximoValor)
        return false;

    if (temMusica(m))
        return false;

    musicas[quantidadeDeMusicas++] = m;
    return true;
}

bool Playlist::adicionar(Artista *a) {
    if (quantidadeDeArtistas >= maximoValor){
        return false;
    }
    for (int i = 0; i < quantidadeDeArtistas; i++){
        if (artistas[i] == a){
            return false;
        }
    }
    musicasDoArtista = a -> getMusicas();
    quantidadeDeMusicasDoArtista = a -> getQuantidadeDeMusicas();
    for (int i = 0; i < quantidadeDeMusicasDoArtista; i++){
        if (temMusica(musicasDoArtista[i]) == false){
            c = c + 1;
        }
    }
    if ((c + quantidadeDeMusicas) > maximoValor){
        return false;
    }
    for (int i = 0; i < quantidadeDeMusicasDoArtista; i++){
        if (temMusica(musicasDoArtista[i]) == false){
            musicas[quantidadeDeMusicas++] = musicasDoArtista[i];
        }
    }
    artistas[quantidadeDeArtistas++] = a;
    return true;
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