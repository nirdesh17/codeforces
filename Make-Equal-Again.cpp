#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll i=0, j=n-1;
    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    while(v[i] == v[i + 1]) {
        i++;
    }

    while(v[j] == v[j - 1]) {
        j--;
    }

    if(v[i] == v[j]) {
        cout << ((n - ((i + 1) + (n - j))) < 0 ? 0 : (n - ((i + 1) + (n - j)))) << endl;
        return;
    }

    cout << min(n - (i + 1), n - (n - j)) << endl;

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