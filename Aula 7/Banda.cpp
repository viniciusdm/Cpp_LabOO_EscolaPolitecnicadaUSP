#include <algorithm>
#include <iostream>

#include "Banda.h"

Banda::Banda(int quantidadeMaxima, string nome)
    : Artista(quantidadeMaxima, nome), artistas(new Artista*[quantidadeMaxima]) {}

Banda::~Banda() {
}

bool Banda::adicionar(Artista *a) {
    if (quantidadeDeArtistas >= getQuantidadeMaxima())
        return false;

    for (int i = 0; i < quantidadeDeArtistas; i++)
        if (artistas[i] == a)
            return false;

    artistas[quantidadeDeArtistas++] = a;
    return true;
}

double Banda::getNota(Artista** artistas){
    for (int 1 = 0; i < quantidadeDeArtistas; i++){
        totalDePontos = totalDePontos + (artistas[i] -> getNota());
    }
    if ((totalDePontos / quantidadeDeArtistas) >= 5){
        return 5;
    }
    return (totalDePontos / quantidadeDeArtistas);
}

