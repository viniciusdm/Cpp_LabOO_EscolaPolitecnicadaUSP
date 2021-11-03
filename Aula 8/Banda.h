#ifndef BANDA_H
#define  BANDA_H

#include "Artista.h"
#include "Pessoa.h"

#include <string>
using namespace std;

class Banda: public Artista {
private:
    int quantidadeDePessoas = 0;
    Pessoa** pessoas;
    static double valorDoBonus;
    
public:
    Banda(int quantidadeMaxima, string nome);
    virtual ~Banda();

    bool adicionar(Pessoa *a);

    Pessoa** getParticipantes();
    double getNota();
    void imprimir();

    static double getBonus();
    static void setBonus(double valor);
};

#endif /* BANDA_H */
