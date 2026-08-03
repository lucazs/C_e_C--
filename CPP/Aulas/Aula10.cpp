#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int n1, n2, res;
    char opc;

    inicio:

    cout << "Digite o valor da nota 1: " << endl;
    cin >> n1;

    cout << "Digite o valor da nota 2: " << endl;
    cin >> n2;

    res = (n1 + n2) / 2;

    if ( res >= 60 ) cout << "Aluno Aprovado" << endl; 
    else  if (res >= 40 ) cout << "Aluno Recuperacao" << endl;
    else cout << "Aluno Reprovado" << endl;

    cout << "Digitar outras notas ?[s/n]: " << endl;
    cin >> opc;

    if(opc == 's' or opc == 'S') goto inicio;

    return 0;
}
