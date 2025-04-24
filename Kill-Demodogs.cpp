#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll max(ll a,ll b)
{
    return a>b?a:b;
}
// tle
ll dfs(ll i, ll j, ll ans,ll n){
    if(i>n || j>n) return 0;
    ans+=(i*j)+max(dfs(i,j+1,ans,n),dfs(i+1,j,ans,n));
    return ans;
}
void solve() {
    // https://codeforces.com/blog/entry/110630
    // we use math formula
    ll n;
    cin>>n;
    ll m=1e9+7;
    ll ans=((((n*(n+1))%m)*(4*n-1))%m*337)%m;
    // ll i=1,j=1;
    // while(i<=n && j<=n)
    // {
    //     ans+=(i*j);
    //     if(j+1<=n)
    //     {
    //         ans+=(i*(j+1))%m;
    //     }
    //     i++;j++;
    // }
    // // ans=dfs(1,1,ans,n);
    // ans*=2022;
    
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