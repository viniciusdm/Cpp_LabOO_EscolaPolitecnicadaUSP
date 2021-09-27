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
    for (int i = 0; i < quantidadeDeArtistas; i++){
        totalDePontos = totalDePontos + (artistas[i] -> getNota());
    }
    if (((totalDePontos / quantidadeDeArtistas) + 1) >= 5){
        return 5.00;
    }
    return ((totalDePontos / quantidadeDeArtistas) + 1);
}

void Banda::imprimir(){
    cout << "Banda de " << quantidadeDeArtistas << " membros" << endl;
    Artista::imprimir();
}