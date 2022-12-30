#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,g;
    cin>>s;
    cin>>g;
    ll i=s.length()-1;
    ll j=g.length()-1;
    ll counter=0;
   while(i>=0 && j>=0)
   {
    if(s[i]==g[j])
    {
        counter+=2;
    }
    else
    {
        break;
    }
    i--,j--;
   }
   ll a=s.length()+g.length();
   ll c=a-counter;
   cout<<c<<endl;  
    return 0;
}