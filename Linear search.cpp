#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }
    
    int q;
    cin >> q;
    vector<int> qnums(q);
    for (int i = 0 ; i < q ; i++) {
        cin >> qnums[i];
    }
    
    for (int i = 0 ; i < q ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (qnums[i] == nums[j]) {
                count++;
                break;
            }
        }
    }
    
    cout << count << endl;
     
    return 0; 
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A
