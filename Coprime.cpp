#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    ll mx = LLONG_MIN;
    vector<ll> b(1001, -1);
    for (int i = 0; i < n; i++) {
        b[a[i]] = i + 1;
    }
    
    for (int i = 1; i < 1001; i++) {
        for (int j = i; j < 1001; j++) {
            if (b[i] == -1 || b[j] == -1)
                continue;
            if (__gcd(i, j) == 1) {
                mx = max(mx, (b[i] + b[j]));
            }
        }
    }
    
    if (mx == LLONG_MIN)
        cout << -1 << endl;
    else
        cout << mx << endl;
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
