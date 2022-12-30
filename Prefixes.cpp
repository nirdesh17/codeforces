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
    ll min1=0;
    for(ll i=0;i<n;i+=2)
    {
        if(s[i]==s[i+1])
        {
            min1++;
            if(s[i]=='a')
            s[i]='b';
            else
            s[i]='a';
        }  
    }
        cout<<min1<<endl;
        cout<<s<<endl;
    return 0;
}