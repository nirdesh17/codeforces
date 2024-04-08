#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    ll res=2;
    while(1)
    {
        set<ll> rem;
        for(ll i=0;i<n;i++)
        {
            rem.insert(a[i]%res);
        }
        if(rem.size()==2)
            break;
        res*=2;
    }
    cout<<res<<endl;
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