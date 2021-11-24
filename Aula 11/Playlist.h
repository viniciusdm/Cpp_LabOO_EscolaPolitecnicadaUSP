#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>

#include "Musica.h"

using namespace std;

class Playlist {
public:
    Playlist(string nome);
    ~Playlist();

    string getNome();
    int getDuracao();

    vector<Musica*>* getMusicas();

    void adicionar(Musica *m);

    double getAvaliacaoDasMusicas() const;

    void imprimir();
private:
    bool temMusica(Musica *m) const;

    string nome;
    vector<Musica*>* musicas;
    int quantidadeMusica = 0;
};

#endif /* PLAYLIST_H */
