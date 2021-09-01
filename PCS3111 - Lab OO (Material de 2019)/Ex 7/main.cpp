#include <iostream>
#include "Atividade.h"
#include "AtividadeComSupervisor.h"
#include "Pessoa.h"
#include "Projeto.h"

using namespace std;

int main() {
    // Implemente os testes necessarios
    cout << "Aula 7" << endl;

    Pessoa* p1 = new Pessoa("Joao", 10);
    Pessoa* p2 = new Pessoa("Fernando", 5);
    Pessoa* p3 = new Pessoa("Antonio", 7);
    Projeto* proj1 = new Projeto("EP1", 2);
    Projeto* proj2 = new Projeto("EP2", 1);

    proj1->adicionar(p1);
    proj1->adicionar(p2);

    proj1->getPessoas();

    //cout << nome->Projeto

    return 0;
}

