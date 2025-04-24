#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n,0);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }

    ll v1=0,v2=0;
    for(ll i=0;i<n;i++) {
        if(i%2==0) {
            v1=__gcd(v1,a[i]);
        } else {
            v2=__gcd(v2,a[i]);
        }
    }

    bool ok=true;
    for(int i=1;i<n;i+=2)
    {
        if(a[i]%v1==0)
        {
            ok=false;
            break;
        }
    }
    if(ok)
    {
        cout<<v1<<endl;
        return;
    }

    ok=true;

    for(int i=0;i<n;i+=2)
    {
        if(a[i]%v2==0)
        {
            ok=false;
            break;
        }
    }

    if(ok)
    {
        cout<<v2<<endl;
        return;
    }
    cout<<0<<endl;
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