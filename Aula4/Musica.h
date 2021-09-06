#ifndef MUSICA_H
#define MUSICA_H

#include <string>

class Musica {
private:
    std::string nome;
    int duracao;
    int quantidadeDeAvalicoes = 0;
    int somaDasAvaliacoes = 0;

public:
    std::string getNome();
    void setNome(std::string nome);
    int getDuracao();
    void setDuracao(int duracao);
    void avaliar(int nota);
    double getMedia();
    void imprimir();
};

#endif