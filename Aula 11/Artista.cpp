#include <iostream>
#include <stdexcept>
#include "Artista.h"

Artista::Artista(string nome)
    : nome(nome),
      musicas(new list<Musica*>()) {
    if (nome.empty())
        throw new invalid_argument("Artista Com Nome Vazio");
}

Artista::~Artista() {
    cout << "Artista com " << musicas->size() << " musica(s) destruido" << endl;
    delete musicas;
}

list<Musica*>* Artista::getMusicas() {
    return musicas;
}

string Artista::getNome() const {
    return nome;
}

double Artista::getNota() const {
    double soma = 0;
    list<Musica*>:: iterator i = musicas->begin();
    while (i != musicas->end()){
        soma += (*i) -> getMedia();
        i++;
    }
    return soma / musicas->size();
}

void Artista::adicionarMusica(Musica* musica) {
    if (musica == nullptr)
        throw new invalid_argument("Ponteiro de Musica invalido!");

    if (temMusica(musica))
        throw new invalid_argument("Musica repetida adicionada ao Artista!");

    musicas -> push_back(musica);
}

void Artista::imprimir() {
    cout << "Artista " << getNome() << " - nota " << getNota() << endl;
    
    list<Musica*>:: iterator i = musicas->begin();
    while (i != musicas->end()){
        cout << "\t";
        (*i) -> imprimir();
        i++;
    }
}

bool Artista::temMusica(Musica *m) const {
    
    list<Musica*>:: iterator i = musicas->begin();
    while (i != musicas->end()){
        if ((*i) == m)
            return true;
        i++;
    }
    return false;
}
