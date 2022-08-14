#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' and c <= 'z')
        c -= 'a' - 'A';

    else c += 'a' - 'A';

    cout << c << endl;
}
