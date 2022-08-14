#include <iostream>
using namespace std;

int main() {
    char c;
    bool letter = false;
    cin >> c;
    while (c != '.') {
        if (c == 'a') letter = true;
        cin >> c;
    }
    if (letter) cout << "si" << endl;
    else cout << "no" << endl;
}
