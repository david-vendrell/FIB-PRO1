#include <iostream>
using namespace std;

int main() {
    char c;
    int sum = 0;
    cin >> c;
    while (c != '.') {
        if (c == 'a') ++sum;
        cin >> c;
    }
    cout << sum << endl;
}
