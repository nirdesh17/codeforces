#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<ll> b;
    for(int i=1;i<n;i++) {
        if(n%i==0) {
            b.push_back(i);
        }
    }

    
    ll ans=0;
    for(int i=0;i<b.size();i++)
    {
        ll mx=LLONG_MIN,mn=LLONG_MAX;
        for(int j=0;j<n;j+=b[i])
        {
            ll sum = accumulate(a.begin() + j, a.begin() + j + b[i], 0LL);
            // cout<<"sum-"<<sum<<endl;
            mx=max(mx,sum);
            mn=min(mn,sum);
            // cout<<"mx-"<<mx<<" mn-"<<mn<<endl;
        }
        ans=max(ans,mx-mn);
    }
    cout<<ans<<endl;
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