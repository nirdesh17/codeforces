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
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(a.size()>1)
    {
        ll x=a[0];
        ll y=a[1];
        a.erase(a.begin());
        a.erase(a.begin());
        ll ans=floor((x+y)/2);
        a.push_back(ans);
        sort(a.begin(),a.end());
    }
    cout<<a[0]<<endl;
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