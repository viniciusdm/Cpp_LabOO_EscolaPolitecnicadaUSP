#include "Banda.h"

#include <iostream>
using namespace std;

Banda::Banda(int numeroDeMembros, int quantidadeMaxima, string nome) : Artista(quantidadeMaxima, nome), 
                                                                        numeroDeMembros(quantidadeDeMembros) {
}

Banda::~Banda() {
  cout << "Banda com " << numeroDeMembros << " membros destruída" << endl;
}

int Banda::getNumeroDeMembros(){
    return numeroDeMembros;
}

void Banda::imprimir(){
    cout << nome << " - " << numeroDeMembros << " membros" << endl;
}

