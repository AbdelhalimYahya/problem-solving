#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    
	    vector<int> arr(a);
	    
	    // metrics
	    int max = INT_MIN , min = INT_MAX;
	    int result = 0;
	    
	    for (int i = 0 ; i < arr.size() ; i++) {
	        cin >> arr[i];
	        if (min >= arr[i]) min = arr[i];
	       // if (max <= arr[i]) max = arr[i];
	    }
	    
	    for (int i = 0 ; i < arr.size() ; i++) {
	        if (arr[i] > min) {
	            result += arr[i] - min;
	        }
	    }
	    
	    cout << result << endl;
	}

}

// the link : https://codeforces.com/contest/1676/problem/B
