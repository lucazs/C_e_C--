#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    cout << num << endl;

    // INVERTER O VALOR DA VARIAVEL

    num = num * -1;

    cout << "Valor invertido: " << num << endl;

    num = num * -1;

    cout << "Valor invertido Mometaneo na memoria: " << -num << endl;

    // FORMA DE GRAVAR NA MEMORIA RAM
    num *= -1;
    cout << "Valor invertido: " << num << endl;

    return 0;
}