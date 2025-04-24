#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    ll i=0,j=n-1;
    while(i<j)
    {
        if(a[i]!=b[i] && a[j]!=b[j])
        {
            break;
        }
        if(a[i]==b[i]) i++;
        if(a[j]==b[j]) j--;
    }   
    while((i-1)>=0 && b[i-1]<=b[i]) i--;
    while((j+1)<n && b[j+1]>=b[j]) j++;

    cout<<i+1<<" "<<j+1<<endl;
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