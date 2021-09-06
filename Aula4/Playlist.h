#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Musica.h"

#define NUMERO_MAXIMO_VALORES 10

class Playlist {
private:
    std::string nome;
public:
    int getDuracaoTotal();
    bool adicionar(Musica* m);
    void setNome(std::string nome);
    std::string getNome();
    int getQuantidade();
    void imprimir();
};

#endif