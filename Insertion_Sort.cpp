#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arra, int b) {
    int key , j;
    
    for (int g = 0; g < b; g++) {
        if (g > 0) cout << " ";
        cout << arra[g];
    }
    
    cout << endl;
    
    for (int i = 1 ; i < b ; i++) {
        key = arra[i];
        j = i - 1;
        
        while(j >= 0 && arra[j] > key) {
            arra[j+1] = arra[j];
            j--;
        }
        
        arra[j + 1] = key;
        
        for (int g = 0; g < b; g++) {
            if (g > 0) cout << " ";
        cout << arra[g];
        }
        
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;
    
    vector<int> arr(a); 
    
    for (int y = 0 ; y < a ; y++) {
        cin >> arr[y];
    }
    
    insertionSort(arr , a);
	
    }

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A
