#ifndef SEMAVALIACAO_H
#define  SEMAVALIACAO_H

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;
class SemAvaliacao : public invalid_argument {
public:
    SemAvaliacao (string mensagem);
    virtual ~SemAvaliacao();
};

#endif /* SEMAVALIACAO_H */