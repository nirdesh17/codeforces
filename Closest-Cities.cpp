#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// Function to calculate the left array
void Left(ll a[], ll left[], map<int, int>& m, int n) {
    left[0] = 0;
    for (int i = 1; i < n; i++) {
        if (m[i] == -1)
            left[i] = 1 + left[i - 1];
        else
            left[i] = left[i - 1] + abs(a[i] - a[i - 1]);
    }
}

// Function to calculate the right array
void Right(ll a[], ll right[], map<int, int>& m, int n) {
    right[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (m[i] == 1) {
            right[i] = 1 + right[i + 1];
        }
        else {
            right[i] = right[i + 1] + abs(a[i] - a[i + 1]);
        }
    }
}

// Function to solve the problem
void solve() {
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll left[n], right[n];

    map<int, int> m;
    m[0] = 1;
    m[n - 1] = -1;
    for (int i = 1; i < n - 1; i++) {
        ll leftDiff = abs(a[i] - a[i - 1]);
        ll rightDiff = abs(a[i] - a[i + 1]);
        if (leftDiff < rightDiff) {
            m[i] = -1;
        }
        else {
            m[i] = 1;
        }
    }

    Left(a, left, m, n);
    Right(a, right, m, n);

    ll q;
    cin >> q;

    while (q--) {
        ll x, y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
        }
        else {
            if (y > x) {
                cout << right[x - 1] - right[y - 1] << endl;
            }
            else {
                cout << left[x - 1] - left[y - 1] << endl;
            }
        }
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