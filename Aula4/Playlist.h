#ifndef PLAYLIST_H
#define PLAYLIST_H

#define NUMERO_MAXIMO_VALORES 10

#include "Musica.h"

using namespace std;

class Playlist {
private:
    string nome;
    int quantidade = 0;
    int duracaoTotal = 0;
    Musica *musicas[NUMERO_MAXIMO_VALORES];

public:
    int getDuracaoTotal();
    bool adicionar(Musica* m);
    void setNome(string nome);
    string getNome();
    int getQuantidade();
    void imprimir();
};

#endif
