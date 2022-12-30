#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            if(a[i].length()>a[j].length())
            {
                swap(a[i],a[j]);
            }
        }
    }
    bool yes=true;
    for(ll i=0;i<n-1;i++)
    {
        if (a[i+1].find(a[i]) != std::string::npos)
         yes=true;
         else
         {
            yes=false;
            break;
         }      
    }
    if(yes)
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}