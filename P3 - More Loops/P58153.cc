#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;

    while (cin >> n >> m) {
        double calc = 0;
        ++m;

        while (m <= n) {
            calc += 1.0/m;
            ++m;
        }
        cout << calc << endl;
    }
}
