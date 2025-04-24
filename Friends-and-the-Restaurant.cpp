#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> x(n);
    vector<ll> y(n);
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    
    vector<ll> diff(n);
    for(int i=0;i<n;i++)
    {
        diff[i]=y[i]-x[i];
    }
    sort(diff.rbegin(),diff.rend());
    ll ans=0,j=n-1;
    for(int i=0;i<n;i++)
    {
        while(i<j && (diff[i]+diff[j])<0) j--;
        if(j<=i) break;
        ans++;j--;
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