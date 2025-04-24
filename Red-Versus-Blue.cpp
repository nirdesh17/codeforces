#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,r,b;
    cin>>n>>r>>b;
    string s="";
    ll k=(r)/(b+1);
    ll x=b+1;
    ll rem=r%x;

    while(x--)
    {
        ll a=k;
        while(a--)
        {
            s+='R';
        }
        if(rem>0)
        {
            s+='R';
            rem--;
        }
        if(b>0)
        {
            s+='B';
            b--;
        }
    }   
    
    cout<<s<<endl;
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