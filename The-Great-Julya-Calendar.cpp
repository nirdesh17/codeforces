#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll num(ll n)
{
    ll max=-1;
    while(n>0)
    {
        if(n%10>max)
        max=n%10;

        n/=10;
    }
    return max;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    
    ll counter=0;
    while(n>0)
    {
        n=n-num(n);
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}