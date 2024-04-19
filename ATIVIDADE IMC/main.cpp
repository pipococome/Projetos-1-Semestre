#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	
	
	
	string nome;
	float altura=0, peso=0, imc=0;
	char r='S';
	
	
	while(r == 'S' || r == 's'){
	cout << "Qual seu nome?: ";
	cin >> nome;
	cout << "Qual sua altura?: ";
	cin >> altura;
	cout << "Qual seu peso?: ";
	cin >> peso;
	if(imc>=18.5 && imc<=24.9){
		cout << "Peso normal \n";
	} else if(imc > 25){
		cout << "Acima do peso \n";
	} else {
		cout << "Abaixo do peso \n";
	}
	
	cout << "\nDeseja continuar? (S/N)";
	cin >> r;
	system("cls";)
	
}
	

	
	
	
	
	
	return 0;
}
