#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    if(a[0]==a[n-1])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(a[0]==a[1])
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[n-1]<<" ";
            for(int i=1;i<n-1;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" "<<a[0]<<" ";
            for(int i=1;i<n-1;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
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