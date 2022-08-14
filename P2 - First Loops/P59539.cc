#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    double total = 0;
    cin >> n;
    for (double i = 1; i <= n; ++i) {
        total += 1/i;
    }
    cout << total << endl;
}
