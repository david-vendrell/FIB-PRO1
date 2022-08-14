#include <iostream>
using namespace std;

int main() {
    int base, num;
    
    while (cin >> base >> num) {
        int cont = 0;
        while (num != 0) {
            num = num/base;
            ++cont;
        }
        cout << cont << endl;
    }
}
