#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll zero=0;
    for(ll i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]==0)
        {
            zero++;
        }
    }
    ll cnt=0;
    ll i=0,j=0;
    while(j<n)
    {
        if(a[j]==0)
        {
            cnt=max(cnt,j-i);
            i=j+1;
        }
        j++;
    }
    cnt=max(cnt,j-i);
    if(zero==n)
    {
        cout<<0<<endl;
    }
    else if(cnt+zero==n)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
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