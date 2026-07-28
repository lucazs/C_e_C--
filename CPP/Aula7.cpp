#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    n1 = 0;
    n2 = 10;

    // FORMA PADRÃO DE INCREMENTO E DECREMENTO

    cout << "FORMA PADRÃO: " << endl;
    cout << "Antes do Incremento de n1: " << n1 << endl;
    n1 = n1 + 1;
    cout << "Depois do Incrento de n1: " << n1 << endl;

    // FORMA CONTRAIDA DE INCREMENTAÇÃO OU DECREMENTAÇÃO
    cout << "FORMA CONTRAIDA: " << endl;
    cout << "Antes do Incremento de n1: " << n1 << endl;
    n1+= 1;
    cout << "Depois do Incrento de n1: " << n1 << endl;

    // OPERADOR UNITARIO
    cout << "OPERADOR UNITARIO: " << endl;
    cout << "Antes do Incremento de n2: " << n2 << endl;
    n2++;
    cout << "Depois do Incrento de n2: " << n2 << endl;

    // OPERADOR DE PRE-INCREMENTO E POS-INCREMENTO
    cout << "OPERADOR PRE INCREMENTO: " << endl;
    cout << "Antes do Incremento de n2: " << ++n2 << endl;
    cout << "Depois do Incrento de n2: " << ++n1 << endl;
    
    n1--; n2--;    
    
    cout << "OPERADOR POS INCREMENTO: " << endl;
    cout << "Antes do Incremento de n2: " << n2++ << endl;
    cout << "Depois do Incrento de n2: " << n1++ << endl;

}
