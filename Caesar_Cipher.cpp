#include <iostream>
using namespace std;

string caesarEncrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (c - base + shift) % 26 + base;
        } else result += c;
    }
    return result;
}

int main() {
    string text = "HELLO";
    int shift = 3;
    cout << caesarEncrypt(text, shift);
}
