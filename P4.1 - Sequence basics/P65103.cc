#include <iostream>
using namespace std;

int main() {
    int x, n;
    int pos = 0;
    bool finished = false;
    cin >> n;

    while (not finished and cin >> x) {
        ++pos;
        if (pos == n) {
            cout << "A la posicio " << n  << " hi ha un " << x <<  '.' << endl;
            finished = true;
        }
    }
    if (not finished) cout << "Posicio incorrecta." << endl;
}
