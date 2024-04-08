#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b,l;
    cin>>a>>b>>l;
    ll ans=0;
    ll i=0;
    set<ll>s;
    while(pow(a,i)<=l)
    {
        ll j=0;
        while(pow(b,j)<=l)
        {
            ll A=pow(a,i);
            ll B=pow(b,j);
            // cout<<A<<" "<<B<<endl;
            if(l%(A*B)==0)
            {
                s.insert(A*B);
            }
            j++;
        }
        i++;
    }
    cout<<s.size()<<endl;
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