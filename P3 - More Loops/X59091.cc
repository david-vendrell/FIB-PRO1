#include <iostream>
using namespace std;

int main() {
    int n, m;

    bool start = true;

    while (cin >> n >> m) {
        if (not start) cout << endl;
        int num = 9;
        for (int i = 0; i < n; ++i) {

            for (int j = 0; j < m; ++j) {
                cout << num;
                --num;

                if (num == -1) num = 9;
            }
            cout << endl;
        }
        start = false;
    }
}
