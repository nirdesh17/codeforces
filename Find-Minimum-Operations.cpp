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
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    if(m==1)
    {
        cout<<n<<endl;
        return;
    }
    while(n>0)
    {
        ll i=0;
        while(pow(m,i)<=n)
        {
            i++;
        }
        n=n-pow(m,i-1);
        ans++;
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