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
        ll n,k,x;
        cin>>n>>k>>x;
        if(n<k || x+1<k)
        {
            cout<<-1<<endl;
            continue;
        }
        ll a=k-1;
        ll sum=(a*(a+1))/2;
        n=n-k;
        while(n--)
        {
            if(x==k)
                sum+=x-1;
            else
                sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}