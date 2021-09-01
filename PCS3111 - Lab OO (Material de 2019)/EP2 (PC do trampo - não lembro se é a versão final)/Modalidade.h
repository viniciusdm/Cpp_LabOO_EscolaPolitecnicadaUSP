#ifndef MODALIDADE_H
#define MODALIDADE_H
#include "Equipe.h"
#include <iostream>
#include <string>
 
using namespace std;
 
 
class Modalidade
{
    public:
      Modalidade(string nome, Equipe** participantes, int quantidade);
      virtual ~Modalidade();
 
      string getNome();
      Equipe** getEquipes();
      int getQuantidadeDeEquipes();
      void setResultado(Equipe** ordem);
      int getPosicao(Equipe *participante);
 
      void imprimir();
 
    protected:
 
    private:
 
      Equipe** ordem;
 
      string nome;
      int quantidade;
 
      Equipe** participantes;
      Equipe* participante;
      Equipe** auxiliar; // Declaracao de vetor auxiliar (Vetor de Equipes)
 
      int cont;
 
};
 
#endif // MODALIDADE_H
 