#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn=INT_MAX;
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,abs(a[i]));
    }
    cout<<mn<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}