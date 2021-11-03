#include "Banda.h"

#include <iostream>

double Banda::valorDoBonus = 0.1;

Banda::Banda(int quantidadeMaxima, string nome) : Artista(quantidadeMaxima, nome){
    pessoas = new Pessoa*[quantidadeMaxima];
}

Banda::~Banda(){}

bool Banda::adicionar(Pessoa *a) {
    if (quantidadeDePessoas >= getQuantidadeMaxima())
        return false;

    for (int i = 0; i < quantidadeDePessoas; i++)
        if (pessoas[i] == a)
            return false;

    pessoas[quantidadeDePessoas++] = a;
    return true;
}

double Banda::getNota() {
    double soma = 0;
    for (int i = 0; i < quantidadeDePessoas; i++)
        soma += pessoas[i]->getNota();

    return min(soma/quantidadeDePessoas + getBonus(), 5.);
}

Pessoa** Banda::getParticipantes(){
    return pessoas;
}

void Banda::imprimir() {
  cout << "Banda de " << quantidadeDePessoas << " membros" << endl;
}

void Banda::setBonus(double valor){
    Banda::valorDoBonus = valor;
}

double Banda::getBonus(){
    return Banda::valorDoBonus;
}