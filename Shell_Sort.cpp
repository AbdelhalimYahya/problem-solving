#include <bits/stdc++.h>
using namespace std;

void shell(vector<int>& arr) {
    int n = arr.size();
    int cardsMoved = 0;

    // Build Knuth's gaps
    vector<int> gapsV;
    int g = 1;
    while (g < n) {
        gapsV.push_back(g);
        g = 3 * g + 1;
    }
    
    if (gapsV.empty()) gapsV.push_back(1); 
    reverse(gapsV.begin(), gapsV.end());

    for (int idx = 0; idx < gapsV.size(); idx++) {
        int gap = gapsV[idx];

        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
                cardsMoved++;
            }

            arr[j] = temp;
        }
    }

    cout << gapsV.size() << endl;
    for (int t = 0; t < gapsV.size(); t++) {
        if (t > 0) cout << " ";
        cout << gapsV[t];
    }
    cout << endl;
    cout << cardsMoved << endl;
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0 ; i < arr.size() ; i++) {
        cin >> arr[i];
    }
    
    shell(arr);
    
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_D
