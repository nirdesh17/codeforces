#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    ll cnt=0;
    for(int i=n-2;i>=0;i--)
    {
        while(a[i]>=a[i+1] && a[i]>0)
        {
            a[i]=a[i]>>1;
            cnt++;
        }
        if(a[i]==a[i+1])
        {
            cout<<-1<<endl;
            return;
        }
    }
    // cout<<"ans-"<<cnt<<endl;
    cout<<cnt<<endl;
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