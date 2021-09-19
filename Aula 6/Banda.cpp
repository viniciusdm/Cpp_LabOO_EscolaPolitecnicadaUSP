#include "Banda.h"

using namespace std;

Banda::Banda(int numeroDeMembros, int quantidadeMaxima, string nome) : Artista(quantidadeMaxima), 
                                                                        Artista(nome),
                                                                        numeroDeMembros(quantidadeDeMembros) {
}

Banda::~Banda() {
  cout << "Banda com " << numeroDeMembros << " destruída" << endl;
}

int Banda::getNumeroDeMembros(){
    return numeroDeMembros;
}

void Banda::imprimir(){
    cout << "nome" << " - " << numeroDeMembros << " membros" << endl;
}
}
// Implemente aqui os metodos
