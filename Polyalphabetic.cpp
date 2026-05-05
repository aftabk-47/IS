#include <iostream>
using namespace std;

string vigenereEncrypt(string text, string key) {
    string result = "";
    int j = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            char shift = toupper(key[j % key.length()]) - 'A';
            result += (toupper(text[i]) - 'A' + shift) % 26 + 'A';
            j++;
        }
    }
    return result;
}

int main() {
    cout << vigenereEncrypt("HELLO", "KEY");
}
