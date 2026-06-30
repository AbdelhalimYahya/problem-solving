#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int diff = min(a, b);

    int rem = max(a, b) - diff;

    int same = rem / 2;

    cout << diff << " " << same << endl;
    return 0;
}

// the link : https://codeforces.com/problemset/problem/581/A
