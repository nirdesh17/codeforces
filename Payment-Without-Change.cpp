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
        ll a,b,c,s;
        cin>>a>>b>>c>>s;
        if(s/c<=a)
        {
            a=s/c;
            if((a*c)+b>=s)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        } 
        else
        {
            a=a;
            if((a*c)+b>=s)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}