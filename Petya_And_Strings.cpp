// problem A  Round 85 (Div. 2 Only)

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype> // For tolower()

using namespace std;

// Function to rearrange a string in descending ASCII order
string sortDescendingByASCII(string input) {
    sort(input.begin(), input.end(), greater<char>());
    return input;
}

int main() {
    string first, second;
    cin >> first >> second;
    string result = "0";

    for (int i = 0; i < first.length(); i++) {
        if (tolower(first[i]) < tolower(second[i])) { // Fixed tolowercase() to tolower()
            result = "-1";
            break;
        }
        else if (tolower(first[i]) > tolower(second[i])) { // Fixed tolowercase() to tolower()
            result = "1";
            break;
        }
    }
    cout << result << endl;
    return 0;
}

// the link : https://codeforces.com/problemset/problem/112/A
