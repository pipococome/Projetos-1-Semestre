#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        cout << i << endl;
        if (i % 10 == 0) {
            cout << "M�ltiplo de 10" << endl;
        }
    }
    return 0;
}

