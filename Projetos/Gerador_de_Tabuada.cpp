#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int numero = 0;
    char opcao = 'n';

    
    do
    {
        cout << "            GERADOR DE TABUADA               \n";
        cout << "Informe o numero: \n";
        cout << "------------\n";
        cin >> numero;
        cout << "------------\n";

        for(int i = 1; i <= 10; i++)
        {
            if(i < 10)
            {
                cout << " " << i << " X " << numero << "\n";
            }
            else
            {
                cout << i << " X " << numero << "\n";
            }
        }

        cout << "Deseja digitar outro numero: \n";
        cin >> opcao;

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}