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
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a.begin(),a.end());
    ll ans=0;
    int i=n-1;
    for( i;i>=0;i--)
    {
        if(a[i]>=x)
            ans++;
        else
            break;
    }
    for(int j=i;j>=0;j--)
    {
        ll sum=a[j]*(i-j+1);
        if(sum>=x)
        {
            ans++;
            i=j-1;
        }
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