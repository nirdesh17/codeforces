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
        ll b[a];
        for(ll j=0;j<a;j++)
        {
            cin>>b[j];
        }
        ll c[a];
        for(ll j=0;j<a;j++)
        {
            if(j%2==0)
            {c[j]=b[j/2];}
            else
            { c[j]=b[a-((j/2)+1)];}
        }
        
        cout<<c[0];
        for(ll j=1;j<a;j++)
        {
            cout<<" "<<c[j];
        }
        cout<<endl;
    }
    return 0;
}