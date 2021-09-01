/* RESULTADO JUDGE EP1

Test 1 - Tabela: Construtor e destrutor
ACCEPT
Test 2 - Tabela: getPontos sem pontuar
ACCEPT
Test 3 - Tabela: getPontos nao participante
ACCEPT
Test 4 - Tabela: getPontos com pontuar sem acumular
ACCEPT
Test 5 - Tabela: getPontos com pontuar acumulando
ACCEPT
Test 6 - Tabela: getPosicao sem pontos
ACCEPT
Test 7 - Tabela: getPosicao com pontos
ACCEPT
Test 8 - Tabela: getPosicao com empate no inicio
ACCEPT
Test 9 - Tabela: getPosicao com empate no meio
ACCEPT
Test 10 - Tabela: getPosicao com empate no fim
ACCEPT
Test 11 - Tabela: imprimir
ACCEPT
*/

#include "Tabela.h"
#include "Modalidade.h"
#include "Equipe.h"
#include "Competicao.h"
#include <iostream>
#include <string>
#include <math.h>
 
using namespace std;
 
Tabela::Tabela(Equipe** participantes, int quantidade)
{
    this->participantes = participantes;
    this->quantidade = quantidade;
    pontuacao[quantidade] = {};
    isParticipante = false;
}
 
void Tabela::pontuar(Equipe* participante, int pontos) { //
    for(int i = 0; i < quantidade; i++) {
        if(participante == participantes[i]) {
          pontuacao[i] = getPontos(participante) + pontos;
        }
    }
}
 
int Tabela::getPontos(Equipe* participante) {
    for(int i = 0; i < quantidade; i++) {
        if(participante == participantes[i]){
          return pontuacao[i];
        }
    }
    return -1;
}
 
int Tabela::getPosicao(Equipe* participante){ // Ok
  int max = 0;
  for(int i = 0; i < quantidade; i++) {
    if(getPontos(participantes[i]) > getPontos(participante)){
      max++;
      if (participantes[i] == participante)
        isParticipante = true;
    }
  }
  if (!isParticipante)
    return max + 1 ;
  return -1; //outra condicao
}
 
void Tabela::imprimir() {
  //implementar
  for (int i = 0; i < quantidade; i++){
    cout << participantes[i]->getNome() << " - " << getPontos(participantes[i]);
    cout << " pontos (" << getPosicao(participantes[i]) << "o)" << endl;
  }
}
 
Tabela::~Tabela()
{
    //dtor
}
 