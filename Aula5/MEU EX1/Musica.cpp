#include "Musica.h"

#include <iostream>
#include<string>
using namespace std;

Musica::Musica(int duracao, string nome){
    this -> duracao = duracao;
    this -> nome = nome;
}

string Musica::getNome() {
    return nome;
}

int Musica::getDuracao() {
    return duracao;
}

void Musica::imprimir() {
    cout << "Musica " << getNome() << " com duracao " << getDuracao() << endl;
}
