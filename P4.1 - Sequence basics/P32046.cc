#include <iostream>
using namespace std;

int main() {
    int n, x;
    int cont = 0;
    cin >> n;
    cout << "nombres que acaben igual que " << n << ':' << endl;

    n %= 1000;

    while (cin >> x) {
        if (x%1000 == n) {
            cout << x << endl;
            ++cont;
        }
    }
    cout << "total: " << cont << endl;
}
