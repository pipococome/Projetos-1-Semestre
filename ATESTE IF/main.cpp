#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	
	cout << "Informe sua idade: \n";
	cin >> idade;
	
	if (idade >= 16){
		cout << "Pode votar!!! \n";
	} else {
		cout << "Não pode votar. Deve ser maior de 16 anos!!! \n";
	}
	
	
	
	
	
	
	
	return 0;
}
