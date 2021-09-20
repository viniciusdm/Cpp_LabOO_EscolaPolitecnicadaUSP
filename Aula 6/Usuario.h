#ifndef USUARIO_H
#define USUARIO_H
// Inclua aqui as diretivas de compilacao necessarias

class Usuario{
private:
    // Inclua aqui os atributos necessarios

public:
    Usuario(string login, int maximoFavoritos);
    ~Usuario();

    string getLogin();
    bool adicionar(Artista* favorito);
    Artista** getFavoritos();
    int getQuantidadeDeFavoritos();

    void imprimir();
};

#endif // USUARIO_H
