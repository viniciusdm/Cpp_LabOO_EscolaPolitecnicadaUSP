#include "UsuarioPessoa.h"

#include<iostream>

UsuarioPessoa::UsuarioPessoa(string nome, string login, int maximoFavoritos, int quantidadeMaxima) : Pessoa(quantidadeMaxima, nome), Usuario(login, maximoFavoritos){
}

UsuarioPessoa::~UsuarioPessoa(){
}