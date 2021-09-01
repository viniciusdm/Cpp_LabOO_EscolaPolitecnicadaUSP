#ifndef PROJETO_H
#define PROJETO_H

#include <string>
#include "Atividade.h"

using namespace std;

class Projeto {
public:
    Projeto(string nome, int maximoValor);
    ~Projeto();

    int getDuracao();
    int getQuantidadeAtividades();
    Atividade** getAtividades();
    Pessoa** getPessoas(); // criado
    int getQuantidadePessoas(); // criado
    bool adicionar(Atividade* a);
    bool adicionar(Pessoa* p); // criado

private:
    string nome;
    int maximoValor;
    int quantidadeAtividades;
    Atividade** atividades;


    Pessoa** pessoas; // criado
    int quantidadePessoas; //criado
};

#endif // PROJETO_H
