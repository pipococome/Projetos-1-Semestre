#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n1, n2, n3;
	int nota_total;
	int nota_final;
	
	cout << "Sistema de media das notas de determinado elemento chamado de aluno. \n";
	
	cout << "\n";
	
	cout << "Digite a nota 1: ";
	cin >> n1;
	
	cout << "\n";
	
	cout << "Digite a nota 2: ";
	cin >> n2;
	
	cout << "\n";
	
	cout << "Digite a nota 3: ";
	cin >> n3;
	
	cout << "\n";
	
	nota_total = n1 + n2 + n3;
	
	nota_final = nota_total/3; 
	
	if (nota_final >= 6){
		cout << "Aprovado!!";
	}
	
	if (nota_final < 6 && nota_final > 4){
		cout << "Recuperacao";
	}
	
	
	if (nota_final <= 4){
		cout << "Reprovado!!";
	}
	
	
		
	return 0;
}
