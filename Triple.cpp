#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    
	    bool wrng = false;
	    vector<int> arry(a);
	    unordered_map<int , int> mp;
	    
	    for (int i = 0 ; i < a ; i++) {
	        cin >> arry[i];
	        
	        mp[arry[i]]++;
	        if (mp[arry[i]] >= 3 && wrng == false) wrng = true;
	    }
	    
	    for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second >= 3) {
                cout << it->first;
                wrng = true;
                break;
            }       
        }
        
        if (wrng == false) cout << -1;
        
        cout << endl;
	}

}

// the link : https://codeforces.com/contest/1669/problem/B
