#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    
	    // metrics 
	    int result = 0;
	    vector<int> arr(a);
	    // unordered_map<int , int> mp;
	    set<int> st = {};
	    
	    for (int i = 0 ; i < arr.size() ; i++) {
	        cin >> arr[i];
	       // mp[arr[i]]++;
	       st.insert(arr[i]);
	    }
	    
	    if ((arr.size() - st.size()) % 2 == 0) {
	        cout << st.size() << endl;
	    } else cout << st.size() - 1 << endl;
	}

}

// the link : https://codeforces.com/contest/1692/problem/B
