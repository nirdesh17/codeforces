#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll minus=0,mn=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            minus++;
        }
        mn=min(mn,abs(a[i]));
        sum+=abs(a[i]);
    }
    if(minus%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-2*mn<<endl;
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