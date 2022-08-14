#include <iostream>
using namespace std;

int main() {
    int cont1 = 0;
    int cont2 = 0;
    char parentheses;
    bool correcte = true;

    while (cin >> parentheses) {
        if (parentheses == '(') ++cont1;
        else ++cont2;
        if (cont2 > cont1) correcte = false;
    }

    if (not correcte) cout << "no" << endl;
    else if (cont1 == cont2) cout << "yes" << endl;
    else cout << "no" << endl;
}
