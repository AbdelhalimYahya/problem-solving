#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> matrix(rows, vector<char>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    string image = "#Black&White";
    bool colored = false;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 'C' || matrix[i][j] == 'M' || matrix[i][j] == 'Y') {
                colored = true;
                break;
            }
        }
        if (colored) break;
    }
    
    cout << (colored ? "#Color" : "#Black&White") << endl;

    return 0;
}

// the link : https://codeforces.com/problemset/problem/707/A
