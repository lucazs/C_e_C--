#include <iostream>

using namespace std;

int main()
{
    system("cls");

    // for(int i = 1; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }

    
    // for(int x = 0, y = 0; x <= 10 || y <= 10; x++, y+=2)
    // {
    //     cout << x * y << endl;
    // }

    for(int x = 0, y = 1, z = 2; x <= 10 || y <= 10 || z <= 10; x++, y+=2, z+=2)
    {
        cout <<"Indice = " << x << " Impar = " << y << " Par = " << z << endl;
    }

    return 0;
}