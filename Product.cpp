#include <iostream>
using namespace std;

string caesar(string text, int shift) {
    string res = "";
    for (char c : text)
        res += (c - 'A' + shift) % 26 + 'A';
    return res;
}

string railFence(string text) {
    string even = "", odd = "";
    for (int i = 0; i < text.length(); i++) {
        if (i % 2 == 0) even += text[i];
        else odd += text[i];
    }
    return even + odd;
}

int main() {
    string text = "HELLO";
    string step1 = railFence(text);
    string step2 = caesar(step1, 3);
    cout << step2;
}
