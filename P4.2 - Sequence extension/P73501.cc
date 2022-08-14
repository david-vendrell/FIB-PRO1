#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int seq1, seq2;
        int cont = 0;
        cin >> seq1;
        while (seq1 > 0) {
            cin >> seq2;
            if (seq1 < seq2) ++cont;
            seq1 = seq2;
        }
        cout << cont << endl;
    }

}
