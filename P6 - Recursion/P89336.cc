#include <iostream>
using namespace std;

int escriure(int n) {
    string s;
    if (not(cin >> s)) return n - 1;

    int nombreParaules = escriure(n + 1);
    if (n <= nombreParaules/2) cout << s << endl;
    return nombreParaules;
}

int main() {
    escriure(1);
}
