#include <iostream>
#include "Atividade.h"
#include "Pessoa.h"

using namespace std;

int main() {
    cout << "Aula5" << endl;
    // Implementar testes

    Atividade* a1 = new Atividade ("Trabalhar",10 , 7);
    Atividade* a2 = new Atividade ("Jogar",5 , 4);
    Atividade* a3 = new Atividade ("Programar",3 , 2);
    Pessoa* p1 = new Pessoa ("Joao", 1);
    Pessoa* p2 = new Pessoa ("Carlos", 2);
    Pessoa* p3 = new Pessoa ("Ze", 2);
    a1->adicionar(p1);
    a1->adicionar(p2);
    a1->imprimir();
    a2->adicionar(p1);
    a2->adicionar(p2);
    a2->imprimir();
    //delete p1;
    delete a1;


    return 0;
}
