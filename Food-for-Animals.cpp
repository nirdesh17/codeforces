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
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x=x-a;
        if(x<0)
        x=0;
        y=y-b;
        if(y<0)
        y=0;
        if(x+y<=c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}