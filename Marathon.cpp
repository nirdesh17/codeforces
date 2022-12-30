#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a[4];
        ll count=0;
        for(ll j=0;j<4;j++)
        {
            cin>>a[j];
            if(a[0]<a[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}