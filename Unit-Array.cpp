#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    ll o=0,e=0;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0) o++;
        else e++;
    }
    if(e<=o)
    {
        if(e%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }   
    else if(e>o)
    {
        ll a=(e-o)/2+(e-o)%2;
        e=e-a;
        if(e%2==0)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a+1<<endl;
        }
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