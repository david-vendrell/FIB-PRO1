#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        int aux = 0;
        int x = n;
        while (x > 0) {
            aux += (x%10);
            x /= 10;
        }
        cout << "La suma dels digits de " << n << " es " << aux << '.' << endl;
    }
}
