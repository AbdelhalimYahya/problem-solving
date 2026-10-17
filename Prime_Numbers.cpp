#include <bits/stdc++.h>
using namespace std;

void DivisionTrial(int N , int& count) {
    
    int i = 2;
    
    int k = floor(sqrt(N));
    
    while (i <= k) {
        if (N % i == 0) return;
        i++;
    }
    
    count++;
}

int main() {

    int test;
    cin >> test;
    int count = 0;
    
    while(test--) {
        int num;
        cin >> num;
        
        DivisionTrial(num , count);
    }

    cout << count << endl;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
