#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll memo(string& a,string& b,ll i,ll j, vector<vector<ll>>& dp)
{
    if(i<0 || j<0)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    ll result = 0;
    if(a[i]==b[j])
    {
        result = 1 + memo(a,b,i-1,j-1,dp);
    }
    
    return dp[i][j]=result;
}

void solve() {
    string a,b;
    cin>>a;
    cin>>b;
    ll n=a.size(),m=b.size();

    vector<vector<ll>> dp(n+1,vector<ll>(m+1,-1));
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ans = max(ans, memo(a, b, i, j, dp));
        }
    }
    // cout << ans << endl;

    cout<<n+m-ans-ans<<endl;
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
