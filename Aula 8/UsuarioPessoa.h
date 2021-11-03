#ifndef USUARIOPESSOA_H
#define USUARIOPESSOA_H

#include "Usuario.h"
#include "Pessoa.h"

#include <string>
using namespace std;

class UsuarioPessoa : public Usuario, public Pessoa{
private:
        // Inclua aqui os atributos necessarios
public:
    UsuarioPessoa(string nome, string login, int maximoFavoritos, int quantidadeMaxima);
    virtual ~UsuarioPessoa();
};

#endif // USUARIOPESSOA_H
