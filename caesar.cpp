#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    for (char &c : text) {
        if (isalpha(c))
            c = (tolower(c) - 'a' + 3) % 26 + 'a';
    }
    cout << "Encoded: " << text << endl;
}
