/* RESULTADO JUDGE EP1

Test 19 - Equipe: Construtor destrutor e getNome
ACCEPT
Test 20 - Equipe: imprimir
ACCEPT
*/

#include "Equipe.h"
#include <iostream>
#include <string>
 
// feito
 
using namespace std;
 
Equipe::Equipe(string nome)
{
    this->nome = nome;
}
 
string Equipe::getNome(){
    return nome;
}
 
void Equipe::imprimir() {
    cout<<"Equipe "<<nome<<endl;
}
 
Equipe::~Equipe()
{
    //dtor
}