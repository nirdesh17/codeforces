#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T Mmax(T x,T y)
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
    vector<ll> v(n);
    // brute force
    // ll mx=0;
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // ll ans=0;
    // for(ll i=0;i<n;i++)
    // {
    //     ll sum=0;
    //     for(ll j=0;j<n;j++)
    //     {
    //         sum+=(v[i]^v[j]);
    //     }
    //     ans=Mmax(ans,sum);
    // }
    // cout<<ans<<endl;

    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<ll> bit(30,0);
    for(int i=0;i<n;i++)
    {
        int a=v[i];
        int j=0;
        while(a>0)
        {
            if(a&1)
            {
                bit[j]++;
            }
            j++;
            a=a>>1;
        }
    }
    // for(auto i:bit)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    ll ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int k=v[i];
        ll sum=0;
        int j=0;
        for(int j=0;j<30;j++)
        {
            if(k&1)
            {
                sum=sum+(pow(2,j)*(n-bit[j]));
            }
            else
            {
                sum=sum+(pow(2,j)*bit[j]);
            }
            k=k>>1;
        }
        ans=max(sum,ans);
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