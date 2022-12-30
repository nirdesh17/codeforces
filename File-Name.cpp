#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string a;
    cin>>a;
    ll k=0;
    for(ll j=0;j<n-2;j++)
    {
        if(a[j]=='x' && a[j+1]=='x' && a[j+2]=='x')
        {
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}