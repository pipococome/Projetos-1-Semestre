#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variáveis de entrada
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

    // Cálculo da quantidade de peças referente a 10% da produção
    double limiteDefeituosas = totalProduzidas * 0.1;

    // Verificação se a quantidade de peças defeituosas é superior a 10% da produção
    string mensagem;
    if (totalDefeituosas > limiteDefeituosas) {
        mensagem = "A Maquina precisa de manutencao";
    } else {
        mensagem = "A Maquina esta funcionando perfeitamente";
    }

    // Saída de dados
    cout << "\nMensagem para " << nomeFuncionario << ", Codigo da Maquina " << codigoMaquina << ": " << mensagem << endl;

    return 0;
}

