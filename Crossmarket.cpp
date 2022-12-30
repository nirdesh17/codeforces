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
        ll n,m;
        cin>>n>>m;
        if(n==1 && m==1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<((max(n,m)-1)+((min(n,m)-1)*2)+1)<<endl;
        }
    }
    return 0;
}