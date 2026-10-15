#include <bits/stdc++.h>
using namespace std;

void reset(int& a) {
    a = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    vector<int> arr(a);
	    
	    // the metrics
	    int bgspace = 0;
	    int count = 0;
	    
	    for (int i = 0; i < a ; i++) {
	        cin >> arr[i];
	        
	        if (arr[i] == 0) {
	            count ++;
	            if (count >= bgspace) {
	                bgspace = count;
	            }
	        } else {
	            reset(count);
	        }
	    }
	    
	    cout << bgspace << endl;
    }
}

// the link : https://codeforces.com/contest/1829/problem/B
