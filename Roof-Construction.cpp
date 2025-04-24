#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    a[n-1]=n-1;
    ll i=n-2;
    ll j=n-1;
    while(i>0)
    {
        if((i^a[j])>a[j])
        {
            a[j-1]=0;
            break;
        }
        else
        {
            a[j-1]=i;
            i--;j--;
        }
    }   
    for(ll k=0;k<j-1;k++)
    {
        a[k]=i;
        i--;
    }
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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