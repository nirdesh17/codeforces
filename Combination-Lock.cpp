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
    if(n%2==0)
    {
        cout<<-1<<endl;
        return;
    }

    for(ll i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(ll i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
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