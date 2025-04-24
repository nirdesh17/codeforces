#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    vector<ll> mx1(2*n+1);
    vector<ll> mx2(2*n+1);
    ll cnt=1,i;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            cnt++;
        else
        {
            mx1[a[i-1]]=max(cnt,mx1[a[i-1]]);
            cnt=1;
        }
    }
    mx1[a[i-1]]=max(cnt,mx1[a[i-1]]);
    cnt=1;
    for(i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
            cnt++;
        else
        {
            mx2[b[i-1]]=max(cnt,mx2[b[i-1]]);
            cnt=1;
        }
    }
    mx2[b[i-1]]=max(cnt,mx2[b[i-1]]);

    vector<ll> f(2*n+1);
    for(i=1;i<=2*n;i++)
    {
        f[i]=mx1[i]+mx2[i];
    }
    ll sum=0;
    for(i=1;i<=2*n;i++)
        sum=max(sum,f[i]);

    cout<<sum<<endl;
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