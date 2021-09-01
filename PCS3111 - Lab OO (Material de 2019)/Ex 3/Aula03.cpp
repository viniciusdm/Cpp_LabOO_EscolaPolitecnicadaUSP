#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    bool disponivel;
    int horasMensais;

    double getSalarioDiario();
    void imprimir();
};

/** @TODOS: Implementar metodos da classe Pessoa **/

double Pessoa::getSalarioDiario(){
    if (this->disponivel == true){ //O this não eh obrigatorio nesse caso
        double salario = (50 + horasMensais/22.0);
        return salario;
    }else
        return 0;
}

void Pessoa::imprimir(){
    string disponibilidade;

    if (disponivel == true)
        disponibilidade = "disponivel";
        else
        disponibilidade = "nao disponivel";
    cout << nome <<" - " << disponibilidade << " - " << horasMensais << "h/mes - R$" << this->getSalarioDiario() << " por dia" << endl;
}

class Atividade {
public:
    string nome;
    int duracao;
    Pessoa *p1 = NULL;
    Pessoa *p2 = NULL;

    Pessoa* getResponsavel();
    bool adicionar(Pessoa *p);
    double getCusto();
    void imprimir();
};

/** @TODOS: Implementar metodos da classe Atividade **/

Pessoa* Atividade::getResponsavel(){
    if (p1== NULL && p2==NULL)
        return NULL;
    else if (p1->getSalarioDiario()<p1->getSalarioDiario())
        return p1;
    else
        return p2;
}

bool Atividade::adicionar(Pessoa *p){
    if (!p->disponivel)
        return false;
    else if (p1 == NULL){
        p1 = p;
        return true;
    }else if (p2 == NULL){
        p2 = p;
        return true;
    }else
    return false;
}

double Atividade::getCusto(){
    if (getResponsavel()==NULL)
        return -1;
    else
        return duracao*getResponsavel()->getSalarioDiario();
}

void Atividade::imprimir(){
    cout << nome << " - " << duracao << "dias - R$" << getCusto() << endl;
    getResponsavel()->imprimir();
}

/** @TODOS: Testar classes no metodo main().

    REMOVER METODO main() ANTES DE ENVIAR AO JUDGE!
**/
/*
int main() {
    cout << "Aula 3" << endl;
    double salario;
    Pessoa *p1 = new Pessoa;
    Pessoa *p2 = new Pessoa;
    p1->nome = "Ana";
    p1->disponivel = true;
    p1->horasMensais = 120;
    p2->nome = "Pedro";
    p2->disponivel = true;
    p2->horasMensais = 150;

    cout << "Exercicio 1" << endl;
    p1->getSalarioDiario();
    p1->imprimir();
    p2->getSalarioDiario();
    p2->imprimir();
    cout << "\n" << endl;

    cout << "Exercicio 2" << endl;
    Atividade *a1 = new Atividade;
    Atividade *a2 = new Atividade;
    a1->nome = "Teste";
    a1->duracao = 2;
    a1->adicionar(p1);
    a1->adicionar(p2);
    a1->imprimir();

}
*/
