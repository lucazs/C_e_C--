#include <iostream>

using namespace std;

int main()
{
    // CRIANDO UMA MATRIZ
    system("cls");

    int matriz[3][4];

    // INSERINDO VALORES NA MATRIZ
    cout << "   MATRIZ   \n";

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[0][3] = 4;
    
    matriz[1][0] = 5;
    matriz[1][1] = 6;
    matriz[1][2] = 7;
    matriz[1][3] = 8;
    
    matriz[2][0] = 9;
    matriz[2][1] = 10;
    matriz[2][2] = 11;
    matriz[2][3] = 12;
    
    cout << matriz[0][0] << "  ";
    cout << matriz[0][1] << "  ";
    cout << matriz[0][2] << "  ";
    cout << matriz[0][3] << " \n";

    cout << matriz[1][0] << "  ";
    cout << matriz[1][1] << "  ";
    cout << matriz[1][2] << "  ";
    cout << matriz[1][3] << "  \n";

    cout << matriz[2][0] << " ";
    cout << matriz[2][1] << " ";
    cout << matriz[2][2] << " ";
    cout << matriz[2][3] << " \n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}