#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeComodo;
    float largura, comprimento, areaTotal = 0;
    char continuar;

    do {
        int escolha;
        cout << "Escolha o comodo (digite o numero correspondente):\n";
        cout << "1. Sala\n";
        cout << "2. Cozinha\n";
        cout << "3. Banheiro\n";
        cout << "4. Quarto 1\n";
        cout << "5. Quarto 2\n"; 
        cout << "6. Area de servico\n";
        cout << "7. Quintal\n";
        cout << "8. Garagem\n";
        cout << "Opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                nomeComodo = "Sala";
                break;
            case 2:
                nomeComodo = "Cozinha";
                break;
            case 3:
                nomeComodo = "Banheiro";
                break;
            case 4:
                nomeComodo = "Quarto 1";
                break;
            case 5:
                nomeComodo = "Quarto 2";
                break;
            case 6:
                nomeComodo = "Area de servico";
                break;
            case 7:
                nomeComodo = "Quintal";
                break;
            case 8:
                nomeComodo = "Garagem";
                break;
            default:
                cout << "Opcao invalida! Por favor, escolha novamente.\n";
                break;
                system("cls");
        }

        cout << "Digite a largura do comodo em metros: ";
        cin >> largura;
        cout << "Digite o comprimento do comodo em metros: ";
        cin >> comprimento;

        float areaComodo = largura * comprimento;
        areaTotal += areaComodo;

        cout << "A area do " << nomeComodo << " e: " << areaComodo << " metros quadrados." << endl;

        cout << "Deseja calcular mais um comodo? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "A area total da residencia e: " << areaTotal << " metros quadrados." << endl;

    return 0;
}

