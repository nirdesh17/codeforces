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
        ll n;
        cin>>n;
        ll a;
        cin>>a;
        ll b=a/pow(10,(n-1));
        ll c=b;
        if(b==9)
        {
            b=1;
            n=n+1;
            c=b;
        }
        else
        {
            b=b+1;
            c=b;
        }
        for(ll i=0;i<n-1;i++)
        {
            b=b*10;
        }
        b=b+c;
        cout<<b-a<<endl;
        
    }
    return 0;
}