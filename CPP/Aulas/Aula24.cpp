#include <iostream>
#include <format>
#include <print>

using namespace std;

void imp(string txt = "Vazio")
{
    cout << format("MSG: {}", txt) << "\n";
}

int main()
{
    system("cls");
    
    imp("Mensagem para Impressao.");
    imp();

    return 0;
}