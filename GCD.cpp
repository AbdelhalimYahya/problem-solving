#include <bits/stdc++.h>
using namespace std;

void GCD(int a , int b) {
    
    while (b != 0) {
        int tempA = a;
        a = b;
        b = tempA % b;
    }
    
    cout << a << endl;
}

int main() {

    int a , b;
    cin >> a >> b;
    
    GCD(a , b);

}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B
