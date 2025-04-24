#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> p(n),s(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    p[0]=a[0];
    for(int i=1;i<n;i++)
        p[i]=a[i]+p[i-1];
    s[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        s[i]=s[i+1]+a[i];
    

    ll mx=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        mx=max(mx,__gcd(p[i],s[i+1]));
    }
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