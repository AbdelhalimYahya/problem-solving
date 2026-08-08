#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int current = 0;
    int max_capacity = 0;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        current = current - a + b;
        max_capacity = max(max_capacity, current);
    }
    
    cout << max_capacity << endl;
    
    return 0;
}

// the link : https://codeforces.com/problemset/problem/116/A
