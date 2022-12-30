#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll countDigit(ll n)
{
   if(n == 0)
     return 1;
    ll count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
ll sum(ll n)
{
    ll SUM=1;
    for(ll i=0;i<n;i++)
    {
        SUM=SUM*10;
    }
    return SUM;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(countDigit(n)==1 && n!=1)
        cout<<n-1<<endl;
        else if(n==1)
        cout<<0<<endl;
        else
        cout<<n-sum(countDigit(n)-1)<<endl;
    }
    return 0;
}