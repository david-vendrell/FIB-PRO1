#include <iostream>
using namespace std;

int main() {
    int base, num;
    cin >> base;
    while (cin >> num) {
        int res = 0;
        cout << num << ": ";
        while (num >= base) {
            res += num%base;
            num /= base;
        }
        cout << res + num << endl;
    }
}
