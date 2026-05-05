#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Generate 5x5 Playfair matrix
vector<vector<char>> generateMatrix(string key) {
    vector<vector<char>> matrix(5, vector<char>(5));
    map<char, bool> used;
    key += "ABCDEFGHIKLMNOPQRSTUVWXYZ"; // J excluded
    int row = 0, col = 0;
    for (char c : key) {
        c = toupper(c);
        if (c == 'J') c = 'I';
        if (!used[c] && isalpha(c)) {
            matrix[row][col] = c;
            used[c] = true;
            col++;
            if (col == 5) { col = 0; row++; }
        }
    }
    return matrix;
}
