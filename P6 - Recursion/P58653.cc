#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {
    char c;
    cin >> c;

    bool letter = false;
    bool vowel = false;
    bool consonant = false;
    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;

    if (isalpha(c)){
        letter = true;
    }
    if (c == 'a' or
      c == 'A' or
      c == 'e' or
      c == 'E' or
      c == 'i' or
      c == 'I' or
      c == 'o' or
      c == 'O' or
      c == 'u' or
      c == 'U'){
    vowel = true;
    } 
    
    else if (letter) {
    consonant = true;
    }

    if (letter and isupper(c)){
        uppercase = true;
    } 
    else if (letter){
        lowercase = true;
    }
    else if (isdigit(c)){
        digit = true;
    }

    escriu_linia(c, "lletra", letter);
    escriu_linia(c, "vocal", vowel);
    escriu_linia(c, "consonant", consonant);
    escriu_linia(c, "majuscula", uppercase);
    escriu_linia(c, "minuscula", lowercase);
    escriu_linia(c, "digit", digit);

}