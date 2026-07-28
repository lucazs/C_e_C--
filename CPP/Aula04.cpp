#include <iostream>

using namespace std;

int main()
{
    // TIPO NOME;
    // TIPO NOME = VALOR;

    // CRIANDO VARIÁVEIS
    int vidas = 0; // PODE RECEBER VALORES COMO: 10, 25
    char letra = 'L'; // 'B'
    double dinheiro = 5.2; // 2.5
    float altura = 5.2; // 2.5
    bool vivo = true; // true ou false
    string nome = "Lucas"; // "Lucas"

    // SAÍDAS
    cout << vidas << endl;
    cout << letra << endl;
    cout << dinheiro << endl;
    cout << altura << endl;
    cout << vivo << endl;
    cout << nome << endl;

    system("pause");

    // ENTRADAS DO TECLADO
    cout << "Digite o numero de vidas: " << endl;
    cin >> vidas;

    cout << "Digite uma letra: " << endl;
    cin >> letra;

    cout << "Digite Dinheiro: " << endl;
    cin >> dinheiro;

    cout << "Digite sua altura: " << endl;
    cin >> altura;

    cout << "Digite seu Nome: " << endl;
    cin >> nome;

    system("pause");

    // SAÍDA
    cout << vidas << endl;
    cout << letra << endl;
    cout << dinheiro << endl;
    cout << altura << endl;
    cout << vivo << endl;
    cout << nome << endl;

    return 0;
}
