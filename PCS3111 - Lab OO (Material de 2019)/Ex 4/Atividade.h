/*
 * Use as diretivas adequadas e inclua os arquivos e/ou bibliotecas
 * necessarios para a implementacao da classe
 */
#include <string>
#include "Pessoa.h"
#ifndef ATIVIDADE_H
#define ATIVIDADE_H
#define NUMERO_MAXIMO_VALORES 10

using namespace std;


class Atividade {
private:
    string nome;
    int horasNecessarias;
    Pessoa* pessoas[NUMERO_MAXIMO_VALORES]; //Vetor do tipo Pessoa
    int x = 0;

  /*
  *  Os atributos podem ser acessados somente internamente ao escopo
  *  da classe
  */

  /*
  * Os metodos podem ser acessados de fora do escopo da classe
  */
  public:
  void setNome(string nome);
  void setHorasNecessarias(int horasNecessarias);
  int getHorasNecessarias();
  int getQuantidade();

  bool adicionar(Pessoa* p);
  int getDuracao();
  void imprimir();
};
#endif // ATIVIDADE_H
