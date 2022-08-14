#include <iostream>
using namespace std;

int main() {
    int n;
    int pos = 0;
    bool found = false;

    while (not found and cin >> n) {
        ++pos;
        if (n%2 == 0) found = true;
    }
    cout << pos << endl;
}
