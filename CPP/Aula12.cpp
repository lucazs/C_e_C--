#include <iostream>

using namespace std;

int main()
{
    // expressão ? valor1 : valor2;

    system("cls");

    int nota1, nota2;
    double media;
    string res;
    
    nota1:
    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;

    if(nota1 < 0 || nota1 > 10)
    {
        cout << "Nota informada invalida" << endl;
        goto nota1;
    }

    nota2:
    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;
    if(nota2 < 0 || nota2 > 10)
    {
        cout << "Nota informada invalida" << endl;
        goto nota2;
    }

    media = (nota1 + nota2) / 2;

    res = (media >= 6) ? "Aprovado" : (media >= 3) ? "Recuperacao" : "Reprovado";

    cout << "Situacao do Aluno" << endl;
    cout << res << endl;

    return 0;
}