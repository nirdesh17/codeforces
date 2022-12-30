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
        ll a,b;
        cin>>a>>b;
        char c[26]={'a','b','c','d','e','f','g','h','i','j',
                    'k','l','m','n','o','p','q','r','s','t',
                    'u','v','w','x','y','z'};
        vector<char> d;
        for(ll i=0;i<a/b+1;i++)
        {
            for(ll j=0;j<b;j++)
            {
                d.push_back(c[j]);
            }
        }  
        for(ll i=0;i<a;i++)
        {
            cout<<d[i];
        }          
        cout<<endl;
    }
    return 0;
}