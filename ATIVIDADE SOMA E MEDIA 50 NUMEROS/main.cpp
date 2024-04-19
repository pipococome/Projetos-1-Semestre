#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int soma = 0; // Inicializamos a vari�vel soma como 0
    int numero; // Vari�vel para armazenar cada n�mero lido

    // Loop para ler 50 n�meros
    for (int i = 1; i <= 50; i++) {
        cout << "Digite o " << i << "� numero: ";
        cin >> numero;
        soma += numero; // Adiciona o n�mero lido � soma
    }

    int media = soma / 50; // Calcula a m�dia dividindo a soma por 50

    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}

