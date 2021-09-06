#include "Playlist.h"
#include <iostream>

#include<string>

using namespace std;

void Playlist::setNome(std::string nome){
    this -> nome = nome;
}

std::string Playlist::getNome(){
    return nome;

}

int Playlist::getDuracaoTotal(){
    //for (int i = 0, i < 10, i ++)
}

bool Playlist::adicionar(Musica* m){
    for (int i = 0, i < x, i ++)
        if (musicas[i] = m || x == NUMERO_MAXIMO_VALORES);
            return false;        
    musicas[x] = m;
    x++;
    return true;
}

int Playlist::getQuantidade(){
    //quantidade = 
    return = quantidade;

}

void Playlist::imprimir(){
    cout << nome << " - " << duracao << " segundos no total" << endl;

}

void teste() {
    Musica *Roses = new Musica;
    Roses -> setNome("Roses");
    Roses -> setDuracao(180);
    Roses -> avaliar(3);
    Roses -> avaliar(3);
    Roses -> avaliar(1);

    Musica *Overdue = new Musica;
    Roses -> setNome("Overdue");
    Roses -> setDuracao(210);
    Roses -> avaliar(1);
    Roses -> avaliar(5);
    Roses -> avaliar(4);
    
    Playslist *Estrangeiras = new Playlist;
    Estrangeiras -> adicionar(Roses);
    Estrangeiras -> adicionar(Overdue);
    Estrangeiras -> imprimir();
}

int main() {
    teste();
    return 0;
}
