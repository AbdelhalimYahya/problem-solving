#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << "I hate it";
        return 0;
    }
    
    string result = "I hate";
    string start = "I love";
    
    for (int i = 1 ; i <= n ; i++) {
        if (i == 1) {
            continue;
        } else {
            result = result + " that " + start;
        }
        
        if (start == "I hate") {
            start = "I love";
        } else {
            start = "I hate";
        }
        
        if (i == n) {
            result += " it";
        }
    }
    
    cout << result;

    return 0;
}

// the link : https://codeforces.com/problemset/problem/705/A
