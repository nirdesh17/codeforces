#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll> v(n,0);
    v[n-1]=k*b;
    s-=v[n-1];
    if(0>s)
    {
        cout<<-1<<endl;
        return;
    }
    int i=n-1;
    while (i>=0 && s>0)
    {
        v[i]+=min(k-1,s);
        s-=min(k-1,s);
        i--;
        // cout<<"s-"<<s;
    }
    if(s>0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
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