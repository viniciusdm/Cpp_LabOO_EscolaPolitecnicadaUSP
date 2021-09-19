#ifndef BANDA_H
#define BANDA_H
// Adicione aqui as diretivas de compilacao necessarias

class Banda {
private:
    // Adicione aqui os atributos necessarios

public:
    Banda(int numeroDeMembros, int quantidadeMaxima, string nome);
    ~Banda();

    int getNumeroDeMembros();

    void imprimir();
};

#endif // BANDA_H
