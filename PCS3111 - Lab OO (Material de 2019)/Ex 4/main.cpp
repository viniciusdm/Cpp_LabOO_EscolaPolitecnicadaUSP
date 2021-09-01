#include <iostream>
#include "Pessoa.h"
#include "Atividade.h"
#define NUMERO_MAXIMO_VALORES 10

using namespace std;


int main() {
    cout << "AULA 4" << endl;

    Pessoa *p[NUMERO_MAXIMO_VALORES];
    p[0] = new Pessoa;
    p[0]->setNome("Fernando");
    p[0]->setDisponivel(true);
    p[0]->setHorasDiarias(2);
    p[1] = new Pessoa;
    p[1]->setNome("Carlos");
    p[1]->setDisponivel(false);
    p[1]->setHorasDiarias(1);
    p[2] = new Pessoa;
    p[2]->setNome("Ana");
    p[2]->setDisponivel(true);
    p[2]->setHorasDiarias(3);
    p[3] = new Pessoa;
    p[3]->setNome("Maria");
    p[3]->setDisponivel(true);
    p[3]->setHorasDiarias(1);

    Atividade *a[NUMERO_MAXIMO_VALORES];
    a[0] = new Atividade;
    a[0]->setNome("Jogar");
    a[0]->setHorasNecessarias(11);

    a[0]->adicionar(p[2]);
    a[0]->adicionar(p[0]);
    a[0]->imprimir();

    return 0;
}
