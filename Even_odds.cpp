#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, k;
    cin >> n >> k;
    
    long long odd_count = (n + 1) / 2;
    
    if (k <= odd_count) {
        cout << 2 * k - 1 << endl;
    } else {
        long long pos = k - odd_count;
        cout << 2 * pos << endl;
    }
    
    return 0;
}

// the link : https://codeforces.com/problemset/problem/318/A
