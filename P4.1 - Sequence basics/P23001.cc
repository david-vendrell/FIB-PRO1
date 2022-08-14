#include <iostream>
using namespace std;

int main() {
    string seq1, seq2;
    int cont = 1, x = 1;

    cin >> seq1;
    while (cin >> seq2) {
        if (seq2 == seq1) {
            ++cont;
            if (cont > x) x = cont;
        }
        else cont = 0;
    }
    cout << x << endl;
}
