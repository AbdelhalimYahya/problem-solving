// problem A Round 172 (Div. 2)

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype> // For toupper()

using namespace std;

int main() {
    string word;
    cin >> word;

    // Capitalize the first letter
    word[0] = toupper(word[0]); // Fixed syntax error: Removed unnecessary concatenation
    cout << word << endl;

    return 0;
}

// the link : https://codeforces.com/problemset/problem/281/A
