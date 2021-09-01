#ifndef ATIVIDADE_H
#define ATIVIDADE_H

//#define NUMERO_MAXIMO_VALORES 10

#include "Pessoa.h"
#include <cmath>

class Atividade {
private:
    string nome;
    int horasNecessarias;
    int quantidade = 0;
    int maxValores;
    Pessoa** pessoas;

public:
    Atividade(string nome, int horasNecessarias, int maxValores);
    ~Atividade();
    string getNome();
    int getHorasNecessarias();
    int getQuantidade();
    int getDuracao();

    bool adicionar(Pessoa* p);
    void imprimir();
};

#endif // ATIVIDADE_H
