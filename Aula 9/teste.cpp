#include "Playlist.h"

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

void teste() {
    try {
        Playlist *p1 = new Playlist("Playlist 1", 1);
    }
    catch (invalid_argument *e){
        cout << "Erro: " << e -> what() << endl;
        delete e;
    }

    try {
        Playlist *p2 = new Playlist("", 2);
    }
    catch (invalid_argument *e){
        cout << "Erro: " << e -> what() << endl;
        delete e;
    }

    Playlist *p3 = new Playlist("Favoritos", 2);
    Musica *m1 = new Musica(343, "Tio Macaco");
    Musica *m2 = new Musica(645, "Lingus");
    Musica *m3 = new Musica(372, "Kite");

    p3 -> adicionar(m1);

    try {
        p3 -> adicionar(m1);
    }

    catch (invalid_argument *e) {
        cout << "Erro: " << e -> what() << endl;
        delete e;
    }

    try {
        p3 -> adicionar(m2);
        p3 -> adicionar(m3);
    }

    catch (invalid_argument *e) {
        cout << "Erro: " << e -> what() << endl;
        delete e;
    }
    catch (overflow_error *e) {
        cout << "Erro: " << e -> what() << endl;
        delete e;
    }
}

int main() {
    teste();
    return 0;
}
