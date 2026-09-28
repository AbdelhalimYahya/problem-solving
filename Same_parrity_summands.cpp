#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    int n , k;
	    cin >> n >> k;
	    
	    // metrics
	    int remaining = n % k;
	    int number = n / k;
	    vector<int> vec;
	    bool togl = true;
	    
	    // build up the vector
	    for (int i = 0 ; i < k ; i++) {
	            if (i != k-1) {
	                vec.push_back(number);
	            } else {
	                vec.push_back(number+ remaining);
	            }
	        }
	    
      	if (n >= k && (n - k) % 2 == 0) {
          cout << "YES" << endl;
          for (int i = 0; i < k - 1; i++) cout << 1 << " ";
          cout << n - (k - 1) << endl;
      } else if (n >= 2 * k && n % 2 == 0) {
          cout << "YES" << endl;
          for (int i = 0; i < k - 1; i++) cout << 2 << " ";
          cout << n - 2 * (k - 1) << endl;
      } else {
          cout << "NO" << endl;
      }    
	}

}

// the link : https://codeforces.com/contest/1352/problem/B
