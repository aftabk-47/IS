#include <iostream>
#include <vector>
using namespace std;

string railFence(string text, int key) {
    vector<string> rail(key);
    int dir = 1, row = 0;
    for (char c : text) {
        rail[row] += c;
        row += dir;
        if (row == 0 || row == key - 1) dir *= -1;
    }
    string result = "";
    for (auto r : rail) result += r;
    return result;
}

int main() {
    cout << railFence("HELLO", 3);
}
