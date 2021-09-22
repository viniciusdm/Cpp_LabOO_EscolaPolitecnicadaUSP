#include "Artista.h"
#include "Banda.h"
#include "Usuario.h"
#include "Musica.h"

#include <string>
#include <iostream>

using namespace std;

void teste() {
    
    Artista* Elis = new Artista(2, "Elis Regina");
    
    Musica* m1 = new Musica(162, "Tiro ao alvaro");
    Musica* m2 = new Musica(162, "Triste");
    Musica* m3 = new Musica(645, "Lingus");
    Musica* m4 = new Musica(343, "Tio Macaco");
    
    Elis -> adicionarMusica(m1);
    Elis -> adicionarMusica(m2);

    Banda* Snarky = new Banda(20, 5, "Snarky Puppy");

    Snarky -> adicionarMusica(m3);
    Snarky -> adicionarMusica(m4);

    Usuario* Mae = new Usuario("Mae", 2);

    Mae -> adicionar(Elis);
    Mae -> adicionar(Snarky);
    Mae -> imprimir();

    delete Mae;
    delete Elis;
    delete Snarky;
}
/*
int main() {
    teste();
    return 0;
}
*/