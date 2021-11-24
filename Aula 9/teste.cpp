#include "Playlist.h"

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

void teste() {

    Playlist *p1 = new Playlist("Favoritos", 3);
    Musica *m1 = new Musica(343, "Tio Macaco");
    m1 -> avaliar(3);
    m1 -> avaliar(2);
    Musica *m2 = new Musica(645, "Lingus");
    m2 -> avaliar(4);
    m2 -> avaliar(4);
    m2 -> avaliar(5);
    Musica *m3 = new Musica(372, "Kite");
    p1 -> adicionar(m1);
    p1 -> adicionar(m2);
    p1 -> adicionar(m3);

    cout << m1->getNome() << " - " << m1-> getMedia() << endl;
    cout << m2->getNome() << " - " << m2-> getMedia() << endl;
}

int main() {
    teste();
    return 0;
}
