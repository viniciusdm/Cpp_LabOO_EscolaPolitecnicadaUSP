#ifndef USUARIO_H
#define USUARIO_H

#include "Artista.h"

class Usuario{
private:
    Artista** favoritos;
    string login;
    int maximoFavoritos;
    int quantidade;


public:
    Usuario(string login, int maximoFavoritos);
    ~Usuario();
    string getLogin();
    bool adicionar(Artista* favorito);
    Artista** getFavoritos();
    int getQuantidadeDeFavoritos();
    void imprimir();
};

#endif
