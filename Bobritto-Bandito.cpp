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
    ll n,m,l,r;
    cin>>n>>m>>l>>r;
    int a=0,b=0;
    while(a<r && m>0)
    {
        a++;
        m--;
    }
    while(m>0)
    {
        b--;
        m--;
    }
    cout<<b<<" "<<a<<endl;
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