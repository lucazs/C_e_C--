#include <iostream>

using namespace std;

int main()
{
    system("cls");
    // system("clear");

    double num1, num2, resultado = 0.0;
    int opcao;

    char iniciar_calculadora = 's';
    
    while (iniciar_calculadora == 's')
    {
        // ESCOLHENDO PRIMEIRO NUMERO
        cout << "Digite o primeiro numero: \n";
        cin >> num1;
        
        // ESCOLHENDO A OPERACAO
        cout << "Operacoes: ";
        cout << "\n01 - Soma\n02 - Subtracao\n03 - Multiplicacao\n04 - Divisao\n";
        cin >> opcao;
        

        cout << "Digite o segundo numero: \n";
        cin >> num2;

        switch (opcao)
        {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 != 0) resultado = num1 / num2;
                else
                {
                    cout << "Operacao invalida.\n";
                } 
                break;
        default:
            cout << "Operacao invalida\n";
            break;
        }

        cout << "RESULTADO: " << resultado << endl;

        cout << "Deseja continuar na calculadora ?[s/n]";
        cin >> iniciar_calculadora;
        if(iniciar_calculadora == 'n') break;
    }
    
    cout << "Fechando calculadora" << endl;

    return 0;
}