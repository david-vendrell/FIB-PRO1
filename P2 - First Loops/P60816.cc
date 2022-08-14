#include <iostream>
using namespace std;

int main() {
    int n, aux;
    cin >> n;
    
    if (n == 0) cout << '0';
    
    while (n > 0) {
        aux = n%16;
        n /= 16;
        if (aux == 15) cout << 'F';
        else if (aux == 14) cout << 'E';
        else if (aux == 13) cout << 'D';
        else if (aux == 12) cout << 'C';
        else if (aux == 11) cout << 'B';
        else if (aux == 10) cout << 'A';
        else cout << aux;
        
        
    }
    cout << endl;
}
