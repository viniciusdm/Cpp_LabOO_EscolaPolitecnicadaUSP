#ifndef MUSICA_H
#define MUSICA_H

#include <string>

class Musica {
public:
    std::string nome;
    int duracao;
    int quantidadeDeAvalicoes = 0;
    int somaDasAvaliacoes = 0;

    void avaliar(int nota);
    double getMedia();

    void imprimir();
};

#endif