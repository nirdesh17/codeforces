#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll cnt=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            a[i]=0;
        }
        else
        {
            a[i]=1;
        }
    }   
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
        }
        else
        {
            ans+=cnt;
            cnt=0;
        }
    }
    ans+=cnt;
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