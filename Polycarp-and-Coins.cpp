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
        ll a=n-((n/3)*2),b=n/3;
        if(abs(a-b)<abs((a-2)-(b+1)))
        cout<<a<<" "<<b<<endl;
        else
        cout<<a-2<<" "<<b+1<<endl;
    }
    return 0;
}