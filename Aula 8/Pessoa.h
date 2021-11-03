#ifndef PESSOA_H
#define PESSOA_H

#include "Artista.h"
#include "Musica.h"

#include <string>
using namespace std;

class Pessoa : public Artista{
private:
    int quantidadeDeMusicas;
    Musica** musicas;
    
public:
    Pessoa(int quantidadeMaxima, string nome);
    virtual ~Pessoa();
    void imprimir();
};

#endif // PESSOA_H
