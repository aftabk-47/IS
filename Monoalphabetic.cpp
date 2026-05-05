#include <iostream>
using namespace std;

string monoEncrypt(string text, string key) {
    string result = "";
    for (char c : text) {
        if (isalpha(c))
            result += key[toupper(c) - 'A'];
        else result += c;
    }
    return result;
}

int main() {
    string text = "HELLO";
    string key = "QWERTYUIOPASDFGHJKLZXCVBNM";
    cout << monoEncrypt(text, key);
}
