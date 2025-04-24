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
    ll n,m,x;
    cin>>n>>m>>x;
    ll ans=x/n;
    if(x%n!=0)
    {
        ans++;
    }

    ll sum=m-ans;
    if(sum==0)
    {
        cout<<ans<<endl;
        return;
    }
    ll SUM=ans/(sum+1);
    if((ans%(sum+1))!=0)
    {
        SUM++;
    }
    cout<<SUM<<endl;
   
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