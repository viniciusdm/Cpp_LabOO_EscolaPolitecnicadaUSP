#include <iostream>
#include <fstream>
#include <stdexcept>

#include"PersistenciaPessoa.h"
#include"Pessoa.h"

using namespace std;
int main() {

    cout << "Aula 10" << endl;
    /*  Faca os testes necessarios!
     */
    Pessoa *p1 = new Pessoa ("Ja", 5, 10);
    Pessoa *p2 = new Pessoa ("ko", 2, 5);
    Pessoa *p3 = new Pessoa ("Le", 10, 2);
    Pessoa *p4 = new Pessoa ("Mi", 3, 8);

    PersistenciaPessoa *p = new PersistenciaPessoa("teste.txt");
    p->inserir(p1);
    p->inserir(p2);
    p->inserir(p3);

    int i;
    p->obter(i);


    return 0;
}
