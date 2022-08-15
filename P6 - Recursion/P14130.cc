#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cont = 0;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < vec.size(); ++i){
        cin >> vec[i];
        if (vec[i] == vec[n - 1]) ++cont;
    }
    cout << cont << endl;
}
