#include <iostream>
#include <cmath>

using namespace std;

bool ehProximo(double a, double b) {
    return abs(a - b) < 0.001;
}

double* encontrarPessoa(double valoresPorHora[], double horasDiarias[],
                        int quantidade, double valorPorHora, double horaDiaria) {
    double *PosMemoria = NULL;
    for (int i = 0 ; i < quantidade; i++){
        //cout << "i=" << i << " valoresPorHora: " << valoresPorHora[i] << endl;
        if (ehProximo(valorPorHora, valoresPorHora[i]) && ehProximo(horaDiaria,horasDiarias[i])){
            PosMemoria = &valoresPorHora[i];
            //cout << &valoresPorHora[i] << endl;
            return PosMemoria;
        }
    }
    //cout << " NULL" << endl;
    return PosMemoria;

    //Implemente aqui!
}

//Utilize o main para testar a funcao
//NAO ESQUECER DE APAGAR ANTES DE ENVIAR AO JUDGE!!!
/*
int main() {
    cout << "Aula02ex01" << endl;
    double valoresPorHora[] = {10.0, 9.0}, horasDiarias[] = {8.0, 11.0};
    int quantidade = 2;
    cout << "VlPorHora: "<< valoresPorHora[1] << " Pos Memoria: " << &valoresPorHora[1] << endl;
    double *pessoa = encontrarPessoa(valoresPorHora, horasDiarias, 2, 9.0, 11.0);

    //double *pessoa = encontrarPessoa(valoresPorHora, horasDiarias, 2, 10.0, 8.0);

    return 0;
}*/
