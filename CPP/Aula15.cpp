#include <iostream>

using namespace std;

int main()
{
    int cont = 0;

    while (cont < 1000)
    {
        cout << cont << endl;

        if(cont == 500) break;
    }
    

    return 0;
}