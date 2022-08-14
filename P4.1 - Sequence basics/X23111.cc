#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    while (cin >> s1 >> s2) {

        if (s2 < s1) cout << s2 << " " << s1 << endl;
        else cout << s1 << " " << s2 << endl;
    }
}
