#ifndef BANDA_H
#define BANDA_H

#include "Artista.h"

#include <string>
using namespace std;

class Banda : public Artista {
private:
    int quantidadeDeMembros; 
    int numeroDeMembros;

public:
    Banda(int numeroDeMembros, int quantidadeMaxima, string nome);
    ~Banda();
    int getNumeroDeMembros();
    void imprimir();
};

#endif // BANDA_H
