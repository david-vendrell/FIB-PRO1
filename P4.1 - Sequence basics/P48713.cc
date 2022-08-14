#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 0; i < x; ++i) {
        int num, divisor = 2;
        cin >> num;

        bool prime = true;
        while (divisor*divisor <= num and prime) {
            if (num%divisor == 0) prime = false;
            ++divisor;
        }
        if (num < 2) cout << num << " no es primer" << endl;
        else if (prime) cout << num << " es primer" << endl;
        else cout << num << " no es primer" << endl;
    }
}
