#include <iostream>


using namespace std;
int main(int argc, char** argv) {
	int i=0;
	
	while(i <=10 ){
		cout << i << endl;
		i++;
	}
	
	
	
	
	
	char r='S';
	while(r == 'S' || r == 's'){
		cout << "Boa noite! Estamos aprendendo While.";
		
		cout <<"Deseja continuar? (S/N)";
		cin >> r;
	}	
	
	
	
	return 0;
}
