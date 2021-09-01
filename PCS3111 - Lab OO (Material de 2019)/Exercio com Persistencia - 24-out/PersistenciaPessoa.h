#ifndef PERSISTENCIAPESSOA_H
#define PERSISTENCIAPESSOA_H

#include "Pessoa.h"
/*  Faca os includes necessarios!
 */

class PersistenciaPessoa {
public:
    PersistenciaPessoa(string arquivo);
    virtual ~PersistenciaPessoa();
    Pessoa** obter(int& quantidade);

    void inserir(Pessoa* p);
private:
    string arquivo;

};

#endif // PERSISTENCIAPESSOA_H
