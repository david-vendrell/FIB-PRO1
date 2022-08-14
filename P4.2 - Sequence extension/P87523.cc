#include <iostream>
using namespace std;

int main() {
    char word;
    cin >> word;
    bool found = false;

    while (word != '.' and not found) {
        if (word == 'h') {
            cin >> word;

            if (word == 'e') {
                cin >> word;

                if (word == 'l') {
                    cin >> word;

                    if (word == 'l') {
                        cin >> word;

                        if (word == 'o') {
                            found = true;
                        }
                    }
                }
            }
        }
        else cin >> word;
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}
