#include <iostream>

using namespace std;

#define INT int

// ESCOPO DE VARIÁVEIS GLOBAIS E LOCAIS

INT n1 = 5, n2 = 9; // VARIAVEIS GLOBAIS PODE SER ACESSADO EM QUALQUER LUGAR DO NOSSO CODIGO

int main()
{
    cout << n1 << endl << n2 << endl;

    INT n1 = 2, n2 = 3; // VARIAVEIS LOCAIS SÓ PODE SER ACESSADO DENTRO DO ABRE CHAVE E FECHA CHAVE

    cout << n1 << endl << n2 << endl;

    // OPERADORES MATEMATICOS: + - / * %
    INT n3 = 7, n4 = 4;
    INT res1, res2;

    res1 = n1 / n2;
    res2 = n1 % n2;

    cout << "Divisao n1 / n2: " << res1 << endl;
    cout << "Resto da Divisão de n1 % n2: " << res2 << endl;
    cout << "N3 = " << n3 << " N4 = " << n2 << endl;

    return 0;
}