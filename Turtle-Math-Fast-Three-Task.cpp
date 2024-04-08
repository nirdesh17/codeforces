#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    ll cnt=0;
    ll cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%3==1)
            cnt1++;
        else if(a[i]%3==2)
            cnt2++;
        sum+=a[i];
    }
    if(sum%3==0)
    {
        cout<<0<<endl;
        return;
    }
    if(sum%3==2)
    {
        cout<<1<<endl;
    }
    else if(sum%3==1 and cnt1>0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    return ;
    
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