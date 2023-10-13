#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; // Use typedef or using for clarity

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> l(k), r(k); // Use vectors instead of arrays for simplicity
    for (ll i = 0; i < k; i++)
        cin >> l[i];
    for (ll i = 0; i < k; i++)
        cin >> r[i];

    ll q;
    cin >> q;
    vector<ll> Q(q); // Use a vector for Q
    for (ll i = 0; i < q; i++)
        cin >> Q[i];

    sort(Q.begin(), Q.end()); // Use vector's begin() and end() for sorting

    vector<ll> ans;
    ll j = 0;
    for (ll i = 0; i < k; i++) {
        while (j < q && l[i] <= Q[j] && Q[j] <= r[i]) {
            ans.push_back(i);
            j++;
        }
    }
    for (ll i = 0; i < ans.size(); i++) {
        ll a = min(Q[i], r[ans[i]] + l[ans[i]] - Q[i]);
        ll b = max(Q[i], r[ans[i]] + l[ans[i]] - Q[i]);
        reverse(s.begin() + a - 1, s.begin() + b);
    }

    cout << s << endl;
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
