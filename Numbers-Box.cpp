#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    ll sum=0,minus=0,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            sum+=abs(a[i][j]);
            if(a[i][j]<1) minus++;
            mn=min(mn,abs(a[i][j]));
        }
    }
    if(minus%2==0) cout<<sum<<endl;
    else cout<<sum-mn-mn<<endl;
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