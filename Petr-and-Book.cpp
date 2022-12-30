#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[7];
    for(ll i=0;i<7;i++)
    {
        cin>>a[i];
    }
    while(n>0)
    {
        for(ll i=0;i<7;i++)
        {
            n=n-a[i];
            if(n<=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}