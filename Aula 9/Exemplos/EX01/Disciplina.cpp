#include "Disciplina.h"
#include <stdexcept>
#include <string>

using namespace std;

Disciplina::Disciplina() {
  this->numeroDeAlunos = 0;
}

void Disciplina::adicionarAluno (string nome, double notaP1,
                                 double notaP2,
                                 double notaP3, int faltas) {
  this->alunos[numeroDeAlunos] = new Aluno (nome, notaP1,
      notaP2, notaP3, faltas);
  numeroDeAlunos++;
}

void Disciplina::imprimir() {
  for (int i = 0; i < numeroDeAlunos; i++) {
    alunos[i]->imprimir();
  }
}

Disciplina::~Disciplina() {
  for (int i = 0; i < numeroDeAlunos; i++) {
    delete this->alunos[i];
  }
}
