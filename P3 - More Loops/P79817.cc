#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        int aux = a;
        if (a == 0 and b == 0) cout << '1' << endl;
        else if (b == 0) cout << '1' << endl;
        else {
            for (int i = 1; i < b; ++i) {
                aux *= a;
            }
            cout << aux << endl;
        }
    }
}
