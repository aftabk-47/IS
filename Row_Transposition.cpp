#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string text = "HELLOWORLD";
    string key = "312";
    int cols = key.length();
    int rows = (text.length() + cols - 1) / cols;
    vector<vector<char>> grid(rows, vector<char>(cols, 'X'));
    int k = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols && k < text.length(); j++)
            grid[i][j] = text[k++];
    for (char num = '1'; num <= '3'; num++) {
        int col = key.find(num);
        for (int i = 0; i < rows; i++)
            cout << grid[i][col];
    }
}
