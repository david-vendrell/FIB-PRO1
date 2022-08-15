#include <iostream>
#include <cmath>
using namespace std;

int suma(int x) {
    if (x < 10) return x;
    else return suma(x/10) + x%10;
}

bool es_primer_perfecte(int n) {
    if (n == 0 or n == 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n%i == 0) return false;
    }
    if (n < 10) return true;
    return es_primer_perfecte(suma(n));
}

int main() {
    int x;
    cin >> x;
    cout << es_primer_perfecte(x) << endl;
}
