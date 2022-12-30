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
        ll n,m;
        cin>>n>>m;
        if(n==1 || n==2)
        {
            cout<<1<<endl;
        }
        else
        {
            if((n-2)%m==0)
            {
                cout<<((n-2)/m)+1<<endl;
            }
            else
            {
                cout<<((n-2)/m)+2<<endl;
            }
        }
    }
    return 0;
}