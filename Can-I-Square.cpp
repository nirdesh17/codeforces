#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    ll ans=sqrt(sum);
    ll res=ans*ans;
    if(res==sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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