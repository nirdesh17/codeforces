#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(ll n)
{
    ll Sum=0;
    while(n!=0)
    {
        Sum=Sum+n%10;
        n=n/10;
    }
    return Sum;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(sum(n)%4!=0)
    {
        n++;
    }
    // if(sum(n)%4==1)
    // {
    //     cout<<n+3<<endl;
    // }
    // else if(sum(n)%4==2)
    // {
    //     cout<<n+2<<endl;
    // }
    // else
    // {
    //     cout<<n+1<<endl;
    // }
    cout<<n<<endl;
    return 0;
}