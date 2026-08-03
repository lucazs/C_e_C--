#include <iostream>

using namespace std;

int main()
{
    int num = 10, num2 = 50;

    // OPERADORES DE COMPARAÇÃO
    /*
        > MAIOR QUE
        >= MAIOR OU IGUAL A
        < MENOR QUE
        <= MENOR OU IGUAL A
        == IGUAL
        != DIFERENÇA
    */

    // ESTRUTURA DE DECISÃO IF - ELSE
    if(num > 10)
    {
        cout << "Valor de num eh Maior que 10." << endl;
    }
    else
    {
        cout << "Valor de num nao eh Maior que 10." << endl;
    }

    if(num < num2) cout << "Verdadeiro num menor que num2" << endl; else cout << "Falso, num eh maior que num2" << endl;
    
    return 0;
}