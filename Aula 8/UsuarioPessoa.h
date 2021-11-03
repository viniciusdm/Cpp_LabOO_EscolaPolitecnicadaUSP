#ifndef USUARIOPESSOA_H
#define USUARIOPESSOA_H
// Inclua aqui as diretivas de compilacao necessarias


class UsuarioPessoa {
private:
        // Inclua aqui os atributos necessarios
public:
    UsuarioPessoa(string nome, string login, int maximoFavoritos, int quantidadeMaxima);
    virtual ~UsuarioPessoa();
};

#endif // USUARIOPESSOA_H
