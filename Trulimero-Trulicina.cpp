#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T min(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>> ans(n,vector<ll>(m,0));
    ans[0][0]=1;
    for(int i=1;i<m;i++)
    {
        ans[0][i]=(ans[0][i-1]+1)%(k);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[i][j]=(ans[i-1][j]+1)%(k);
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ans[i][j]==0)
                ans[i][j]=k;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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