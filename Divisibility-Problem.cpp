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
        if(a<b)
        cout<<b-a<<endl;
        else if(a%b==0)
        cout<<0<<endl;
        else
        cout<<abs((a%b)-b)<<endl;
    }
    return 0;
}