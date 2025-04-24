#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll w,h;
    cin>>w>>h;
    map<ll,ll> MX;
    char A;
    for(int i=0;i<4;i++)
    {
        ll k;
        cin>>k;
        ll mn=INT_MAX,mx=INT_MIN;
        for(int j=0;j<k;j++)
        {
            ll a;
            cin>>a;
            mn=min(a,mn);
            mx=max(a,mx);
        }
        MX[i]=(mx-mn);
    }

    ll ans=INT_MIN;
    for(auto i:MX)
    {
        if(i.first<2)
        {
            ans=max(ans,h*i.second);
        }
        else
        {
            ans=max(ans,w*i.second);
        }
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