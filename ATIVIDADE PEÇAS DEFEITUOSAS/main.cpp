#include <iostream>
#include <string>

using namespace std;

int main() {
    // Vari�veis de entrada
    string nomeFuncionario;
    int codigoMaquina;
    int totalProduzidas;
    int totalDefeituosas;

    // Entrada de dados
    cout << "Nome do Funcionario: ";
    getline(cin, nomeFuncionario);

    cout << "Codigo da Maquina: ";
    cin >> codigoMaquina;

    cout << "Total de Pecas Produzidas: ";
    cin >> totalProduzidas;

    cout << "Total de Pecas Defeituosas: ";
    cin >> totalDefeituosas;

    // C�lculo da quantidade de pe�as referente a 10% da produ��o
    double limiteDefeituosas = totalProduzidas * 0.1;

    // Verifica��o se a quantidade de pe�as defeituosas � superior a 10% da produ��o
    string mensagem;
    if (totalDefeituosas > limiteDefeituosas) {
        mensagem = "A Maquina precisa de manutencao";
    } else {
        mensagem = "A Maquina esta funcionando perfeitamente";
    }

    // Sa�da de dados
    cout << "\nMensagem para " << nomeFuncionario << ", Codigo da Maquina " << codigoMaquina << ": " << mensagem << endl;

    return 0;
}

