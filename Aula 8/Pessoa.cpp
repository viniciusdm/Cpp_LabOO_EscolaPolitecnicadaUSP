#include "Pessoa.h"

#include<iostream>

Pessoa::Pessoa(int quantidadeMaxima, string nome) : Artista(quantidadeMaxima, nome){
}

Pessoa::~Pessoa(){
}

void Artista::imprimir(){
    cout << "- " << getNome() << endl;
    for (int i = 0; i < quantidadeDeMusicas; i++) {
        cout << "\t";
        musicas[i]->imprimir();
    }
}
