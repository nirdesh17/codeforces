#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// similar as find next or previus smaller element here we find next different element
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> nxt(n,n);
    nxt[n-1]=n;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]!=a[i+1])
        {
            nxt[i]=i+1;
        }
        else
        {
            nxt[i]=nxt[i+1];
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--,r--;
        if(nxt[l]>r)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            cout<<l+1<<" "<<nxt[l]+1<<endl;
        }
    
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