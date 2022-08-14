#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;

    double calc1 = 0, calc2 = 0;

    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        calc1 += x*x;
        calc2 += x;
    }
    cout << (((1.0/(n-1))*calc1)-((1.0/(n*(n-1))*calc2*calc2))) << endl;
}
