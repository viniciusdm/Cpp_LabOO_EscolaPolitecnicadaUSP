#ifndef PESSOA_H
#define PESSOA_H
#include <string>
// Inclua aqui as diretivas de compilacao necessarias

using namespace std;

class Pessoa {
private:
    // Inclua aqui os atributos necessarios
public:
    Pessoa(int quantidadeMaxima, string nome);
    virtual ~Pessoa();
};

#endif // PESSOA_H
