#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int soma = 0; // Inicializamos a variável soma como 0
    int numero; // Variável para armazenar cada número lido

    // Loop para ler 50 números
    for (int i = 1; i <= 50; i++) {
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;
        soma += numero; // Adiciona o número lido à soma
    }

    int media = soma / 50; // Calcula a média dividindo a soma por 50

    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}

