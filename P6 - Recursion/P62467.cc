#include <iostream>
using namespace std;

void barres(int n) {
    if (n == 1) cout << '*' << endl;            //CAS BASE
    else {              //CAS INDUCTIU

        barres(n - 1);

        for (int i = 0; i < n; ++i) {
            cout << '*';
        }
        cout << endl;
        barres(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    barres(n);
}
