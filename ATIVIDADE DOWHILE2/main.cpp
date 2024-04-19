#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int op;
	float resultado;
	
	do{
		cout << "\n====== Menu =====+\n";
		cout << "|1 - Soma        |\n";
		cout << "|2 - Subtração   |\n";
		cout << "|3 - Sair        |\n";
		cout << "+================+\n";
		cout << "Escolha uma opcao:  ";
		cin >> op;
		
		switch (op){
			case 1:
				resultado = 10+20;
				cout << "Resultado: " << resultado << "\n";
				break;
			case 2:
				resultado = 100-20;
				cout << "Resultado: " << resultado << "\n";
				break;
			case 3:
				cout << "Obrigado por usar meu sistema.";
				break;
				
			default:
				cout << "Valor invalido \n";
				break;
		}
		
	}while(op != 3);
	
	
	
	
	
	
	
	
	return 0;
}
