#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    bool check=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==k)
            check=true;
    }
    if(check)
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;    
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