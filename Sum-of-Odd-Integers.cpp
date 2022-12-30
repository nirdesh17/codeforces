#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        if((n%2==0 && m%2==0) ||(n%2!=0 && m%2!=0))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}