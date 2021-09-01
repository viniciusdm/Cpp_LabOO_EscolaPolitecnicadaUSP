#include "Projeto.h"

Projeto::Projeto(string nome, int maximoValor) : nome(nome), maximoValor(maximoValor) {
    this->quantidadeAtividades = 0;
    this->maximoValor = maximoValor; // eu que fiz
    this->nome = nome;
    atividades = new Atividade*[maximoValor];
    pessoas = new Pessoa*[maximoValor];
    quantidadePessoas = 0;
}

Projeto::~Projeto() {
    for (int i = 0; i < quantidadeAtividades; i++) {
        delete atividades[i];
    }
    delete[] atividades;
}

int Projeto::getDuracao() {
    int duracao = 0;
    for (int i = 0; i < quantidadeAtividades; i++) {
        duracao += atividades[i]->getDuracao();
    }
    return duracao;
}

int Projeto::getQuantidadeAtividades() {
    return this->quantidadeAtividades;
}

Atividade** Projeto::getAtividades() {
    return this->atividades;
}

bool Projeto::adicionar(Atividade* a) {
    // Limite de atividades atingido
    if (quantidadeAtividades >= maximoValor)
        return false;

    // Atividade ja previamente adicionada
    for (int i = 0; i < quantidadeAtividades; i++) {
        if (atividades[i] == a)
            return false;
    }

    // Atividade pode ser adicionada
    atividades[quantidadeAtividades] = a;
    quantidadeAtividades++;
    return true;
}

bool Projeto::adicionar(Pessoa* p){ // eu que criei
    if (quantidadePessoas >= maximoValor){
        return false;
    }
    else{
        for(int i = 0 ; i <= quantidadePessoas; i++)
        {
            if (i == quantidadePessoas){
                pessoas[i] = p;
                quantidadePessoas ++;
                return true;
            }
            if (pessoas[i] == p ){
                return false;
            }
        }
    }
}

Pessoa** Projeto::getPessoas(){
    return pessoas;
}

int Projeto::getQuantidadePessoas(){
    return quantidadePessoas;
}
