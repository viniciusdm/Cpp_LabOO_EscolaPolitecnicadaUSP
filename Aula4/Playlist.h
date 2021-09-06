#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Musica.h"

#define NUMERO_MAXIMO_VALORES 10

class Playlist {
private:
    std::string nome;
    Musica *musicas[NUMERO_MAXIMO_VALORES];
    int x = 0;

public:
    int getDuracaoTotal();
    bool adicionar(Musica* m);
    void setNome(std::string nome);
    std::string getNome();
    int getQuantidade();
    void imprimir();
};

#endif