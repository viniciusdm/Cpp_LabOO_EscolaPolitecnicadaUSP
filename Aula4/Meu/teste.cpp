#include "Musica.h"
#include "Playlist.h"
#include <string>
#include <iostream>

using namespace std;

void teste() {
    Musica *Roses = new Musica;
    Roses -> setNome("Camila");
    Roses -> setDuracao(180);
    Roses -> avaliar(3);
    Roses -> avaliar(3);
    Roses -> avaliar(1);

    Musica *Overdue = new Musica;
    Overdue -> setNome("Vinicius");
    Overdue -> setDuracao(210);
    Overdue -> avaliar(1);
    Overdue -> avaliar(5);
    Overdue -> avaliar(4);

    Playlist *Estrangeiras = new Playlist;
    Estrangeiras -> setNome("Estrangeiras");
    Estrangeiras -> adicionar(Roses);
    Estrangeiras -> adicionar(Overdue);
    Estrangeiras -> imprimir();
}

int main() {
    teste();
    return 0;
}
