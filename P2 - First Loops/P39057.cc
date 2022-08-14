#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    string s;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "rectangle") {
            double b, h;
            cin >> b >> h;
            cout << b*h << endl;
        }
        else {
            double r;
            cin >> r;
            cout << M_PI*r*r << endl;
        }
    }
}
