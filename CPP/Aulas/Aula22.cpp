#include <iostream>
#include <format>

using namespace std;

void texto()
{
    cout << "Aula de C++\n";
}

void soma(int num1, int num2)
{
    string msg = format("A soma de {} + {} eh igual a {}.", num1, num2, num1 + num2);
    cout << msg << endl;
}

void subtrair(int num1, int num2)
{
    cout << "A subtracao de " << num1 << " e " << num2 << " eh " << num1 - num2 << endl;
}

void multiplicar(int num1, int num2)
{
    string msg = format("A multiplicacao de {} por {} eh {}.", num1, num2, num1 * num2);
    cout << msg << endl;
}

void dividir(int num1, int num2)
{
    string msg = format("A divisao de {} por {} eh {}.", num1, num2, num1 / num2);
    cout << msg << endl;
}

int main()
{
    system("cls");

    texto();
    soma(4, 5);
    subtrair(5, 3);
    multiplicar(4, 5);
    dividir(20, 4);

    return 0;
}
