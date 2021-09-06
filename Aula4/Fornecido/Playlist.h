/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
*/

#define NUMERO_MAXIMO_VALORES 10

class Playlist {
/*  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
*/

/*
 * Os metodos podem ser acessados de fora do escopo da classe
*/
    int getDuracaoTotal();
    bool adicionar(Musica* m);

    void setNome(string nome);
    string getNome();
    int getQuantidade();

    void imprimir();
};
