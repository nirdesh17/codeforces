#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char b[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    char c, d;
    cin >> c >> d;
    int i = c - 'a', j = d - '0' - 1;

    // Moving horizontally to the left
    for (int x = i - 1; x >= 0; x--) {
        cout << a[x] << b[j] << endl;
    }

    // Moving horizontally to the right
    for (int x = i + 1; x < 8; x++) {
        cout << a[x] << b[j] << endl;
    }

    // Moving vertically upwards
    for (int y = j - 1; y >= 0; y--) {
        cout << a[i] << b[y] << endl;
    }

    // Moving vertically downwards
    for (int y = j + 1; y < 8; y++) {
        cout << a[i] << b[y] << endl;
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}