#include <iostream>
using namespace std;

int main() {
    int n, x;
    int cont = 0;
    cin >> n;
    
    while (cin >> x) {
        if (x%n == 0) ++cont;
    }
    cout << cont << endl;
}
