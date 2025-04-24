#include<bits/stdc++.h>
using namespace std;
#define ll long long int


  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a(n);
        ll k=1;
        // a[i] can be duplicate
        for(int i=1;i<=n;i++)
        {
            a[i-1]=(((l-1)/i)+1)*i;
            k=k&&a[i-1]<=r;
        }
        if(k)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}