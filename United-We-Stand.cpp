#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> b,c;
    sort(a.begin(),a.end());
    b.push_back(a[0]);
    int i=1;
    while(a[i]==a[i-1] && i<n)
    {
        b.push_back(a[i]);
        i++;
    }
    while(i<n)
    {
        c.push_back(a[i]);
        i++;
    }
    if(b.size()==0 || c.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
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