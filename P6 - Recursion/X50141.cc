#include <iostream>
using namespace std;

int max_de_dos(int x, int y) {
    int max = x;
    if (y > max) max = y;
    return max;
}

int engreixa(int x) {
    if (x < 10) return x;
    int engr = engreixa(x/10);
    int max = max_de_dos(engr%10, x%10);

    return engr*10 + max;
}

int main() {

}
