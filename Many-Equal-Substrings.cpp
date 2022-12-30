#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,a;
    string s,s1;
    cin>>n>>m;
    cin>>s;
    a=n-1;
    while(s.substr(0,a)!=s.substr(n-a))
    a--;
    for(ll i=a;i<s.length();i++)
    {
        s1=s1+s[i];
    }
    for(ll i=0;i<m-1;i++)
    {
        s=s+s1;
    }
    cout<<s<<endl;
    return 0;
}