#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    vector<ll> pre(n);
    ll sum=0;
    ll res;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        pre[i]=sum;
    }

    ll r=n-1;
    ll l=r-x+1;

    res=l<=0?-1*pre[r]:2*pre[l-1]-pre[r];

    for(int i=max(n-k,0LL);i<n;i++)
    {
        if(i==0)
        {
            res = max(res, 0LL);
            continue;
        }
        r=i-1;
        l=r-x+1;
        res=l<=0?max(res,-1*pre[r]):max(res,2*pre[l-1]-pre[r]);
    }
    cout<<res<<endl;
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
