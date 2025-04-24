#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> pre(n,0),suff(n,0);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pre[0]=a[0];
    for(ll i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    suff[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]+a[i];
    }
    ll i=0,j=n-1;
    ll ans=0;
    while(i<j)
    {
        if(pre[i]==suff[j])
        {
            ans=i+1+(n-j);
            i++;
            j--;
        }
        else if(pre[i]<suff[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if(i<j && pre[i]==suff[j])
        ans=i+1+(n-j);
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