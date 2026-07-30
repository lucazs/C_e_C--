#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int val;

    cout << "Escolha uma opcao abaixo: " << endl;
    
    cout << "1 - Inicio Jogo" << endl;
    cout << "2 - Configuracoes" << endl;
    cout << "3 - Sair" << endl;
    
    cin >> val;

    switch (val)
    {
        case 1:
            cout << "Iniciando o jogo..." << endl;
            break;
        case 2:
            cout << "Indo para configuracoes do jogo" << endl;
            break;
        case 3:
            cout << "Saindo do jogo..." << endl;
            break;
        default:
            cout << "Informacao invalida." << endl;
    }

    // cout << "Selecione o transporte: " << endl;
    
    // cout << "[1] - Carro\n[2] - Moto\n[3] - Aviao\n[4] - Helicoptero\n";
    // cin >> val;

    // switch (val)
    // {
    // case 1:
    // case 2:
    //     cout << "\nTransporte terrestre\n";
    //     switch (val)
    //     {
    //     case 1:
    //         cout << "\nCarro selecionado\n";
    //         break;
    //     case 2:
    //         cout << "\nMoto selecionado\n";
    //         break;
    //     }
    //     break;
    // case 3:
    // case 4:
    //     cout << "\nTransporte Aerio\n";
    //     switch (val)
    //     {
    //     case 1:
    //         cout << "\nAviao selecionado\n";
    //         break;
    //     case 2:
    //         cout << "\nHelicoptero selecionado\n";
    //         break;
    //     }
    // default:
    //     cout << "Valor invalido";
    //     break;
    // }
}
