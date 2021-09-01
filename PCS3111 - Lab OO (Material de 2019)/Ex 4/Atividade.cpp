/*
 * Faca os includes e implemente os seus metodos aqui!
 */

#include "Atividade.h"
#include "Pessoa.h"
#include <iostream>
#include <math.h>

using namespace std;

void Atividade::setNome (string nome) {
    this->nome = nome;
}

void Atividade::setHorasNecessarias(int horasNecessarias){
    this->horasNecessarias = horasNecessarias;
}

bool Atividade::adicionar(Pessoa* p){
    if (!p->isDisponivel() || x == NUMERO_MAXIMO_VALORES)
        return false;
    pessoas[x] = p;
    x++;
    p->setDisponivel(false);
    return true;
}


int Atividade::getHorasNecessarias(){
    return horasNecessarias;
}

int Atividade::getQuantidade(){
    //Numero de pessoas adicionadas ao vetor Pessoas
    return x;
}

int Atividade::getDuracao(){
    double soma = 0;
    if (x == 0)
        return -1;
    for (int i = 0; i < x; i++){
        soma = soma + pessoas[i]->getHorasDiarias();
    }
    int resultado = ceil(getHorasNecessarias()/soma);
    return resultado;
}

 void Atividade::imprimir(){
     cout << nome  << " - " << getDuracao() << "dias estimados" << endl;
     for (int i = 0; i < x; i++){
        pessoas[i]->imprimir();
     }

  }
