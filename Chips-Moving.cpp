#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll odd=0,even=0;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]%2==0)
      even++;
      else
      odd++;
    }
    cout<<min(odd,even)<<endl;
    
    return 0;
}