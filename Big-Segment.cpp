#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    ll a,b,c,d,e=1;
    cin>>a>>b;
    for(ll i=1;i<t;i++)
    {
        cin>>c>>d;
        if(c<=a && d>=b)
        {e=i+1;}
        else if(c<a || d>b)
        {
            e=-1;
        }
        a=min(a,c);
        b=max(b,d);
    }
    cout<<e<<endl;
    
    return 0;
}