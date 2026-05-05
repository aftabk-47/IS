#include <iostream>
using namespace std;

int mod26(int x) { return (x % 26 + 26) % 26; }

int main() {
    int key[2][2] = {{3, 3}, {2, 5}};
    string text = "HI";

    int a = text[0] - 'A';
    int b = text[1] - 'A';

    int c1 = mod26(key[0][0]*a + key[0][1]*b);
    int c2 = mod26(key[1][0]*a + key[1][1]*b);

    cout << char(c1 + 'A') << char(c2 + 'A');
}
