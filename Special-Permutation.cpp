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
        ll a;
        cin>>a;
        cout<<a;
        for(ll j=1;j<a;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }

    return 0;
}