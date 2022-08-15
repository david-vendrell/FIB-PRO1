#include <iostream>
using namespace std;

void reversing_list_of_words() {
    string word;

    if (cin >> word and word != "fi") {
        reversing_list_of_words();
        cout << word << endl;
    }

    else return;
}

int main() {
    reversing_list_of_words();

}
