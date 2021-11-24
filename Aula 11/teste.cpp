#include <string>
#include <vector>

#include "Artista.h"
#include "Musica.h"
#include "Playlist.h"

using namespace std;

void teste() {
    Playlist *p1 = new Playlist("Favoritos");
    Artista *a1 = new Artista("Tom Jobim");

    Musica *m1 = new Musica(214, "Aguas de marco");
    m1 -> avaliar(5);
    m1 -> avaliar(4);
    m1 -> avaliar(5);

    a1 -> adicionarMusica(m1);
    p1 -> adicionar(m1);
   
    Musica *m2 = new Musica(168, "Mais ninguem");
    m2 -> avaliar(3);
    m2 -> avaliar(3);

    p1 -> adicionar(m2);

    Musica *m3 = new Musica(180, "Samba de uma nota so");
    m3 -> avaliar(5);
    m3 -> avaliar(3);

    a1 -> adicionarMusica(m3);

    p1 -> imprimir();
    a1 -> imprimir();
}
/*
int main() {
    teste();
    return 0;
}
*/
