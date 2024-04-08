#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum^a[i];
    }
    if(sum==0 || n%2!=0)
        cout<<sum<<endl;
    else if(n%2==0 && sum!=0)
    {
        cout<<-1<<endl;
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