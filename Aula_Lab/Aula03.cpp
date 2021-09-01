#include <iostream>

// Faca os includes necessarios

using namespace std;

class Musica {
public:
    string nome;
    int duracao;
    int quantidadeDeAvaliacoes = 0;
    int somaDasAvaliacoes = 0;

    void avaliar(int valor);
    double getMedia();

    void imprimir();
};
/** Implementar metodos da classe Musica **/
void Musica::avaliar(int valor){
    somaDasAvaliacoes = somaDasAvaliacoes + valor;
    quantidadeDeAvaliacoes = quantidadeDeAvaliacoes + 1;
    double Musica::getMedia(){
        double media = 0;
        media = ((double) somaDasAvaliacoes) / quantidadeDeAvaliacoes;
        return = media;
}
/*
double Musica::getMedia(){
    double media = 0;
    media = ((double) somaDasAvaliacoes) / quantidadeDeAvaliacoes;
    return = media;
}
*/
void Musica::imprimir(){
    cout << nome << " - " << duracao << " segundo" << " - " << media <<endl;
}
int main() {
    Musica *Roses = new Musica;
    Roses -> avaliar(5);
    Roses -> avaliar(4);
    Roses -> avaliar(4);
    Roses -> imprimir();
    return 0;
}

/*
class Playlist {
public:
    string nome;
    Musica* m1 = NULL;
    Musica* m2 = NULL;

    int getDuracao();
    bool adicionar(Musica* m);
};

/** Implementar metodos da classe Playlist **/


/** Implementar a funcao teste **/
/*
void teste() {
    // IMPLEMENTE seguindo o enunciado
}
*/

/** COMENTE a funcao main() ANTES DE ENVIAR AO JUDGE! **/
/*
int main() {
    teste();
    return 0;
}
*/
