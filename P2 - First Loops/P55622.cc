#include <iostream>
using namespace std;

int main() {
    int n, g, cont = 1;
    cin >> n;
    g = n;
    while (g >= 10) {
        g /= 10;
        ++cont;
    }
    cout << "El nombre de digits de " << n << " es " << cont << '.' << endl;
}
