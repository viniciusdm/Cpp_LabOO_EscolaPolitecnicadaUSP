#ifndef BANDA_H
#define  BANDA_H

#include <string>

#include "Artista.h"

using namespace std;

class Banda: public Artista {
private:
    int quantidadeDeArtistas = 0;
    Artista** artistas;
public:
    Banda(int quantidadeMaxima, string nome);
    virtual ~Banda();

    bool adicionar(Artista *a);

    Artista** getParticipantes();
    double getNota();
    void imprimir();
};

#endif /* BANDA_H */
