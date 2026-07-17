#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> days(n);
	
	for (int i = 0 ; i < days.size() ; i++) {
	    cin >> days[i];
	}
	
	int chest = 0, biceps = 0, back = 0;
	string muscle = "chest";
	
	for (int i = 0 ; i < days.size() ; i++) {
	    if (muscle == "chest") {
	        chest += days[i];
	        muscle = "biceps";
	    } else if (muscle == "biceps") {
	        biceps += days[i];
	        muscle = "back";
	    } else if (muscle == "back") {
	        back += days[i];
	        muscle = "chest";
	    }
	}
	
	if (chest > biceps && chest > back) {
	    cout << "chest";
	} else if ( biceps > chest && biceps > back) {
	    cout << "biceps";
	} else if (back > biceps && back > chest) {
	    cout << "back";
	}

}


// the link : https://codeforces.com/problemset/problem/255/A
