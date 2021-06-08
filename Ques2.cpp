#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int s = 2*n - 2;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            cout << "*";
        }
        for (j = i + 1; j <= s; j++) {
            cout << " ";
        }
        for (j = s + 1; j < 2 * n; j++) {
            cout << "*";
        }
        s--;
        cout <<endl;
    }
    s = n;
    for (i = n-1; i >= 0; i--) {
        for (j = 0; j < i + 1; j++) {
            cout << "*";
        }
        for (j = i + 1; j < s; j++) {
            cout << " ";
        }
        for (j = s ; j < 2 * n; j++) {
            cout << "*";
        }
        s++;
        cout <<endl;
    }

    return 0;
}