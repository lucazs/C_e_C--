#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    system("cls");
    string palavra = "", palavra_invertida = "", palavra_toda_minuscula = "";

    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    // For para transformar todoas as letras em minusculas
    int count = palavra.length();

    for(int i = 0; i < count; i++)
    {
        palavra_toda_minuscula += tolower(palavra[i]);
    }

    // for para inverter a palavra.
    for(int i = count - 1; i >= 0; i--)
    {
        palavra_invertida += palavra_toda_minuscula[i];
    }

    if(palavra_toda_minuscula == palavra_invertida) cout << "A palavra: " << palavra << " eh um palindromos.\n";
    else cout << "A palavra " << palavra << " nao eh um palidromo.\n";

    return 0;
}