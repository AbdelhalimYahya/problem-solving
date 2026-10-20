#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    double X , P;
    cin >> X >> P;
    cout << fixed << setprecision(2) << (100/(100-X))*P;
 
    return 0;
}

// the link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
