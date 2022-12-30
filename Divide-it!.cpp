#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll j=0;
        while(n!=1)
        {
            if(n%2==0)
            n=n/2;
            else if(n%3==0)
            n=(2*n)/3;
            else if(n%5==0)
            n=(4*n)/5;
            else
            {
                j=-1;
                break;
            }

            j++;
        }
        cout<<j<<endl;
    }
    return 0;
}