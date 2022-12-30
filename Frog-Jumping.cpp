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
        ll a,b,c,sum=0;
        cin>>a>>b>>c;
        cout<<(a*((c+1)/2))-(b*(c-(c+1)/2))<<endl;
       
    }
    return 0;
}