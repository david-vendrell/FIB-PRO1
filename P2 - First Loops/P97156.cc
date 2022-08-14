#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) {
        for (int i = x; i <= y - 1; ++i) {
            cout << i << ',';
        }
        cout << y;
    }
    else if (x == y) cout << x;
    cout << endl;
}
