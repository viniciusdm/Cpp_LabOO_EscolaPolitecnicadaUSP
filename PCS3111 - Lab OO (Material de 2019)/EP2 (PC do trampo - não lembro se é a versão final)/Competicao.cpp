/* RESULTADO JUDGE EP1

Test 1 - Competicao: construtor destrutor getNome getEquipe e getQuantidade
ACCEPT
Test 2 - Competicao: adicionar uma modalidade
ACCEPT
Test 3 - Competicao: adicionar varias modalidades ate limite
ACCEPT
Test 4 - Competicao: adicionar modalidades alem limite
ACCEPT
Test 5 - Competicao: getTabela com modalidades sem resultado
ACCEPT
Test 6 - Competicao: getTabela com algumas modalidades sem resultado
ACCEPT
Test 7 - Competicao: getTabela com todas modalidades com resultado
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
 
Competicao::Competicao(string nome, Equipe** equipes, int quantidade, int maximoDeModalidades)
{
  this->nome = nome;
  this->equipes = equipes;
  this->quantidade = quantidade;
  this->maximoDeModalidades = maximoDeModalidades;
  auxiliar = new Modalidade*[maximoDeModalidades](); // vetor de modalidades
  quantidadeAtual = 0; // contador de modalidades
}
 
Competicao::~Competicao()
{
    delete[] auxiliar;
}
 
string Competicao::getNome() // OK
{
  return nome; // nome da Competicao
}
 
Equipe** Competicao::getEquipes() // OK
{
  return equipes; // Vetor de Equipes
}
 
int Competicao::getQuantidadeDeEquipes() // OK
{
  return quantidade; // Quantidade de Equipes
}
 
bool Competicao::adicionar(Modalidade* m) // OK - Testado e Aprovado!
{
    if (quantidadeAtual >= maximoDeModalidades){
        return false;
    }
  else{
    auxiliar[quantidadeAtual] = m;
    quantidadeAtual ++;
    return true;
  }
}
 
Modalidade** Competicao::getModalidades() // OK - Testado e Aprovado!
{
    return auxiliar;
}
 
int Competicao::getQuantidadeDeModalidades() // OK - Testado e Aprovado!
{
    return quantidadeAtual;
}
 
 
Tabela* Competicao::getTabela() // PARCIALMENTE - Testado e Aprovado - Falta testar quando uma modalidade tem uma equipe a menos.
{
  Tabela* tabela = new Tabela(equipes, getQuantidadeDeEquipes());
  for (int i = 0; i < getQuantidadeDeModalidades(); i++){
    for (int j = 0; j < getQuantidadeDeEquipes(); j++){
        switch (auxiliar[i]->getPosicao(equipes[j]))
        {
            case 1:
                tabela->pontuar(equipes[j], 13);
                break;
            case 2:
                tabela->pontuar(equipes[j], 10);
                break;
            case 3:
                tabela->pontuar(equipes[j], 8);
                break;
            case 4:
                tabela->pontuar(equipes[j], 7);
                break;
            case 5:
                tabela->pontuar(equipes[j], 5);
                break;
            case 6:
                tabela->pontuar(equipes[j], 4);
                break;
            case 7:
                tabela->pontuar(equipes[j], 3);
                break;
            case 8:
                tabela->pontuar(equipes[j], 2);
                break;
            case 9:
                tabela->pontuar(equipes[j], 1);
                break;
            default:
                tabela->pontuar(equipes[j], 0);
        }
    }
  }
  return tabela;
}
 
void Competicao::imprimir()
{
    cout << nome << endl;
    getTabela()->imprimir();
}
 