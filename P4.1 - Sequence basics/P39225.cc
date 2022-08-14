#include <iostream>
using namespace std;

int main() {
    int x, n;
    bool finished = false;
    int pos = 0;
    cin >> n;

    cin >> x;
    while (not finished and x != -1) {
        ++pos;
        if (pos == n) {
            cout << "A la posicio " << n  << " hi ha un " << x <<  '.' << endl;
            finished = true;
        }
        cin >> x;
    }
}
