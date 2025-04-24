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
    ll n;
    cin>>n;
    vector<vector<ll>> g(n,vector<ll> (n));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }

    vector<ll> ans(2*n+1,0);
    vector<ll> mp(2*n+1,0);
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(ans[i+j+1+1]==0)
            {
                ans[i+j+1+1]=g[i][j];
                mp[ans[i+j+1+1]]=1;
            }
        }
    }
    for(int i=1;i<=2*n;i++)
    {
        if(ans[i]==0)
        {
            for(int j=1;j<=2*n;j++)
            {
                if(mp[j]==0)
                {
                    ans[i]=j;
                    break;
                }
            }
            break;
        }
    }
    for(int i=1;i<=2*n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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