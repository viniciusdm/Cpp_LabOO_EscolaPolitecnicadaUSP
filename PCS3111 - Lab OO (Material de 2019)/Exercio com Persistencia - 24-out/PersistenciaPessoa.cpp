/*  Implemente os metodos!
 */
#include"PersistenciaPessoa.h"
#include"Pessoa.h"
#include <fstream>
#include <stdexcept>

PersistenciaPessoa ::PersistenciaPessoa(string arquivo){
    this->arquivo = arquivo;
}

PersistenciaPessoa::~PersistenciaPessoa(){
    //Destrutor;
}

void PersistenciaPessoa::inserir(Pessoa *p){
    ofstream saida;
    saida.open(arquivo, ios_base::app);
    saida << p->getNome();
    saida << endl;
    saida << p->getValorPorHora();
    saida << endl;
    saida << p->getHorasDiarias();
    saida << endl;
    saida.close();
}

Pessoa** PersistenciaPessoa::obter(int& quantidade){
    Pessoa** pessoas = new Pessoa *[10];
    ifstream entrada;
    quantidade = 0;
    string nome;
    double valor;
    int hora;
    entrada.open(arquivo);

    if(entrada.fail()){
        throw new invalid_argument ("arquivo nao encontrado");
    }

    //if (entrada.open(arquivo)==NULL)
        //return NULL;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            entrada >> nome;
            entrada >> valor;
            entrada >> hora;
        }
        quantidade++;
        pessoas[i] = new Pessoa(nome, valor, hora);
    }
    entrada.close();
    if (quantidade == 0)
        return NULL;


    if (!entrada.eof())
        throw new logic_error ("arquivo nao encontrado");
    else
        return pessoas;
        //cout <<

}
