#include <iostream>
#include <string>
using namespace std;

class Musica {
public:
    std::string nome;
    int duracao;
    int quantidadeDeAvaliacoes = 0;
    int somaDasAvaliacoes = 0;

    void avaliar(int valor);
    double getMedia();

    void imprimir();
};

void Musica::avaliar(int valor){
    somaDasAvaliacoes = somaDasAvaliacoes + valor;
    quantidadeDeAvaliacoes = quantidadeDeAvaliacoes + 1;
}

double Musica::getMedia(){
    double media;
    media = ((double) somaDasAvaliacoes) / quantidadeDeAvaliacoes;
    return media;
}
void Musica::imprimir(){
    cout << nome << " - " << duracao << " segundo" << " - " << this -> getMedia() <<endl;
}
class Playlist {
public:
    std::string nome;
    Musica* m1 = NULL;
    Musica* m2 = NULL;

    int getDuracao();
    bool adicionar(Musica* m);
};

int Playlist::getDuracao(){
    int duracaoPlaylist;
    if (m1 == NULL && m2 == NULL)
        return 0;
    else if (m1 == NULL)
        duracaoPlaylist = m2 -> duracao;
    else if (m2 == NULL)
        duracaoPlaylist = m1 -> duracao;
    else
        duracaoPlaylist = m1 -> duracao + m2 -> duracao;
    return duracaoPlaylist;
}

bool Playlist::adicionar(Musica *m){
    if (m1 == NULL && m2 != m){
        m1 = m;
        return true;
    }
    else if (m2 == NULL && m1 != m){
        m2 = m;
        return true;
    }
    else
        return false;
}
void teste(){
    Musica *Roses = new Musica;
    Roses -> nome = "Roses";
    Roses -> duracao = 180;
    Roses -> avaliar(5);
    Roses -> avaliar(4);
    Roses -> avaliar(4);
    Roses -> imprimir();

    Musica *Roda = new Musica;
    Roda -> nome = "Roda-Viva";
    Roda -> duracao = 233;
    Roda -> avaliar(5);
    Roda -> avaliar(3);
    Roda -> avaliar(1);
    Roda -> imprimir();

    Playlist *listaZero = new Playlist;
    cout << listaZero -> getDuracao() << endl;

    Playlist *listaUm = new Playlist;
    listaUm -> adicionar(Roses);
    cout << listaUm -> getDuracao() << endl;

    Playlist *listaDois = new Playlist;
    listaDois -> adicionar(Roses);
    listaDois -> adicionar(Roda);
    cout << listaDois -> getDuracao() << endl;

}
int main() {
    teste();
    return 0;
}
