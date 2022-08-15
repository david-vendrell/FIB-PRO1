#include <iostream>
using namespace std;

int exp() {
    char c;
    cin >> c;
    if (c == '+') return exp() + exp();
    else if (c == '*') return exp() * exp();
    else if (c == '-') return exp() - exp();
    else return int (c - '0');
}

int main() {
    cout << exp() << endl;
}
