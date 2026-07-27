#include <bits/stdc++.h>
using namespace std;

int main() {
    int sixseven[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> sixseven[i][j];
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            int sum = sixseven[i][j];
            if(i>0) sum += sixseven[i-1][j];
            if(i<2) sum += sixseven[i+1][j];
            if(j>0) sum += sixseven[i][j-1];
            if(j<2) sum += sixseven[i][j+1];
            cout << (sum%2==0 ? 1 : 0);
        }
        cout << endl;
    }
}

// the link : https://codeforces.com/problemset/problem/275/A
