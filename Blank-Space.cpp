#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=0;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            sum++;
        }
        else
        {
            mx=max(mx,sum);
            sum=0;
        }
    }
    mx=max(mx,sum);
    cout<<mx<<endl;
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