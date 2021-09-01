//Augusto Carlos Rieckmann Martins dos Santos - NUSP 10566442
//Fernando Marques de Araujo - NUSP 6801112
 
#include <iostream>
#include <string>
#include "Equipe.h"
#include "Modalidade.h"
#include "Tabela.h"
#include "Competicao.h"
 
using namespace std;
 
int main()
{
 
  // Entrada feita pelo USUARIO
  string nomeCamp;
  int numEquipes, numModalidades, ordem[10]; // verificar tamanho do vetor
  string equipe[10], mod[10]; // alterar tamanho
  // Cabecalho
  cout << "Informe o nome da competicao: ";
  cin >> nomeCamp;
  cout << endl;
  // Informacoes das Equipes
  cout << "Informe a quantidade de equipes: ";
  cin >> numEquipes;
  for (int i = 0; i < numEquipes; i++){
    cout << "Informe o nome da equipe " << i + 1 << ": ";
    cin >> equipe[i];
  }
  cout << endl;
  // Informacoes das Modalidades
  cout << "Informe a quantidade de modalidades: ";
  cin >> numModalidades;
  for (int i= 0; i < numModalidades; i++){
    cout << "Informe o nome da modalidade " << i + 1 << ": ";
    cin >> mod[i];
    for (int j = 0; j < numEquipes; j++){
      cout << "Informe a equipe " << j + 1 << "a colocada: ";
    cin >> ordem[j];
    }
    cout << endl;
  }
  // Criando vetores de objetos com os dados dos usuarios
  Equipe **participantes = new Equipe*[numEquipes]();
  for (int i = 0; i < numEquipes; i++){
    participantes[i] = new Equipe(equipe[i]);
  }
  Modalidade **modalidades = new Modalidade*[numModalidades](); // criacao de vetor do tipo modalidade
  for (int i = 0; i < numModalidades; i++){
    modalidades[i] = new Modalidade(mod[i],participantes,numEquipes);
  }
 
 
/*
 
  // Entradas de TESTES automaticas - NAO ENVIAR
  Equipe *e1 = new Equipe("Poli");
  Equipe *e2 = new Equipe("FEA");
  Equipe *e3 = new Equipe("ESALQ");
  Equipe *e4 = new Equipe("Preta");
  Equipe *e5 = new Equipe("Branca");
  Equipe **participantes = new Equipe*[3](); //criacao de vetor do tipo Equipe com n objetos
  participantes[0] = e1; // Poli
  participantes[1] = e2; // FEA
  participantes[2] = e3; // ESALQ
 
  Equipe **resultado1 = new Equipe*[3]();
  Equipe **resultado2 = new Equipe*[3]();
  Equipe **resultado3 = new Equipe*[3]();
  Equipe **resultado4 = new Equipe*[3]();
  resultado1[0] = e1; //Poli
  resultado1[1] = e2; //FEA
  resultado1[2] = e3; //ESALQ
  resultado2[0] = e3; //ESALQ
  resultado2[1] = e1; //Poli
  resultado2[2] = e2; //FEA
  resultado3[0] = e1; //Poli
  resultado3[1] = e3; //ESALQ
  resultado3[2] = e2; //FEA
  resultado4[0] = e2; //FEA
  resultado4[1] = e3; //ESALQ
  resultado4[2] = e1; //Poli
  //Matriz para simular as entradas acima
  int MAT[4][3]={1,2,3,3,1,2,1,3,2,2,3,1};
 
  Equipe **result = new Equipe*[3];
  for (int i = 0; i < 3; i++){
    result[i] = participantes[i + 1];
  }
 
 
  Modalidade *m1 = new Modalidade("Futebol", participantes, 3);
  Modalidade *m2 = new Modalidade("Natacao", participantes, 3);
  Modalidade *m3 = new Modalidade("Volei", participantes, 3);
  Modalidade *m4 = new Modalidade("Atletismo", participantes, 3);
  Modalidade *m5 = new Modalidade("Remo", participantes, 3);
  Modalidade **modalidades = new Modalidade*[5](); // criacao de vetor do tipo modalidade
  modalidades[0] = m1;
  modalidades[1] = m2;
  modalidades[2] = m3;
  modalidades[3] = m4;
  modalidades[4] = m5;
 
  //simulacao de preenchimento
  cout << "Informe o nome da competicao: InterUSP" << endl;
  cout << endl;
  cout << "Informe a quantidade de equipes: 3" << endl;
  for (int i = 0; i < 3; i++){
    cout << "Informe o nome da equipe " << i + 1 << ": ";
    cout << participantes[i]->getNome() << endl;
  }
  cout << endl;
  cout << "Informe a quantidade de modalidades: 4" << endl;
  for (int i= 0; i < 4; i++){
    cout << "Informe o nome da modalidade " << i + 1 << ": ";
    cout << modalidades[i]->getNome() << endl;
    for (int j = 0; j < 3; j++){
      cout << "Informe a equipe " << j + 1 << "a colocada: ";
      cout << MAT[i][j] << endl;
    }
    cout << endl;
  }
 
  //Modalidade *m1 = new Modalidade("Remo", &e1, 1);
  // Modalidade *m2 = new Modalidade("Futebol", participantes , 4);
 
  cout << endl  << "TESTE MODALIDADE - OK " << endl << endl;
  //modalidades[0]->setResultado(resultado1);
  //modalidades[1]->setResultado(resultado2);
  //modalidades[2]->setResultado(resultado3);
  modalidades[3]->setResultado(resultado4);
  modalidades[0]->imprimir();
  modalidades[1]->imprimir();
  modalidades[2]->imprimir();
  modalidades[3]->imprimir();
 
  cout << endl  << "TESTE TABELA - OK" << endl << endl;
  Equipe** participantesT = new Equipe*[3]();
  participantesT[0] = e3; //ESALQ
  participantesT[2] = e1; //Poli
  participantesT[3] = e2; //FEA
  Tabela* tabela = new Tabela(participantes, 3);
  tabela->pontuar(e1,13);
  tabela->pontuar(e3,8);
  tabela->pontuar(e1,10);
  tabela->pontuar(e2,5);
  tabela->imprimir();
 
  cout << endl << "TESTE COMPETICAO - OK" << endl << endl;
  Competicao* comp = new Competicao("InterUSP", participantes, 3 , 4);
  comp->adicionar(modalidades[0]);
  comp->adicionar(modalidades[1]);
  comp->adicionar(modalidades[2]);
  comp->adicionar(modalidades[3]);
  comp->adicionar(modalidades[4]);
  modalidades[0]->setResultado(resultado1);
  //modalidades[1]->setResultado(resultado2);
  //modalidades[2]->setResultado(resultado3);
  //modalidades[3]->setResultado(resultado4);
  comp->imprimir();
 
  delete comp;
*/
  return 0;
 
}