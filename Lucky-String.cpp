#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // char a[4]={'a','b','c','d'};
    ll n;
    cin>>n;
    string s="abcd",g;
    string a[4]={"a","b","c","d"};
    for(ll i=0;i<n/4;i++)
    {
        g=g+s;
    }
    for(ll i=0;i<n%4;i++)
    {
        g=g+a[i];
    }
    cout<<g<<endl;
    
    return 0;
}