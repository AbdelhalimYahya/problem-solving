#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<long long> w;

long long countTrucks(long long P) {
    long long trucks = 1;
    long long currentLoad = 0;

    for (int i = 0; i < n; ++i) {
        if (w[i] > P) return k + 1; // single package too heavy
        if (currentLoad + w[i] <= P) {
            currentLoad += w[i];
        } else {
            ++trucks;
            currentLoad = w[i];
        }
    }
    return trucks;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    w.resize(n);
    long long sum = 0;
    long long maxW = 0;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
        sum += w[i];
        maxW = max(maxW, w[i]);
    }

    long long low = maxW;
    long long high = sum;

    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (countTrucks(mid) <= k) {
            high = mid; // capacity is enough, try smaller
        } else {
            low = mid + 1; // capacity is too small
        }
    }

    cout << low << '\n';
    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_D
