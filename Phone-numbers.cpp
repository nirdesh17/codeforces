#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s.length()%2==0)
    {
        cout<<s[0]<<s[1];
        for(ll i=2;i<n;i+=2)
        {
            cout<<"-";
            cout<<s[i]<<s[i+1];
        }
        cout<<endl;
    }
    else
    {
        cout<<s[0]<<s[1]<<s[2];
        for(ll i=3;i<n;i+=2)
        {
            cout<<"-";
            cout<<s[i]<<s[i+1];
        }
        cout<<endl;
    }
    return 0;
}