#include <iostream>
using namespace std;

int main() {
    int col, fil;
    cin >> fil >> col;
    int suma = 0;

    for (int i = 0; i < fil; ++i) {
        for (int j = 0; j < col; ++j) {
            char x;
            cin >> x;
            suma += x - '0';
        }
    }
    cout << suma << endl;
}
