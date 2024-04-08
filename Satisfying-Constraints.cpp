#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a;
    ll mi=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x==1)
        {
            mx=max(mx,y);
        }
        else if(x==2)
        {
            mi=min(mi,y);
        }
        else
            a.push_back(y);
    }
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>=mx && a[i]<=mi)
        {
            cnt++;
        }
    }
    // cout<<mx<<" "<<mi<<" "<<cnt<<endl;
    if(mi<mx)
        cout<<0<<endl;
    else
        cout<<mi-mx+1-cnt<<endl;
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