#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> pre(n+1,0);
    pre[1]=a[0];
    for(int i=2;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
    }
    // for(int i=0;i<=n;i++) cout<<pre[i]<<" ";
    // cout<<endl;
    for(int i=0;i<q;i++)
    {
        ll sum=pre[n];
        ll l,r,k;
        cin>>l>>r>>k;
        
        sum-=(pre[r]-pre[l-1]);
        // cout<<sum<<endl;
        sum+=(k*(r-l+1));
        // cout<<sum<<endl;
        if(sum%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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