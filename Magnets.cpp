#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    int count = 1;
    vector<int> mangnets(num);
    
    for (int i = 0 ; i < num ; i++) {
        cin >> mangnets[i];
        if (i == 0 || mangnets[i] == mangnets[i-1]) {
            continue;
        } else {
            count++;
        }
    }
    
    cout << count;
}

// the link : https://codeforces.com/problemset/problem/344/A
