#ifndef PLAYLIST_H
#define  PLAYLIST_H

#include <string>

#include "Artista.h"
#include "Musica.h"
#include "Banda.h"

using namespace std;

class Playlist {
public:
    Playlist(string nome, int maximoValor);
    ~Playlist();

    string getNome();
    int getDuracao();

    int getQuantidadeDeMusicas() const;
    int getQuantidadeDeArtistas() const;

    Musica** getMusicas();
    Artista** getArtistas();

    Banda** getBandas();

    bool adicionar(Musica *m);
    bool adicionar(Artista *a);

    void imprimir();
private:
    bool temMusica(Musica *m) const;

    string nome;
    int maximoValor;
    Musica **musicas;
    int quantidadeDeMusicas = 0;
    Artista** artistas;
    Musica** musicasDoArtista;
    Banda** bandas;
    int quantidadeDeArtistas = 0;
    int quantidadeDeMusicasDoArtista;
    int c = 0;
    int quantidade = 0;
};

#endif 