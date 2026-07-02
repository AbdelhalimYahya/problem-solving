#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        int leng;
        cin >> leng;
        string s;
        cin >> s;
        string solved = "";
        int totalBaloons = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (solved.find(s[i]) != string::npos) {
                totalBaloons++;
            } else {
                totalBaloons += 2;
            }
            
            solved += s[i];
        }
        
        cout << totalBaloons << endl;
    }

    return 0;
}

// the link : https://codeforces.com/problemset/problem/1703/B
