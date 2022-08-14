#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    bool pico = false;
    cin >> x >> y >> z;

    while (not pico and z != 0) {
        if (y > x and y > z and y > 3143) pico = true;
        x = y;
        y = z;
        cin >> z;
    }
    if (pico) cout << "SI" << endl;
    else cout << "NO" << endl;

}
