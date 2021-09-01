#include "Atividade.h"

Atividade::Atividade(string nome, int horasNecessarias, int maxValores){
    this->nome = nome;
    this->horasNecessarias = horasNecessarias;
    this->maxValores = maxValores ;
    this->pessoas = new Pessoa*[maxValores];
}

Atividade::~Atividade(){
    cout << "Atividade " << nome << " de tamanho " << quantidade << " pessoa(s) destruida" << endl;

    for (int i = 0; i < quantidade; i++){
        delete pessoas[i];
    }
    delete[] pessoas;
}

string Atividade::getNome() {
    return this->nome;
}

int Atividade::getHorasNecessarias() {
    return this->horasNecessarias;
}

int Atividade::getQuantidade() {
    return this->quantidade;
}

int Atividade::getDuracao() {
    double totalHoras = 0;

    if (quantidade == 0)
        return -1;

    for (int i = 0; i < quantidade; i++)
        totalHoras += pessoas[i]->getHorasDiarias();
    return ceil(horasNecessarias/totalHoras);
}

bool Atividade::adicionar(Pessoa* p) {
    if (quantidade >= maxValores)
        return false;

    pessoas[quantidade] = p;
    quantidade++;
    return true;
}

void Atividade::imprimir() {
    cout << this->nome << " - " << this->getDuracao() << " dia(s) estimado(s)" << endl;
    for (int i = 0; i < quantidade; i++)
        pessoas[i]->imprimir();
}
