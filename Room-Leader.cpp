#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    ll max=-2501;
    string c;
    for(ll i=0;i<t;i++)
    {
        string s;
        cin>>s;
        ll a[7],b;
        for(ll j=0;j<7;j++)
        {
            cin>>a[j];
        }
        b=a[0]*100-a[1]*50;
        for(ll j=2;j<7;j++)
        {
            b=b+a[j];
        }
        if(b>max)
        {
            max=b;
            c=s;
        }
    }
    cout<<c<<endl;
    return 0;
}