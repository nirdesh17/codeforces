#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    ll sum = 1;
    ll j = 0;
    
    for (int i = 0; i < n; i++) {
        while (j < n && b[j] < a[i]) {
            j++;
        }
        ll cnt = j - i;
        if (cnt <= 0) {
            cout << 0 << endl;
            return;
        }
        sum = (sum * cnt) % MOD;
    }
    cout << sum << endl;
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
