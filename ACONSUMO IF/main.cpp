#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int cod_relogio;
	string nome_cliente;
	float let_anterior, let_atual;
	float consumo;
	float valor_conta;
	int lig1, lig2, lig3;
	int tipo_ligacao;
	
	cout << "Informe o código do relógio: ";
	cin >> cod_relogio;
	
	cout << "Digite o nome do cliente: ";
	cin >> nome_cliente;
	
	cout << "Informe a leitura anterior: ";
	cin >> let_anterior;
	
	cout << "Informe a leitura atual: ";
	cin >> let_atual;
	
	cout << "Informe o tipo de ligacao: \n";
	cout << "------------------------------------ \n";
	cout << "1 Comércio \n";
	cout << "2 Residencia \n";
	cout << "3 Indústria \n";
	cout << "\n";
	cout << "Digite aqui: ";
	cin >> tipo_ligacao;
	
	cout <<"\n";
	
	consumo = let_atual - let_anterior;
	
	if(tipo_ligacao == 1){
		valor_conta = consumo * 0.6;
	} else if (tipo_ligacao == 2){
		valor_conta = consumo * 0.48;
	} else if (tipo_ligacao == 3){
		valor_conta = consumo * 1.29;
	}
	
	
	
	
	cout << nome_cliente << "\n"<< consumo << "\n" << valor_conta;
	
	
	
	
	
	return 0;
}
