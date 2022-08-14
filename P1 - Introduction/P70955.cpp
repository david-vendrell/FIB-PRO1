#include <iostream>
using namespace std;

int main() {
    int a, d, h, m, s, total;
    cin >> a >> d >> h >> m >> s;
    
    total = (a*365*24*3600) + (d*24*3600) + (h*3600) + (m*60) + s;
    
    cout << total << endl;
}
