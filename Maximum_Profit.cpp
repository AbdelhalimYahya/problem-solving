#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;
    int minSoFar = x;
    int best = INT_MIN;

    for (int i = 1; i < n; i++) {
        cin >> x;
        best = max(best, x - minSoFar);
        minSoFar = min(minSoFar, x);
    }

    cout << best << endl;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D
