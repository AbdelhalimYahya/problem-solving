#include <bits/stdc++.h>
using namespace std;

int n;
int A[25];

bool solve(int p, int target) {
    if (target == 0) return true;
    if (p == n) return false;
    if (A[p] <= target && solve(p + 1, target - A[p])) return true;
    if (solve(p + 1, target)) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    int q;
    cin >> q;

    while (q--) {
        int M;
        cin >> M;

        if (solve(0, M)) cout << "yes\n";
        else             cout << "no\n";
    }

    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A
