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
    if (quantidade == 0){
        return -1;
    }
    for (int i = 0; i < quantidade; i ++){
        duracaoTotal = duracaoTotal + musicas[i]->getDuracao();
    }
    return duracaoTotal;
}

bool Playlist::adicionar(Musica* m){
    for (int i = 0; i < quantidade; i ++){
        if (musicas[i] == m || quantidade == NUMERO_MAXIMO_VALORES){
            return false;
        }
    }
    musicas[quantidade] = m;
    quantidade++;
    return true;
}

int Playlist::getQuantidade(){
    return quantidade;
}

void Playlist::imprimir(){
    cout << nome << " - " << getDuracaoTotal() << " segundos no total" << endl;
    for (int i = 0; i < quantidade; i ++){
        musicas[i] -> imprimir();
    }
}

void teste() {
    Musica *Roses = new Musica;
    Roses -> setNome("Roses");
    Roses -> setDuracao(180);
    Roses -> avaliar(3);
    Roses -> avaliar(3);
    Roses -> avaliar(1);

    Musica *Overdue = new Musica;
    Overdue -> setNome("Overdue");
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

