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
    for(int i=0;i<n;i++)
    {
        if(i!=x)
        {
            cout<<i<<" ";
        }
    }
    if(x!=n)
    {
        cout<<x<<endl;
    }
    else
    {
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