#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float largura, comprimento;
	float area, perimetro;
	
	cout << "Insira a largura: ";
	cin >> largura;
	
	cout << "\n";
	
	cout << "Insira o comprimento: ";
	cin >> comprimento;
	
	cout << "\n";
	
	area = largura * comprimento;
	
	perimetro = 2*(largura + comprimento);
	
	cout << "Area do retangulo: " << area << "\n";
	
	cout << "\n";
	
	cout << "Perimetro do retangulo: " << perimetro;	
	
	return 0;
}
