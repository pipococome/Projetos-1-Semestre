#include <iostream>

using namespace std;

int main()
{
    int num, aux;

    cout << "Tabuada do numero: ";
    cin >> num;

    for(aux=1 ; aux<=20 ; aux++)
        cout<<num<<" * "<<aux<<" = " << num*aux <<endl;

    return 0;
}
