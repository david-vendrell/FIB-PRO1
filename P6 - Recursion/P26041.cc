#include <iostream>
using namespace std;

void girant() {
    string s;
    if (cin >> s) {
        girant();
        cout << s << endl;
    }
    else return;
}

int main() {
    girant();
}
