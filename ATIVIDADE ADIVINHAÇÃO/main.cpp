#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main(int argc, char** argv) {
    int adivinha;
    int modo;
    int tentativa;
    int pontos = 0; 
    int numeroSecreto;
    



    do {
        cout << "\n====== Adivinhacao =====+\n";
        cout << "|1 - Facil                    |\n";
        cout << "|2 - Medio                    |\n";
        cout << "|3 - Dificil                  |\n";
        cout << "|4 - Mostrar pontos           |\n";
        cout << "|5 - Sair                     |\n";
        cout << "+================+\n";
        cout << "Escolha um modo: ";
        cin >> modo;


        switch (modo) {
            case 1:
                srand(time(NULL)); 
                numeroSecreto = rand() % 100 + 1; 
                tentativa = 20;
                do {
                    cout << "Tentativas: " << tentativa << "\n";
                    cout << "Digite um número: ";
                    cin >> adivinha;

                    if (adivinha < numeroSecreto) {
                        cout << "O número secreto é maior.\n\n";
                    } else if (adivinha > numeroSecreto) {
                        cout << "O número secreto é menor.\n\n";
                    }

                    if (adivinha != numeroSecreto) {
                        tentativa--;
                        if (tentativa == 0) {
                            cout << "Tentativas esgotadas. ";
                            break;
                        }
                    }
                } while (adivinha != numeroSecreto);
                if (adivinha == numeroSecreto) {
                    pontos++;
                }
                system("cls");
                break;
                
            case 2:
                srand(time(NULL));
                numeroSecreto = rand() % 1000 + 1; 
                tentativa = 10;
                do {
                    cout << "Tentativas: " << tentativa << "\n";
                    cout << "Digite um número: ";
                    cin >> adivinha;

                    if (adivinha < numeroSecreto) {
                        cout << "O número secreto é maior.\n\n";
                    } else if (adivinha > numeroSecreto) {
                        cout << "O número secreto é menor.\n\n";
                    }

                    if (adivinha != numeroSecreto) {
                        tentativa--;
                        if (tentativa == 0) {
                            cout << "Tentativas esgotadas. ";
                            break;
                        }
                    }
                } while (adivinha != numeroSecreto);
                if (adivinha == numeroSecreto) {
                    pontos++;
                }
                system("cls");
                break;
                
            case 3:
                srand(time(NULL)); 
                numeroSecreto = rand() % 10000 + 1; 
                tentativa = 5;
                do {
                    cout << "Tentativas: " << tentativa << "\n";
                    cout << "Digite um número: ";
                    cin >> adivinha;

                    if (adivinha < numeroSecreto) {
                        cout << "O número secreto é maior.\n\n";
                    } else if (adivinha > numeroSecreto) {
                        cout << "O número secreto é menor.\n\n";
                    }

                    if (adivinha != numeroSecreto) {
                        tentativa--;
                        if (tentativa == 0) {
                            cout << "Tentativas esgotadas. ";
                            break;
                        }
                    }
                } while (adivinha != numeroSecreto);
                if (adivinha == numeroSecreto) {
                    pontos++;
                }
                system("cls");
                break;
                
            case 4:
                cout << "Quantidade de pontos: " << pontos << endl;
                system("cls");
                break;
        }
    } while (modo != 5);

    return 0;
}

