#ifndef ERRODISCIPLINA_H
#define ERRODISCIPLINA_H
#include <stdexcept>
#include <string>

using namespace std;

class ErroDisciplina : public runtime_error {
public:
  ErroDisciplina (string mensagem);
};
#endif // ERRODISCIPLINA_H
