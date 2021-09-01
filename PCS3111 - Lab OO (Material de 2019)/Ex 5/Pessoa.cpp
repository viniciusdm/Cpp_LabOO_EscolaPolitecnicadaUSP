#include "Pessoa.h"

Pessoa::Pessoa(string nome, int horasDiarias){
    this->nome = nome;
    this->horasDiarias = horasDiarias;
}

Pessoa::~Pessoa(){
    cout << "Pessoa " << nome << " Destruida" << endl;
}

string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getHorasDiarias() {
    return this->horasDiarias;
}

void Pessoa::imprimir() {
    cout << this->nome << ": " << this->horasDiarias << " hora(s) por dia" << endl;
}

