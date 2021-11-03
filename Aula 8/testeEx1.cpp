#include "Banda.h"

#include <string>
#include <iostream>
using namespace std;

void teste() {
    Banda *b1 = new Banda(3, "Banda do Mar");

    Pessoa *p1 = new Pessoa(3, "Marcelo Camelo");
    Pessoa *p2 = new Pessoa(3, "Maria Luiza");

    b1 -> adicionar(p1);
    b1 -> adicionar(p2);

    b1 -> imprimir(); 
}

/*
int main() {
    teste();
    return 0;
}
*/