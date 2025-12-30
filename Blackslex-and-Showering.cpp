#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T mx(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T mn(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        sum+=abs(a[i]-a[i+1]);
    }

    ll mx=sum;
    for(ll i=1;i<n-1;i++){
        ll A=abs(a[i]-a[i-1]);
        ll B=abs(a[i]-a[i+1]);
        ll C=abs(a[i-1]-a[i+1]);

        mx=min(mx,(sum-A-B+C));
    }

    ll A=abs(a[0]-a[1]);
        ll B=abs(a[n-1]-a[n-2]);
    mx=min(mx,sum-A);
    mx=min(mx,sum-B);

    cout<<mx<<endl;

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