#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}

// the link : https://codeforces.com/problemset/problem/271/A
