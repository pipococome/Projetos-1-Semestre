#include <iostream>

using namespace std;

int main() {
    int limiteInferior, limiteSuperior, soma;
    
    cout << "Digite o limite inferior do intervalo: ";
    cin >> limiteInferior;
    
    cout << "\nDigite o limite superior do intervalo: ";
    cin >> limiteSuperior;

    cout << "\nOs numeros no intervalo sao: ";
    for (int numero = limiteInferior + 1; numero < limiteSuperior; ++numero) {
        cout << numero << " ";
        soma += numero;
    }
    cout << endl;
    cout << "\nO somatorio dos numeros no intervalo e: " << soma << endl;

    return 0;
}

