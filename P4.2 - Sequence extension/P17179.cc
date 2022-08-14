#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int t;
        double num, max = 0, min = 0, count = 0;
        cin >> t;

        for (int j = 0; j < t; ++j) {
            cin >> num;

            if (num > max or max == 0) max = num;
            if (num < min or min == 0) min = num;

            count += num;
        }
        cout << min << ' ' << max << ' ' << count/t << endl;
    }
}
