#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll sum=1;
    if(a[0]>sum)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>sum)
        {
            cout<<"NO"<<endl;
            return;
        }
        sum+=a[i];
    }
    cout<<"YES"<<endl;
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