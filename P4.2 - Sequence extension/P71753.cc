#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int max;
        int num;
        cin >> num;
        max = num;
        for (int i = 1; i < n; ++i) {
            cin >> num;
            if (num > max) max = num;
        }
        cout << max << endl;
    }
}
