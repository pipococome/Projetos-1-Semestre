#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	int i;
	int n1, nf, tp;
	
	
	cout << "Informe o numero inicial: ";
	cin >> n1;
	
	cout << "Informe o numero final: ";
	cin >> nf;
	
	cout << "Informe o tipo de contagem: \n";
	cout << "1- Crescente.\n";
	cout << "2- Decrescente\n";
	cin >> tp;
	
	
	if(tp == 1){
	for(int i=n1; i<= nf; i++){
		cout << i << endl;
	}
}
	
	if(tp == 2){
		for(int i=nf; i>=n1; i--){
			cout << i << endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
