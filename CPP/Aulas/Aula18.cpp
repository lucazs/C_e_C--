#include <iostream>

using namespace std;

int main()
{
    system("cls");

    // CRIAÇÃO DO VETOR
    int vetor[10];

    // INCLUSÃO DE VALORES DENTRO DO VETOR
    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;
    vetor[4] = 40;
    vetor[5] = 50;
    vetor[6] = 60;
    vetor[7] = 70;
    vetor[8] = 80;
    vetor[9] = 90;

    // PRINTANDO OS VALORES DO VETOR
    cout << "PRIMEIRA MANEIRA: " << endl;

    cout << vetor[0] << " ";
    cout << vetor[1] << " ";
    cout << vetor[2] << " ";
    cout << vetor[3] << " ";
    cout << vetor[4] << " ";
    cout << vetor[5] << " ";
    cout << vetor[6] << " ";
    cout << vetor[7] << " ";
    cout << vetor[8] << " ";
    cout << vetor[9] << endl;
    
    // PRINTANDO USANDO O LAÇO FOR
    cout << "SEGUNDA MANEIRA: " << endl;

    for(int i = 0; i < 10; i++) cout << vetor[i] << " ";

    cout << "\nTERCEIRA MANEIRA: " << endl;
    for(int i = 0; sizeof(vetor) / 4 < 10; i++) cout << " " << vetor[i];

    return 0;
}