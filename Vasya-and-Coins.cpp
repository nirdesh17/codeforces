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
        ll x,y;
        cin>>x>>y;
        if(x==0)
        cout<<1<<endl;
        else
        cout<<(1*x)+(2*y)+1<<endl;
    }
    return 0;
}