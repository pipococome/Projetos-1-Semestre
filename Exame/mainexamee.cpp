#include <iostream>

using namespace std;

void calculo_despesas(){
		int calculo_despesas;
		float prec, num_diarias, desp;
		calculo_despesas = (prec*num_diarias);+desp;
	}

int main(int argc, char** argv) {
	
	string  data_ent, data_sai;
	int Quarto [7][30], op, num_quarto[5], sit, cont = 0;
	
	
	
	do{
		cout << endl;
		cout << "Hotel Fazenda Horizonte\n";
		cout << "1-Cadastra os quartos\n";
		cout << "2-Lista todos os quartos\n";
		cout << "3-Lista os quartos ocupados\n";
		cout << "4-Aluguel / Reserva quartos\n";
		cout << "5-Lancar despesas extras\n";
		cout << "6-Calcula despesas dos quartos\n";
		cout << "7-Sair\n";
		cout << endl;
		cin >> op;
		
		
		
		switch(op){
			case 1: 
			cout << "Numero do quarto: ";
			cin >> num_quarto[5];
			cout << "Situacao: ";
			cin>> sit;
			if ( sit == 1){
				cout << "Alugado\n";
			}else if (sit == 2){
				cout << "Reservado\n";
			}else if (sit == 0){
				cout << "Livre\n";
			}
			cout << "Preco: ";
			cin >> prec;
			cout << "Despesas: ";
			cin >> desp;
			cout << "Data de entrada: ";
			cin >> data_ent;
			cout << "Data de saida: ";
			cin >> data_sai;
			cout << "Numero de diarias: ";
			cin >> num_diarias;
			break;
			
			case 2:
				cout << "Todos os quartos:\n";
				cout << num_quarto[5]<< "-"<< sit <<"\n" << desp<< " Despesas" << "\n";
					if ( sit == 1){
				cout << "Alugado\n";
			}else if (sit == 2){
				cout << "Reservado\n";
			}if (sit == 0){
				cout << "Livre\n";
			}
				break;
				
			case 3:
				cout << "Quartos alugados ou reservados\n";
				if ( sit == 1){
				cout << "Alugado\n";
				cout << num_quarto[5];
			}else if (sit == 2){
				cout << "Reservado\n";
				cout << num_quarto[5];
			}
			break;
				
			case 4:
				cout << "Locacao ou reserva dos quartos\n";
				cin >> num_quarto[5];
				cout << sit;
				if (sit == 0){
				cout << "\nLivre \n";
				cout << "\nAlterar situacao\n";
				cin >> sit;
				break;
			}
			
			case 5:
				cout << "Despesas extras no quarto: "; 
				cin >> num_quarto[5];
				desp = desp+1;
				
			case 6:
				cout << "Calculo do preco e das diarias";
				cout << calculo_despesas;
				
		}
	}

	while(op != 7);
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
