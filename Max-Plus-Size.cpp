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
    vector<ll> a(n,0);
    ll mx=INT_MIN;
    ll j=-1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            j=i;
            mx=a[i];
        }
    }
    if(n%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(mx==a[i] && i%2==0)
            {
                j=i;
                break;
            }
        }
    }
    
    ll x=j/2;
    ll y=(n-j-1)/2;
    cout<<(x+y+a[j]+1)<<endl;    
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