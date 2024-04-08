#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll mn=INT_MAX;
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mn=min(mn,__gcd(a[i],a[j]));
        }
    }
    if(mn<=2)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;    
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