#include <iostream>
#include <random>

using namespace std;

int main()
{
    system("cls");
    int minimo = 0, maximo = 10;
    int numero_escolhido = 0;

    // 1. criar um gerador baseado no  hardware do pc
    random_device rd;

    // 2. escolher o algoritmo de geração (Mersenne Twister)
    mt19937 gerador(rd());

    // 3. Informar a faixa desejada
    uniform_int_distribution<int> distruicao(minimo, maximo);

    // 4. Gerar o número aleatorio
    int numero_aleatorio = distruicao(gerador);

    cout << "Tente adivinhar qual numero estou pensando: \n";
    cout << "Escolha um numero entre " << minimo << " e " << maximo << "\n";

    do
    {
        cin >> numero_escolhido;
        
        if(numero_aleatorio == numero_escolhido)
        {
            cout << "Voce acerto!!!\n";
        }
        else
        {
            cout << "Que pena, voce errou!!!\nEscolha outro numero: \n";
        }
        
    } 
    while (numero_aleatorio != numero_escolhido);
    
    return 0;
}