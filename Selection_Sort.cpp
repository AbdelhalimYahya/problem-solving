#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr , int a ,int &swp) {
    int mininx;
    
    for (int i = 0 ; i < a - 1 ; i++) {
        mininx = i;
        
        for (int j = i + 1 ; j < a ; j++) {
            if (arr[j] < arr[mininx]) {
                mininx = j;         
            }
        }

        if (mininx != i) {
            swap(arr[i], arr[mininx]);
            swp++;
        }
    }
}

int main() {
	int n , swp = 0;
	cin >> n;
    vector<int> vc(n);
    
    for (int i = 0 ; i < n ; i++) {
        cin >> vc[i];
    }
    
    selectionSort(vc , n , swp);
    
    for (int i = 0 ; i < n ; i++) {
        if (i > 0) cout << " ";
        cout << vc[i];
    }

    cout << endl << swp << endl;
    
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B
