#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float c;
	float f;	
	
	
	cout << "Insira a temperatura em Celsius: ";
	cin >> c;
	
	cout << "\n";
	
	cout << "Conversao de temperaturas. \n";
	
	cout << "\n";
	
	f = (c * 1.8) + 32;
	
	cout << "Temperatura em Fahrenheit: " << f;
	
	
	
	
	
	
	
	return 0;
}
