#include <iostream>
#include <format>
#include <print>

using namespace std;

// PRIMEIRA FUNÇÃO DE CONTAGEM
void contador(int num)
{
    for (int i = 0; i <= num; i++)
    {
        cout << i << "\n";
    }
}

void contador(int num, int cont = 0)
{
    cout << cont << "\n";
    if (num > cont) 
    {
        cont++;
        contador(num, cont);
    }
    // PQ PRECISAMOS USAR O PRÉ INCREMENTO E NÃO O PÓS INCREMENTO. NO PÓS ELE USA O VALOR DA VARIAVEL NO ESCOPO DA FUNÇAO
    // E SÓ DEPOISINCREMENTA DEPOIS, ENTÃO O VALOR DE CONT NUNCA DEIXA DE SER ZERO DENTRO DO ESCOPO DA FUNÇAÕ.
    //NO PRÉ INCREMENTO, O VALOR É INCREMENTADO
    // ANTES E DEPOIS PASSADO PARA O ESCOPO DA FUNÇÃO.
    // PARA SOLUCIONAR ESSE PROBLEMA DO PÓS INCREMENTO, FAZEMOS O INCREMENTO ANTES DE CHAMAR A FUNÇÃO E SÓ DEPOIS 
    // USAMOS O NOVO VALOR DE CONT COMO ARGUMENTO.
}

int fatorial1(int num)
{
    int fat = 1;
    if (num > 0)
    {
        fat = num * fatorial1(num - 1);
    }

    return fat;
}

int fatorial2(int num)
{
    if(num <= 1) return 1;

    return num * fatorial2(num -1);
}

int fatorial3(int num)
{
    return (num <= 1) ? 1 : num * fatorial3(num - 1);
}

void fibonacci1(int num, int cont = 1, int a = 0, int b = 1)
{
    if(cont == 1) 
        cout << a << " " << b + a << " ";
    else 
        cout << b << " ";

    if (num >= cont)
    {
        cont++;
        fibonacci1(num, cont, b, a + b);
    }
}

// num = quantidade total de termos que queremos imprimir
void fibonacci(int num, int a = 0, int b = 1)
{
    if (num <= 0) return; // Caso base: quando os termos acabarem, encerra

    cout << a << " "; // Imprimir apenas o termo atual

    /*
        Chamada recursiva:
        - Subtrai 1 do total de termos restsantes (num -1)
        - O próximo 'a' será 'b'
        - O próximo 'b' será 'a + b'
    */
   fibonacci(num - 1, b, a + b);

}

// 0, 1, 1, 2, 3, 5, 8

int main()
{
    system("cls");

    // contador(10);
    // contador(10, 0);
    // cout << fatorial1(5) << "\n";
    // cout << fatorial1(4) << "\n";
    // cout << fatorial2(3) << "\n";
    // cout << fatorial2(0) << "\n";
    // cout << fatorial3(2) << "\n";
    // cout << fatorial3(1) << "\n";

    cout << "Sequencia de Fibonacci: ";
    fibonacci(8);

    return 0;
}