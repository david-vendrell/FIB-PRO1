#include <iostream>
using namespace std;



void hexadecimal(int x) {
    if (x < 10) cout << x;
    else if (x == 10) cout << 'A';
    else if (x == 11) cout << 'B';
    else if (x == 12) cout << 'C';
    else if (x == 13) cout << 'D';
    else if (x == 14) cout << 'E';
    else cout << 'F';
}

void print_hexa(int n) {
    if (n < 16) hexadecimal(n);
    else {
        print_hexa(n/16);
        hexadecimal(n%16);
    }
}

void cambio_base(int num, int base) {
    if (num < base) cout << num;
    else {
        cambio_base(num/base, base);
        cout << num%base;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        cambio_base(n, 2);
        cout << ", ";
        cambio_base(n, 8);
        cout << ", ";
        print_hexa(n);
        cout << endl;
    }
}
