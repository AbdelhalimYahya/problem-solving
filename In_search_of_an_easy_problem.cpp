#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (arr[i] == 1) {
            cout << "HARD";
            return 0;
        }
    }
    
    cout << "EASY";

    return 0;
}

// the link : https://codeforces.com/problemset/problem/1030/A
