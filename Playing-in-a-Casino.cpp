#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    vector<vector<ll>> b(m,vector<ll>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[j][i]=a[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        sort(b[i].begin(),b[i].end());
        ll sum1=0,sum2=0;
        for(int j=0;j<n;j++)
        {
            sum1+=(b[i][j]*j);
            sum2+=(b[i][j]*(n-j-1));
        }     
        ans+=abs(sum1-sum2);
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