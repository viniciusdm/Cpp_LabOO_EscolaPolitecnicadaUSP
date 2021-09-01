/* RESULTADO JUDGE EP1

Test 12 - Modalidade: construtor destrutor getNome getEquipe e getQuantidade
ACCEPT
Test 13 - Modalidade: getPosicao sem resultado
ACCEPT
Test 14 - Modalidade: getPosicao com chamada de setResultado e 2 equipes
WRONG - VERIFICAR, ANOTAR QUANDO CORRIGIR
Test 15 - Modalidade: getPosicao nao participante
WRONG - VERIFICAR, ANOTAR QUANDO CORRIGIR
Test 16 - Modalidade: getPosicao com chamada de setResultado e 4 equipes
WRONG - VERIFICAR, ANOTAR QUANDO CORRIGIR
Test 17 - Modalidade: getPosicao com chamada de setResultado 2 vezes
WRONG - VERIFICAR, ANOTAR QUANDO CORRIGIR
Test 18 - Modalidade: imprimir sem resultado
ACCEPT
*/

#include "Modalidade.h"
#include "Equipe.h"
#include "Tabela.h"
#include "Competicao.h"
#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
Modalidade::Modalidade(string nome, Equipe** participantes, int quantidade) //ok
{
    this->nome = nome;
    this->participantes = participantes;
    this->quantidade = quantidade;
    cont = 0;
}
 
string Modalidade::getNome(){ //ok
    return nome;
}
 
Equipe** Modalidade::getEquipes() { //ok
    return participantes;
}
 
int Modalidade::getQuantidadeDeEquipes() { //ok
    return quantidade;
}
 
int Modalidade::getPosicao(Equipe* participante){ //parece ok
  if (cont == 0){
      return -1;
  }
  else{
    for(int j = 1; j < quantidade; j++) {
      if(auxiliar[j] == participante) {
        return j+1;
      }
    }
    return -1;
  }
}
 
void Modalidade::setResultado(Equipe** ordem) { // OK
  auxiliar = ordem;
  cont ++;
}
 
 
void Modalidade::imprimir() { // Ok
  cout << "Modalidade: " << nome << endl;
  if(cont == 0){
    cout << "Participantes: " << endl;
  }
  else{
    cout << "Resultado: " << endl;
  }
  for (int i = 0; i < quantidade; i++){
    cout << "\t";
    if(cont > 0){
      cout << i + 1 << "o ";
      cout << auxiliar[i]->getNome() << endl;
    }
    else
    cout << participantes[i]->getNome() << endl;
  }
}
 
Modalidade::~Modalidade() //não destruir as equipes no destrutor
{
    //dtor
}
 