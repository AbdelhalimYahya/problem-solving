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
        int l = 0 , h = n - 1;
        while (l <= h) {
            int m = (l+h) / 2;
            if (nums[m] == qnums[i]) {
                count++;
                break;
            } else if (nums[m] < qnums[i]) {
                l = m + 1;
            } else if (nums[m] > qnums[i]) {
                h = m - 1;
            }
        }
    }
    
    cout << count << endl;
     
    return 0; 
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B
