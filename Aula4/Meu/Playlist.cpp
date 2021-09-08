#include "Playlist.h"
#include <iostream>

#include<string>

using namespace std;

void Playlist::setNome(string nome){
    this -> nome = nome;
}

string Playlist::getNome(){
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

