#include <bits/stdc++.h>
using namespace std;

int main() {
	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    string dir, word;
    cin >> dir >> word;
    
    string result = "";
    
    for (int i = 0 ; i < word.size() ; i++) {
        int index = keyboard.find(word[i]);
        
        if (dir == "L") {
            index++;
            result += keyboard[index];
        } else if (dir == "R") {
            index--;
            result += keyboard[index];
        }
    }
    
    cout << result;
}


// the link : https://codeforces.com/problemset/problem/474/A
