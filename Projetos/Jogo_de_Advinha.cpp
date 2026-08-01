#include <iostream>
#include <random>

using namespace std;

int main()
{
    system("cls");
    int minimo = 0, maximo = 10;
    int numero_escolhido = 0;
    int tentativas = 0;

    // 1. criar um gerador baseado no  hardware do pc
    random_device rd;
    /*  Pega dados imprevisíveis do hardware do seu computador para garantir que o 
        número mude toda vez que você abrir o programa.
    */

    // 2. escolher o algoritmo de geração (Mersenne Twister)
    mt19937 gerador(rd());
    /*
        É um dos algoritmos matemáticos mais rápidos e seguros do mundo para criar sequências aleatórias.
    */

    // 3. Informar a faixa desejada
    uniform_int_distribution<int> distruicao(minimo, maximo);
    /*
        Garante que todos os números do intervalo que você escolheu tenham exatamente a mesma chance de 
        serem sorteados.
    */

    // 4. Gerar o número aleatorio
    int numero_aleatorio = distruicao(gerador);

    cout << "Tente adivinhar qual numero estou pensando: \n";
    cout << "Escolha um numero entre " << minimo << " e " << maximo << "\n";

    do
    {
        cout << "\nDigite seu palpite: ";
        cin >> numero_escolhido;
        tentativas++;
        
        if(numero_aleatorio == numero_escolhido)
        {
            cout << "\n====================================\n";
            cout << "Voce acertou!!! Parabens!!!\n";
            cout << "Numero de tentativas: " << tentativas << "\n";
            cout << "====================================\n";
        }
        else if (numero_escolhido < numero_aleatorio)
        {
            cout << "O numero secreto e MAIOR do que " << numero_escolhido << ". Tente novamente!\n";
        }
        else
        {
            cout << "O numero secreto e MENOR do que " << numero_escolhido << ". Tente novamente!\n";
        }
        
    } 
    while (numero_aleatorio != numero_escolhido);
    
    return 0;
}