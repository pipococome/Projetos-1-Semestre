#include <iostream>


using namespace std;
int main(int argc, char** argv) {
	
	int i=0,n;
	
	do{
		cout << i << endl;
		i++;
	}while(i<=10);
	
	
	
	do{
		cout << "\nDigite um numero entre 1 e 10: ";
		cin >> n;
	}while(n>10 || n<=0);
	
	
	
	
	
	
	return 0;
}
