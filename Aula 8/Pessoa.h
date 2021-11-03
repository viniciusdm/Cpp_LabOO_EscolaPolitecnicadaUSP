#ifndef PESSOA_H
#define PESSOA_H

#include "Artista.h"

#include <string>
using namespace std;

class Pessoa : public Artista{
private:
public:
    Pessoa(int quantidadeMaxima, string nome);
    virtual ~Pessoa();
    void imprimir();
};

#endif // PESSOA_H
