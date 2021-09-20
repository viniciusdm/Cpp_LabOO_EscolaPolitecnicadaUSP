#include "Usuario.h"

#include <iostream>
#include <string>
using namespace std;

Usuario::Usuario(string login, int maximoFavoritos) {
  this -> login = login;
  this -> maximoFavoritos = maximoFavoritos;
  favoritos = new Artista*[maximoFavoritos];
  quantidade = 0;
}

Usuario::~Usuario(){
  delete[] favoritos;
}

string Usuario::getLogin() {
  return login;
}

Artista** Usuario::getFavoritos() {
  return favoritos;
}

int Usuario::getQuantidadeDeFavoritos(){
  return quantidade;
}

bool Usuario::adicionar(Artista* favorito) {
  for (int i = 0; i < maximoFavoritos; i++) {
    if (favoritos[i] == favorito) {
      return false;
    }
  }
  if (quantidade >= maximoFavoritos) {
    return false;
  }
  favoritos[quantidade++] = favorito;
  return true;
}

void Usuario::imprimir() {
  cout << "Usuario(a) " << this->getLogin()  << " com " << this->getQuantidadeDeFavoritos() << " favoritos:" << endl;
  for (int i = 0; i < this->getQuantidadeDeFavoritos(); i++) {
    cout << "Favorito " << i + 1 << ": ";
    this->getFavoritos()[i]->imprimir();
    cout << "\n";
  }
}
