#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int num;
    num = 7;

    cout << "RESULTADO DOS TESTES LOGICOS: " << endl;
    cout << "========================================" << endl;

    cout << "AND" << endl;
    if(num > 4 && num < 7) 
        cout << "Valor Aceito." << endl;
    else 
        cout << "Valor Nao aceito." << endl;

    cout << "========================================" << endl;
    cout << "OR" << endl;
    if(num < 4 || num > 7) 
        cout << "Valor Aceito." << endl;
    else 
        cout << "Valor Nao aceito." << endl;

    cout << "========================================" << endl;
    cout << "COMBINANDO AND e OR" << endl;
    if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num <20)) 
        cout << "Valor Aceito." << endl;
    else 
        cout << "Valor Nao aceito." << endl;
    
    num = 1;

    cout << "========================================" << endl;
    cout << "NEGACAO DE TESTE LOGICO" << endl;
    if(!num) 
        cout << "Valor Aceito." << endl;
    else 
        cout << "Valor Nao aceito." << endl;

    return 0;
}
