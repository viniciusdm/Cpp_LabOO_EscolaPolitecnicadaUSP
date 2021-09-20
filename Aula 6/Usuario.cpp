#include "Usuario.h"
#include <iostream>

using namespace std;

// Implemente aqui os metodos necessarios

// Metodos ja implementados
void Usuario::imprimir() {
  cout << "Usuario(a) " << this->getLogin()  << " com " << this->getQuantidadeDeFavoritos() << " favoritos:" << endl;
  for (int i = 0; i < this->getQuantidadeDeFavoritos(); i++) {
    cout << "Favorito " << i + 1 << ": ";
    this->getFavoritos()[i]->imprimir();
    cout << "\n";
  }
}
