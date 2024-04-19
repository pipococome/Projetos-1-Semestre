#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    string resp1, resp2, resp3, resp4, resp5;
    int acerto = 0, erro = 0;

    cout << "\n Quiz \n";

    cout << "\n1) Quanto é 100 + 100 \n";
    cout << "A) 250\n";
    cout << "B) 140\n";
    cout << "C) 200.\n";
    cout << "D) 100.\n";
    cin >> resp1;

    if(resp1 == "C" || resp1 == "c"){
        cout << "\nAcertou!!!\n";
        acerto = acerto + 1;
    } else {
        cout << "\nErrou!!!!\n";
        erro = erro + 1;
    }

    cout << "\n2) Qual a capital do Brasil? \n";
    cout << "A) Argentina.\n";
    cout << "B) Veneza. \n";
    cout << "C) Tokio. \n";
    cout << "D) Brasília. \n";
    cin >> resp2;

    if(resp2 == "D" || resp2 == "d"){
        cout << "\nAcertou!!!\n";
        acerto = acerto + 1;
    } else {
        cout << "\nErrou!!!!\n";
        erro = erro + 1;
    }

    cout << "\n3) Quanto é 40/20? \n";
    cout << "A) 4.\n";
    cout << "B) 14. \n";
    cout << "C) 158. \n";
    cout << "D) 2. \n";
    cin >> resp3;

    if(resp3 == "D" || resp3 == "d"){
     cout << "\nAcertou!!!\n";
        acerto = acerto + 1;
    } else {
        cout << "\nErrou!!!!\n";
        erro = erro + 1;
    }

    cout << "\n4) Qual a capital da Alemanha? \n";
    cout << "A) Veneza.\n";
    cout << "B) Berlim. \n";
    cout << "C) Tokio. \n";
    cout << "D) Argentina. \n";
    cin >> resp4;

    if(resp4 == "B" || resp4 == "b"){
     cout << "\nAcertou!!!\n";
        acerto = acerto + 1;
    } else {
        cout << "\nErrou!!!!\n";
        erro = erro + 1;
    }

    cout << "\n5) Qual o maior planeta do sistema solar? \n";
    cout << "A) Sol.\n";
    cout << "B) Via Láctea. \n";
    cout << "C) Júpiter. \n";
    cout << "D) Terra. \n";
    cin >> resp5;

    if(resp5 == "C" || resp5 == "c"){
     cout << "\nAcertou!!!\n";
        acerto = acerto + 1;
    } else {
        cout << "\nErrou!!!!\n";
        erro = erro + 1;
    }
    
	
	cout << "\nSua pontuação: \n";    
    cout << "Acertos: " << acerto << "\n";
    cout << "Erros: " << erro << "\n";
    
    
    
    
    
    

    return 0;
}
