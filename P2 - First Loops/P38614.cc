#include <iostream>
using namespace std;

int main() {
    int n, num, total = 0;
    cin >> n;

    num = n;
    
    while (num != 0) {
        total += num%10;
        num /= 100;
    }
    if (total % 2 == 0) cout << n << " ES TXATXI" << endl;

    else cout << n << " NO ES TXATXI" << endl;
}
