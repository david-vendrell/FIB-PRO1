#include <iostream>
using namespace std;

int list(int n) {
    string word;

    if (cin >> word) {
        int printed = list(n);

        if (printed < n) {
            cout << word << endl;
        }
        return ++printed;
    }
    else return 0;
}

int main() {
    int n;
    cin >> n;
    list(n);

}
