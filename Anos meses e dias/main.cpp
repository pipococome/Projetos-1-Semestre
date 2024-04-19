#include <iostream>
#include <locale>
#include <math.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");

	int ano, dia, mes;
	int dias, anos, meses;
	
	
	cout << "Quantos anos possui? ";
	cin >> ano;
	
	cout << "Quantos meses possui? ";
	cin >> mes;
	
	cout <<"Quantos dias possui? ";
	cin >> dia;
	
	anos = ano * 365;
	meses = mes*30;
	dias = anos + meses + dia;
	
	cout << "Sua idade em dias de vida é: " << dias; 
	
	
	
	return 0;
}
