#include <iostream>
using namespace std;

int main() {
    int d, n, t, a;
    cin >> d >> n >> t;
    int cont = 0;
    
    for (int i = 0; i < t; ++i) {
        cin >> a;
        if (n + a > d) ++cont;
        n = n + a - d;
    }
    cout << cont << endl;
}
