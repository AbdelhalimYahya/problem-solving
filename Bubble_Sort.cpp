#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr , int a ,int &swp) {
    for (int i = 0 ; i < a - 1 ; i++) {
        for (int j = 0 ; j < a - i - 1 ; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                swp++;
            }
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
    
    bubbleSort(vc , n , swp);
    
    for (int i = 0 ; i < n ; i++) {
        if (i > 0) cout << " ";
        cout << vc[i];
    }
    
    cout << endl << swp << endl;
    
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A
