#include <iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n;
    for (int i = 2; i <= 16; ++i) {
        int cont = 0;
        y = n;
        while (y != 0) {
            y /= i;
            ++cont;
        }
        cout << "Base " << i << ": " << cont << " cifras." << endl;
    }
}
