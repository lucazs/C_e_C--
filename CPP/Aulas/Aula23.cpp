#include <iostream>
#include <format>
#include <print>

using namespace std;

void somar(int num1, int num2)
{
    cout << "Funcao 1 - A soma eh: " << num1 + num2 << "\n";
}

void somar(int num1, int num2, int num3)
{
    cout << "Funcao 2 - A soma eh : " << num1 + num2 + num3 << "\n";
}

int main()
{
    system("cls");
    somar(1, 2);
    somar(1, 2, 3);

    return 0;
}