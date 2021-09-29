#include "Musica.h"
#include "Artista.h"
#include "Playlist.h"

#include <string>
#include <iostream>

using namespace std;

void teste() {
    Playlist* p = new Playlist("Favoritos", 2);
    Artista* Tom = new Artista(2, "Tom Jobim");
    Musica* m1 = new Musica(214, "Aguas de marco");
    Musica* m2 = new Musica(180, "Samba de uma nota so");

    Tom -> adicionarMusica(m1);
    p -> adicionar(m1);
    Tom -> adicionarMusica(m2);
    p -> adicionar(Tom);
    p -> imprimir();
}


int main() {
    teste();
    return 0;
}
