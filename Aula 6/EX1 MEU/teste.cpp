#include "Artista.h"
#include "Banda.h"

#include <string>
#include <iostream>

using namespace std;

void teste() {
    
    Artista* a1 = new Banda(20, 5, "Snark Puppy");
    
    Musica* m1 = new Musica(645, "Lingus");
    Musica* m2 = new Musica(343, "Tio Macaco");
    
    a1 -> adicionarMusica(m1);
    a1 -> adicionarMusica(m2);

    Banda* b1 = static_cast<Banda*>(a1);
    cout << b1->imprimir() << endl;

    delete a1;
    delete b1;

}

int main() {
    teste();
    return 0;
}