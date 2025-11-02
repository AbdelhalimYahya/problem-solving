// problem A Round 181 (Rated for Div. 2)

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// Function to rearrange a string in descending ASCII order
string sortDescendingByASCII(string input) {
    sort(input.begin(), input.end(), greater<char>());
    return input;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string operation;
        cin >> operation;

        // Directly sort the string in descending ASCII order
        string result = sortDescendingByASCII(operation);

        // Output the rearranged string
        cout << result << endl;
    }

    return 0;
}

// the link : https://codeforces.com/problemset/problem/2125/A
