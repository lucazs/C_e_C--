#include <iostream>
#include <format>
#include <print>

using namespace std;

int main()
{
    system("cls");

    enum armas 
    {
        fuzil = 100, revolver = 12, rifle = 12, escopeta = 1
    };

    armas armasSel;

    armasSel = fuzil;

    cout << armasSel;
    cout << revolver;

    return 0;
}