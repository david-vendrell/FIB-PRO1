#include <iostream>
using namespace std;

int main() {
    string word1;
    string word2;
    bool order = false;
    int count = 1;
    int num;

    while (cin >> num and not order) {
        if (num == 0) order = true;
        else if (num == 1 and not order) order = true;
        else {
            cin >> word1 >> word2;
            bool rising = true;
            if (word1 > word2) rising = false;
            word1 = word2;
            int i = 2;

            while (i < num) {
                    cin >> word2;
                    if (word2 < word1) rising = false;
                    word1 = word2;
                    ++i;
                }

                if (rising) order = true;
                if (not order) ++count;
            }
        }
    if (order) cout << "La primera linia ordenada creixentment es la " << count << '.' << endl;
    else cout << "No hi ha cap linia ordenada creixentment." << endl;
}
