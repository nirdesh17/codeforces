#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
            cnt++;
    }
    if(cnt%2!=0)
    {
        cout<<-1<<endl;
        return;
    }
    if(cnt==0)
    {
        cout<<1<<endl;
        return;
    }
    ll A=0;
    for(int i=0;i<n;i++)
    {
        if(A==(cnt/2))
        {
            cout<<i<<endl;
            return;
        }
        else if(a[i]==2)
            A++;
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