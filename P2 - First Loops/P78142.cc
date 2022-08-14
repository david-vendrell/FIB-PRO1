#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double n;
    double aux = 0;
    int cont = 0;
    while (cin >> n) {
        aux += n;
        ++cont;
    }
    cout << aux/cont << endl;
}
