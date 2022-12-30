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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if((abs(a-b)%2!=0 && a<b) || (abs(a-b)%2==0 && a>b))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}