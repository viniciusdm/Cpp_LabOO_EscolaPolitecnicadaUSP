#include "Musica.h"
#include <iostream>

#include<string>

using namespace std;

void Musica::setNome(std::string nome){
    this -> nome = nome;
}

std::string Musica::getNome(){
    return nome;
}

void Musica::setDuracao(int duracao){
    this -> duracao = duracao;
}

int Musica::getDuracao(){
    return duracao;
}

void Musica::avaliar(int nota) {
    somaDasAvaliacoes += nota;
    quantidadeDeAvalicoes++;
}

double Musica::getMedia() {
    return ((double)somaDasAvaliacoes)/quantidadeDeAvalicoes;
}

void Musica::imprimir() {
    cout << nome << " - " << duracao << " segundos - " << this -> getMedia()  << " avaliacao" << endl;
}


