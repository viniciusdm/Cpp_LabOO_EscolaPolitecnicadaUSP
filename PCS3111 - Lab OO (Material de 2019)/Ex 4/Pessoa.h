/*
 * Coloque a definicao da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 *
 *  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */
#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H


using namespace std;

class Pessoa {
private:
    string nome;
    bool disponivel;
    int horasDiarias;
public:

    void setNome(string nome);
    void setDisponivel(bool disponivel);
    void setHorasDiarias (int horasDiarias);

    bool isDisponivel();
    int getHorasDiarias();

    void imprimir();
};
#endif // PESSOA_H
