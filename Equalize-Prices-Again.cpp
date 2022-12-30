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
        ll n;
        cin>>n;
        ll a[n],sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%n==0)
        {
            cout<<sum/n<<endl;
        }
        else
        {
            cout<<(sum/n)+1<<endl;
        }
    }
    return 0;
}