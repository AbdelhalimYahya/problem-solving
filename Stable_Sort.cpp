#include <bits/stdc++.h>
using namespace std;

// Card struct
struct Card {
    char suit;
    int value;
    int id;
};

// Bubble Sort
void bubbleSort(vector<Card>& c) {
    int n = c.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (c[j].value > c[j+1].value) {
                swap(c[j], c[j+1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<Card>& c) {
    int n = c.size();
    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (c[j].value < c[minIdx].value) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(c[i], c[minIdx]);
        }
    }
}

// Check stability
bool isStable(vector<Card>& c) {
    for (int i = 0; i < c.size(); i++) {
        for (int j = i + 1; j < c.size(); j++) {
            if (c[i].value == c[j].value && c[i].id > c[j].id) {
                return false;  // order changed
            }
        }
    }
    return true;
}

// Print cards
void printCards(vector<Card>& c) {
    for (int i = 0; i < c.size(); i++) {
        if (i > 0) cout << " ";
        cout << c[i].suit << c[i].value;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<Card> original(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        original[i].suit = s[0];        
        original[i].value = s[1] - '0'; 
        original[i].id = i;             
    }

    // Bubble Sort
    vector<Card> bubble = original;
    bubbleSort(bubble);
    printCards(bubble);
    cout << "Stable" << endl;

    // Selection Sort
    vector<Card> selection = original;
    selectionSort(selection);
    printCards(selection);
    cout << (isStable(selection) ? "Stable" : "Not stable") << endl;

    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C
