#include <bits/stdc++.h>
using namespace std;

int main() {
    string as , bs;
    cin >> as >> bs;
    
    string result = "";
    
    for (int i = 0; i < as.size(); i++) {
        if (as[i] == '0' && bs[i] == '0') result += "0";
        if (as[i] == '1' && bs[i] == '0') result += "1";
        if (as[i] == '1' && bs[i] == '1') result += "0";
        if (as[i] == '0' && bs[i] == '1') result += "1";
    }

    cout << result;
    
    return 0;
}

// the link : https://codeforces.com/problemset/problem/61/A
