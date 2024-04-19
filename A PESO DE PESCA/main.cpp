#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    float p, e = 0, m = 0;

    cout << "Informe o peso do peixe: ";
    cin >> p;

    if (p > 50) {
        cout << "\nO peso excedeu ao limite estabelecido. \n";
        e = p - 50; // Calcula o excesso de peso
        m = e * 4.00; // Calcula a multa (R$4 por quilo excedido)
    } else {
        cout << "Peso dentro das normas estabelecidas.\n";
    }

    cout << "\nVocê deve pagar a multa com valor de: R$ " << m;

    return 0;
}

