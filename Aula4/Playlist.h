#ifndef PLAYLIST_H
#define PLAYLIST_H

#define NUMERO_MAXIMO_VALORES 10

#include "Musica.h"

class Playlist {
private:
    std::string nome;
    int quantidade = 0;
    int duracaoTotal = 0;
    Musica *musicas[NUMERO_MAXIMO_VALORES];

public:
    int getDuracaoTotal();
    bool adicionar(Musica* m);
    void setNome(std::string nome);
    std::string getNome();
    int getQuantidade();
    void imprimir();
};

#endif
